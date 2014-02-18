#include "LLVMTransform.h"

#include "../FunctionFinder.h"
#include "../ONVisitor.h"
#include "../OperatorFinder.h"
#include "../OperatorNameMangle.h"
#include "../ParameterInfo.h"
#include "../ParameterVisitor.h"
#include "../RVVisitor.h"
#include "../TypeVisitor.h"

#include "../../Error/VerboseInfo.h"

#include <map>

static int siTempCounter = 0;
static int siTabLevel = 0;

TypeVisitor sxCurrentTypeScopeVisitor;
std::string sszCurrentFunctionName = "";
std::string sszCurrentNamespace = "_dot_";

struct Local
{
    DetailedTypeInfo* pType;
    std::string szLLVMIdent;
};
std::map< std::string, Local > gxLocals;

extern std::map< std::string, std::string > gszStrings;

std::string stringFromInt( int i )
{
	char buf[ 16 ];
	sprintf( buf, "%d", i );
	return std::string( buf );
}

void LLVMTransformVisitor::visitMain(Main *p)
{
	if( p->listtldeclaration_ )
    {
        siTabLevel = 0;
		p->listtldeclaration_->accept( this );
	}
	
	if( p->listdeclaration_ )
    {
        siTabLevel = 0;
		p->listdeclaration_->accept( this );
	}
}

void LLVMTransformVisitor::visitDNamespace(DNamespace *p)
{	
	sszCurrentNamespace += p->ident_;
	sszCurrentNamespace += "_dot_";
	
	verboseInfo( 2, "Current namespace: %s\n", sszCurrentNamespace.c_str() );
	if( p->listdeclaration_->declaration_ )
	{
		visitListDeclaration( p->listdeclaration_ );
	}
	
	sszCurrentNamespace.resize( sszCurrentNamespace.size() - ( sizeof( "_dot_" ) - 1 ) - strlen( p->ident_ ) );
	verboseInfo( 2, "Current namespace: %s\n", sszCurrentNamespace.c_str() );
}

void LLVMTransformVisitor::visitDDefaultFunction( DDefaultFunction *p )
{
    visitFunction( sszCurrentNamespace + p->ident_, 0, p->listparameterdeclaration_, p->liststatement_ );
}

void LLVMTransformVisitor::visitDFunction(DFunction *p)
{    
	visitFunction( sszCurrentNamespace + p->ident_, p->type_, p->listparameterdeclaration_, p->liststatement_ );
}

void LLVMTransformVisitor::visitFunction( std::string szLLVMName, Type* returnType, ListParameterDeclaration* parameters, ListStatement* statements )
{
    DetailedTypeVisitor tv;
    if( returnType )
    {
        returnType->accept( &tv );
    }
    
    std::string typeReturn = returnType ? "i8" : "void";
    if( tv.pxTypeInfo )
    {
        typeReturn = tv.pxTypeInfo->ShortLLVMName();
    }
    out += "define private ";
    out += typeReturn;
    gszCurrentlyDesiredType = typeReturn.c_str();
    out += " @";
    out += szLLVMName;
    out += "( ";
    ListParameterDeclaration* pList = parameters;

    std::vector< DetailedTypeInfo* > parameterTypes;
    ListParameterDeclaration* lp = pList;
    while( lp && lp->parameterdeclaration_ )
    {
        DetailedTypeVisitor dtv;
        lp->parameterdeclaration_->accept( &dtv );
        lp = lp->listparameterdeclaration_;
        
        parameterTypes.push_back( dtv.pxTypeInfo );
    }
    
    std::map< std::string, Local > oldLocals = gxLocals;
    gxLocals.clear();
    
    for( size_t i = 0; i < parameterTypes.size(); ++i )
    {
        if( parameterTypes[ i ] )
        {
            out += parameterTypes[ i ]->ShortLLVMName();
        }
        else
        {
            parameterTypes[ i ] = tv.pxTypeInfo;
            out += typeReturn;
        }
        
        ParameterVisitor p;
		pList->parameterdeclaration_->accept( &p );
		out += " %_dot_";
		out += p.szName;
        std::string szLLVMIdent = std::string( "%_dot_" ) + p.szName;
        gxLocals[ szLLVMIdent ].szLLVMIdent = szLLVMIdent;
        gxLocals[ szLLVMIdent ].pType = parameterTypes[ i ];
        
        if( i < ( parameterTypes.size() - 1 ) )
        {
            out += ", ";
        }
        
        pList = pList->listparameterdeclaration_;
    }
    out += " ) nounwind\r\n{\r\n";
    
    ++siTabLevel;
    visitFunctionBody( statements );
    
    if( returnType == 0 )
    {
        for( int i = 0; i < siTabLevel; ++i )
        {
            out += "\t";
        }
        out += "ret void\r\n";
    }
    
    --siTabLevel;
    
    out += "}\r\n";
    
    gxLocals = oldLocals;
}

void LLVMTransformVisitor::visitFunctionBody( ListStatement* statements )
{
    ListStatement* pSList = statements;
	while( pSList )
	{
		pSList->statement_->accept( this );
		pSList = pSList->liststatement_;
	}
}

void LLVMTransformVisitor::visitDTypeDecl(DTypeDecl *p)
{
	//TypeVisitor t;
	//p->type_->accept( & t );

	//out += "%";
	//out += p->ident_;
	//out += " = type ";
 //   out += t.createLLVMTypename();
 //   out += "\r\n";
}

void LLVMTransformVisitor::visitDOperator(DOperator *p)
{
	OperatorInfo& info = OperatorFinder::FindOperator( p );
    std::map< std::string, Local > oldLocals = gxLocals;
    gxLocals.clear();
    out += "define private ";
    out += info.szTypeReturn;
    gszCurrentlyDesiredType = info.szTypeReturn.c_str();
    out += " @";
    out += info.szLLVMName;
    out += "( ";
    ListParameterDeclaration* pList = p->listparameterdeclaration_;
    for( size_t i = 0; i < info.aszParameterTypes.size(); ++i )
    {
        if( info.aszParameterTypes[ i ] )
        {
            out += info.aszParameterTypes[ i ]->ShortLLVMName();
        }
        else
        {
            info.aszParameterTypes[ i ] = info.pTypeReturn;
            out += info.szTypeReturn;
        }
        
        ParameterVisitor p;
		pList->parameterdeclaration_->accept( &p );
		out += " %_dot_";
		out += p.szName;
        std::string szLLVMIdent = std::string( "%_dot_" ) + p.szName;
        gxLocals[ szLLVMIdent ].szLLVMIdent = szLLVMIdent;
        gxLocals[ szLLVMIdent ].pType = info.aszParameterTypes[ i ];
        if( i < ( info.aszParameterTypes.size() - 1 ) )
        {
            out += ", ";
        }
        
        pList = pList->listparameterdeclaration_;
    }
    out += " ) nounwind\r\n{\r\n";
    
    ++siTabLevel;
    visitFunctionBody( p->liststatement_ );
    --siTabLevel;
    
    out += "}\r\n";
    
    gxLocals = oldLocals;
}

void LLVMTransformVisitor::visitSExpression(SExpression *p)
{
    p->expression_->accept( this );
	++siTempCounter;
}

void LLVMTransformVisitor::visitSReturn(SReturn *p)
{
    p->expression_->accept( this );
    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "ret ";
	out += gszCurrentlyDesiredType;
	out += " %r";
	out += stringFromInt( siTempCounter );
	++siTempCounter;
    out += "\r\n";
}


void LLVMTransformVisitor::visitSIf( SIf *p )
{
	p->expression_->accept( this );
	// SE - TODO: types
	int iCondition = siTempCounter;
	++siTempCounter;
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "%r";
	out += std::to_string( siTempCounter );
	out += " = icmp ne i32 %r";
	out += std::to_string( iCondition );
	out += ", 0\n";
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	
	static int siIfCounter = 0;
	int iIfCounter = siIfCounter;
	++siIfCounter;
	out += "br i1 %r" + std::to_string( siTempCounter );
	out += ", label %ifbody" + std::to_string( iIfCounter );
	out += ", label %endif" + std::to_string( iIfCounter ) + "\r\n";
	out += "\r\nifbody" + std::to_string( iIfCounter ) + ":\r\n";
	++siTempCounter;
	p->liststatement_->accept( this );
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "br label %endif" + std::to_string( iIfCounter ) + "\r\n";
	out += "\r\nendif" + std::to_string( iIfCounter ) + ":\r\n";
}

void LLVMTransformVisitor::visitSIfElse( SIfElse *p )
{
	p->expression_->accept( this );
	// SE - TODO: types
	int iCondition = siTempCounter;
	++siTempCounter;
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "%r";
	out += std::to_string( siTempCounter );
	out += " = icmp ne i32 %r";
	out += std::to_string( iCondition );
	out += ", 0\n";
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	
	static int siIfCounter = 0;
	int iIfCounter = siIfCounter;
	++siIfCounter;
	out += "br i1 %r" + std::to_string( siTempCounter );
	out += ", label %if2body" + std::to_string( iIfCounter );
	out += ", label %elsebody" + std::to_string( iIfCounter ) + "\r\n";
	out += "\r\nif2body" + std::to_string( iIfCounter ) + ":\r\n";
	++siTempCounter;
	p->liststatement_1->accept( this );
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "br label %endif2" + std::to_string( iIfCounter ) + "\r\n";
	out += "\r\nelsebody" + std::to_string( iIfCounter ) + ":\r\n";
	p->liststatement_2->accept( this );
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "br label %endif2" + std::to_string( iIfCounter ) + "\r\n";
	out += "\r\nendif2" + std::to_string( iIfCounter ) + ":\r\n";
}

void LLVMTransformVisitor::visitSLoop( SLoop *p )
{
	//SE - TODO: types	
	static int siRepeatCounter = 0;
	int iRepeatCount = siRepeatCounter;
	++siRepeatCounter;
	
	out += "repeat" + std::to_string( iRepeatCount ) + ":\r\n";

	p->expression_->accept( this );
	
	int iAmount = siTempCounter;
	++siTempCounter;
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "br label %repeatloop" + std::to_string( iRepeatCount ) + "\r\n";
	
	// ...
	
	out += "\r\nrepeatbody" + std::to_string( iRepeatCount ) + ":\r\n";
	
	p->liststatement_->accept( this );
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	
	out += "br label %repeatloop" + std::to_string( iRepeatCount ) + "\r\n";
	
	// ...
	
	out += "\r\nrepeatloop" + std::to_string( iRepeatCount ) + ":\r\n";
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "%r" + std::to_string( siTempCounter );
	int iPhi = siTempCounter;
	++siTempCounter;
	int iLoop = siTempCounter;
	++siTempCounter;
	int iCompare = siTempCounter;
	++siTempCounter;
	out += " = phi i32 [ %r" + std::to_string( iAmount ) +", %repeat" + std::to_string( iRepeatCount ) + " ],";
	out += " [ %r" + std::to_string( iLoop ) +", %repeatbody" + std::to_string( iRepeatCount ) + " ]\r\n";
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "%r" + std::to_string( iLoop );
	out += " = sub i32 %r" + std::to_string( iPhi ) + ", 1\r\n";
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "%r" + std::to_string( iCompare );
	out += " = icmp slt i32 %r" + std::to_string( iLoop ) + ", 0\r\n";
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "br i1 %r" + std::to_string( iCompare );
	out += ", label %endrepeat" + std::to_string( iRepeatCount );
	out += ", label %repeatbody" + std::to_string( iRepeatCount ) + "\r\n";
	
	// ...
	
	out += "\r\nendrepeat" + std::to_string( iRepeatCount ) + ":\r\n";	
}

void LLVMTransformVisitor::visitSWhile( SWhile *p )
{
	//SE - TODO: types	
	static int siRepeatCounter = 0;
	int iRepeatCount = siRepeatCounter;
	++siRepeatCounter;
	
	out += "while" + std::to_string( iRepeatCount ) + ":\r\n";	
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "br label %whileloop" + std::to_string( iRepeatCount ) + "\r\n";
	
	// ...
	
	out += "\r\nwhilebody" + std::to_string( iRepeatCount ) + ":\r\n";
	
	p->liststatement_->accept( this );
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	
	out += "br label %whileloop" + std::to_string( iRepeatCount ) + "\r\n";
	
	// ...
	
	out += "\r\nwhileloop" + std::to_string( iRepeatCount ) + ":\r\n";
	
	p->expression_->accept( this );
	int iTest = siTempCounter;
	++siTempCounter;
	int iCompare = siTempCounter;
	++siTempCounter;
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "%r" + std::to_string( iCompare );
	out += " = icmp eq i32 %r" + std::to_string( iTest ) + ", 0\r\n";
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "br i1 %r" + std::to_string( iCompare );
	out += ", label %endwhile" + std::to_string( iRepeatCount );
	out += ", label %whilebody" + std::to_string( iRepeatCount ) + "\r\n";
	
	// ...
	
	out += "\r\nendwhile" + std::to_string( iRepeatCount ) + ":\r\n";	
}

void LLVMTransformVisitor::visitSUntil( SUntil *p )
{
	//SE - TODO: types	
	static int siRepeatCounter = 0;
	int iRepeatCount = siRepeatCounter;
	++siRepeatCounter;
	
	out += "until" + std::to_string( iRepeatCount ) + ":\r\n";	
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "br label %untilbody" + std::to_string( iRepeatCount ) + "\r\n";
	
	// ...
	
	out += "\r\nuntilbody" + std::to_string( iRepeatCount ) + ":\r\n";
	
	p->liststatement_->accept( this );
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	
	out += "br label %untilloop" + std::to_string( iRepeatCount ) + "\r\n";
	
	// ...
	
	out += "\r\nuntilloop" + std::to_string( iRepeatCount ) + ":\r\n";
	
	p->expression_->accept( this );
	int iTest = siTempCounter;
	++siTempCounter;
	int iCompare = siTempCounter;
	++siTempCounter;
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "%r" + std::to_string( iCompare );
	out += " = icmp ne i32 %r" + std::to_string( iTest ) + ", 0\r\n";
	
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "br i1 %r" + std::to_string( iCompare );
	out += ", label %enduntil" + std::to_string( iRepeatCount );
	out += ", label %untilbody" + std::to_string( iRepeatCount ) + "\r\n";
	
	// ...
	
	out += "\r\nenduntil" + std::to_string( iRepeatCount ) + ":\r\n";	
}

void LLVMTransformVisitor::visitEInteger(EInteger *p)
{
    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = bitcast i32 ";
    out += stringFromInt( p->integer_ );
    out += " to i32\r\n";
}

void LLVMTransformVisitor::visitERValue(ERValue *p)
{
    RVVisitor v;
    p->rvalue_->accept( &v );
    // TODO: more logic
    if( v.bByte )
    {
        for( int i = 0; i < siTabLevel; ++i )
        {
            out += "\t";
        }
        out += "%r";
        out += stringFromInt( siTempCounter );
        std::string id = std::string( "%" ) + v.readString;
        if( gxLocals.find( id ) != gxLocals.end() )
        {
            out += " = bitcast ";
            out += gxLocals[ id ].pType->ShortLLVMName();
            out += " ";
            out += id;
            out += " to ";
            out += gxLocals[ id ].pType->ShortLLVMName();
            out += "\r\n";
        }
        else
        {
            out += " = bitcast <unknown-type> ";
            out += id;
            out += " to <unknown-type>\r\n";
        }
        //out += " = %";
        //out += v.readString[ 0 ];
        //out += "\r\n";
    }
}

void LLVMTransformVisitor::visitEString( EString* p )
{
    std::map< std::string, std::string >::iterator it = gszStrings.find( p->cstring_ );
    if( it != gszStrings.end() )
    {
        for( int i = 0; i < siTabLevel; ++i )
        {
            out += "\t";
        }

        out += "%r";
        out += stringFromInt( siTempCounter );
        out += " = getelementptr [";
        out += stringFromInt( it->first.length() - 1 );
        out += " x i8]* ";
        out += it->second;
        out += ", i64 0, i64 0\r\n";
    }
}

void LLVMTransformVisitor::visitESimpleCall( ESimpleCall* p )
{
	RVVisitor rvv;
	p->rvalue_->accept( &rvv );
    
    for( int i = 0; i < siTabLevel; ++i )
	{
		out += "\t";
	}
    
    FunctionInfo& finfo = FindFunctionInfo( rvv.readString );
    
    if( finfo.pTypeReturn )
    {
        out += "%r";
        out += stringFromInt( siTempCounter );
        out += " = ";
    }
	out += "call ";
    out += finfo.pTypeReturn ? finfo.pTypeReturn->ShortLLVMName() : "void";
    out += " @";
	out += rvv.readString;
	out += "()\r\n";
}

void LLVMTransformVisitor::visitECall( ECall* p )
{
	RVVisitor rvv;
	p->rvalue_->accept( &rvv );

    // lazy hack... assume we have only 32 params max...
    int aiParameterTemps[ 32 ] = { 0 };
    int iParameterCount = 0;
    
    // count our parameters and work out what vars to chuck them in
    ListExpression* pList = p->listexpression_;
	while( pList )
	{
        aiParameterTemps[ iParameterCount ] = siTempCounter;
        pList->expression_->accept( this );
        pList = pList->listexpression_;
        ++siTempCounter;
        ++iParameterCount;
	}
    
    for( int i = 0; i < siTabLevel; ++i )
	{
		out += "\t";
	}
    
    FunctionInfo& finfo = FindFunctionInfo( rvv.readString );
    
    if( finfo.pTypeReturn )
    {
        out += "%r";
        out += stringFromInt( siTempCounter );
        out += " = ";
    }
	out += "call ";
    out += finfo.pTypeReturn ? finfo.pTypeReturn->ShortLLVMName() : "void";
    out += " @";
	out += rvv.readString;
	out += "(";
	
    
	// SE - TODO: proper types...
    
    for( int i = 0; i < iParameterCount; ++i )
    {
        // TODO: some kind of typing
        out += " i8* %r";
        out += stringFromInt( aiParameterTemps[ i ] );
        if( i < ( iParameterCount - 1 ) )
        {
            out += ",";
        }
    }

	out += " )\r\n";

}

void LLVMTransformVisitor::visitEIntrin( Expression* pLeft, Expression* pRight, const char* szIntrinsic, const char* szType )
{
    const char* oldType = gszCurrentlyDesiredType;
    gszCurrentlyDesiredType = szType;

	int left = -1;

    if( pLeft )
    {
        left = siTempCounter;
        pLeft->accept( this );
        ++siTempCounter;
    }
    int right = -1;
    if( pRight )
    {
        right = siTempCounter;

        pRight->accept( this );

	    ++siTempCounter;
    }

    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }

    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = ";
    out += szIntrinsic;
    out += " ";
    out += szType;
    out += " %r";
    out += stringFromInt( left );
    if( right != -1 )
    {
        out += ", %r";
        out += stringFromInt( right );
    }
    out += "\r\n";

    gszCurrentlyDesiredType = oldType;
}

void LLVMTransformVisitor::visitEIntrin( const char* const szLeft, Expression* pRight, const char* szIntrinsic, const char* szType )
{
    const char* oldType = gszCurrentlyDesiredType;
    gszCurrentlyDesiredType = szType;

    int right = -1;
    
    if( pRight )
    {
        right = siTempCounter;

        pRight->accept( this );

	    ++siTempCounter;
    }

    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
    
    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = ";
    out += szIntrinsic;
    out += " ";
    out += szType;
    out += " ";
    out += szLeft;
    if( right != -1 )
    {
        out += ", %r";
        out += stringFromInt( right );
    }
    out += "\r\n";

    gszCurrentlyDesiredType = oldType;
}

#include "LLVMIntrinByte.inl"
#include "LLVMIntrin2Byte.inl"
#include "LLVMIntrin4Byte.inl"
#include "LLVMIntrin8Byte.inl"

void LLVMTransformVisitor::visitEMul(EMul *p)
{
	// are we operating on built-in types?
	int left = siTempCounter;

    p->expression_1->accept( this );

    ++siTempCounter;

    int right = siTempCounter;

    p->expression_2->accept( this );

	++siTempCounter;

    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
    
    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = mul i8 %r";
    out += stringFromInt( left );
    out += ", %r";
    out += stringFromInt( right );
    out += "\r\n";
}

void LLVMTransformVisitor::visitEDiv(EDiv *p)
{
    // are we operating on built-in types?
	int left = siTempCounter;

    p->expression_1->accept( this );

    ++siTempCounter;

    int right = siTempCounter;

    p->expression_2->accept( this );

	++siTempCounter;

    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
    
    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = udiv i8 %r";
    out += stringFromInt( left );
    out += ", %r";
    out += stringFromInt( right );
    out += "\r\n";
}

void LLVMTransformVisitor::visitEMod(EMod *p)
{
    // are we operating on built-in types?
	int left = siTempCounter;

    p->expression_1->accept( this );

    ++siTempCounter;

    int right = siTempCounter;

    p->expression_2->accept( this );

	++siTempCounter;

    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
    
    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = urem i8 %r";
    out += stringFromInt( left );
    out += ", %r";
    out += stringFromInt( right );
    out += "\r\n";
}

void LLVMTransformVisitor::visitEAdd(EAdd *p)
{
    // are we operating on built-in types?
	int left = siTempCounter;

    p->expression_1->accept( this );

    ++siTempCounter;

    int right = siTempCounter;

    p->expression_2->accept( this );

	++siTempCounter;

    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
    
    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = add i8 %r";
    out += stringFromInt( left );
    out += ", %r";
    out += stringFromInt( right );
    out += "\r\n";
}

void LLVMTransformVisitor::visitESub(ESub *p)
{
    // are we operating on built-in types?
	int left = siTempCounter;

    p->expression_1->accept( this );

    ++siTempCounter;

    int right = siTempCounter;

    p->expression_2->accept( this );

	++siTempCounter;

    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
    
    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = sub i8 %r";
    out += stringFromInt( left );
    out += ", %r";
    out += stringFromInt( right );
    out += "\r\n";
}

void LLVMTransformVisitor::visitELSh(ELSh *p)
{
    // are we operating on built-in types?
	int left = siTempCounter;

    p->expression_1->accept( this );

    ++siTempCounter;

    int right = siTempCounter;

    p->expression_2->accept( this );

	++siTempCounter;

    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
    
    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = shl i8 %r";
    out += stringFromInt( left );
    out += ", %r";
    out += stringFromInt( right );
    out += "\r\n";
}

void LLVMTransformVisitor::visitERSh(ERSh *p)
{
    // are we operating on built-in types?
	int left = siTempCounter;

    p->expression_1->accept( this );

    ++siTempCounter;

    int right = siTempCounter;

    p->expression_2->accept( this );

	++siTempCounter;

    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
    
    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = lshr i8 %r";
    out += stringFromInt( left );
    out += ", %r";
    out += stringFromInt( right );
    out += "\r\n";
}

void LLVMTransformVisitor::visitEBand(EBand *p)
{
    // are we operating on built-in types?
	int left = siTempCounter;

    p->expression_1->accept( this );

    ++siTempCounter;

    int right = siTempCounter;

    p->expression_2->accept( this );

	++siTempCounter;

    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
    
    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = and i8 %r";
    out += stringFromInt( left );
    out += ", %r";
    out += stringFromInt( right );
    out += "\r\n";
}

void LLVMTransformVisitor::visitEBor(EBor *p)
{
    // are we operating on built-in types?
	int left = siTempCounter;

    p->expression_1->accept( this );

    ++siTempCounter;

    int right = siTempCounter;

    p->expression_2->accept( this );

	++siTempCounter;

    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
    
    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = or i8 %r";
    out += stringFromInt( left );
    out += ", %r";
    out += stringFromInt( right );
    out += ";\r\n";
}

void LLVMTransformVisitor::visitEBxor(EBxor *p)
{
    // are we operating on built-in types?
	int left = siTempCounter;

    p->expression_1->accept( this );

    ++siTempCounter;

    int right = siTempCounter;

    p->expression_2->accept( this );

	++siTempCounter;

    for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
    
    out += "%r";
    out += stringFromInt( siTempCounter );
    out += " = xor i8 %r";
    out += stringFromInt( left );
    out += ", %r";
    out += stringFromInt( right );
    out += "\r\n";
}


// <result> = extractvalue {i32, float} %agg, 0    ; yields i32
// %agg1 = insertvalue {i32, float} undef, i32 1, 0              ; yields {i32 1, float undef}
// %agg2 = insertvalue {i32, float} %agg1, float %val, 1         ; yields {i32 1, float %val}
// %agg3 = insertvalue {i32, {float}} %agg1, float %val, 1, 0    ; yields {i32 1, float %val}
