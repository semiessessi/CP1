#include "LLVMTransform.h"

#include "../ONVisitor.h"
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
	visitFunction( "void", p->ident_, p->listparameterdeclaration_, p->liststatement_ );
}

void LLVMTransformVisitor::visitDFunction(DFunction *p)
{
	visitFunction( "<implement this!>", p->ident_, p->listparameterdeclaration_, p->liststatement_ );
}

void LLVMTransformVisitor::visitFunction( const char* const llvmReturnTypeName, const char* const functionIdentifier, ListParameterDeclaration* parameters, ListStatement* statements )
{
	verboseInfo( 2, "Current function: %s ", functionIdentifier );
	int iParameterCount = 0;
	ListParameterDeclaration* pList = parameters;
	while( pList )
	{
		++iParameterCount;
		pList = pList->listparameterdeclaration_;
	}

	verboseInfo( 2, " - has %d parameters\n", iParameterCount );
	out += "\r\n; function ";
	out += functionIdentifier;
	out += "\r\n";
	out += "define ";
	std::string typeName = llvmReturnTypeName;
	gszCurrentlyDesiredType = typeName.c_str();
	out += typeName;
	out += " @";
	sszCurrentFunctionName = functionIdentifier;
	out += sszCurrentFunctionName;
	out += "( ";

	pList = parameters;
	while( pList )
	{
		ParameterVisitor p;
		pList->parameterdeclaration_->accept( &p );
		/*
			SE - TODO: types!!!
		*/
		out += typeName;
		out += " %_dot_";
		out += p.szName;
		pList = pList->listparameterdeclaration_;
		if( pList )
		{
			out += ", ";
		}
	}

	out += " ) nounwind\r\n{\r\n";
	++siTabLevel;
	// parse code...
	ListStatement* pSList = statements;
	while( pSList )
	{
		pSList->statement_->accept( this );
		pSList = pSList->liststatement_;
	}

	if( std::string( llvmReturnTypeName ) == "void" )
	{
		for( int i = 0; i < siTabLevel; ++i )
		{
			out += "\t";
		}
		out += "ret void\r\n";
	}

	out += "}\r\n";
	--siTabLevel;
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
	// SE: TODO: ...
	///*
    int iParameterCount = 0;
    ListParameterDeclaration* pList = p->listparameterdeclaration_;
	while( pList )
	{
		++iParameterCount;
        pList = pList->listparameterdeclaration_;
	}
	//*/
	out += "\r\n; operator ";
    ONVisitor ov;
    p->operatorname_->accept( &ov );
	out += ov.operatorName;
	out += "\r\n";
	sszCurrentFunctionName = operatorNameMangle( ov.operatorName.c_str(), "i32", iParameterCount );
	// SE: TODO - type
	visitFunction( "i32", sszCurrentFunctionName.c_str(), p->listparameterdeclaration_, p->liststatement_ );
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
	out += "br label %endif" + std::to_string( iIfCounter ) + "\r\n";
	out += "\r\nelsebody" + std::to_string( iIfCounter ) + ":\r\n";
	p->liststatement_2->accept( this );
	for( int i = 0; i < siTabLevel; ++i )
    {
        out += "\t";
    }
	out += "br label %endif" + std::to_string( iIfCounter ) + "\r\n";
	out += "\r\nendif" + std::to_string( iIfCounter ) + ":\r\n";
}

// void LLVMTransformVisitor::visitSLoop( SLoop *p )
// {
	// p->expression_->accept( this );
	// // SE - TODO: types
	// int iAmount = siTempCounter;
	// ++siTempCounter;
	// for( int i = 0; i < siTabLevel; ++i )
    // {
        // out += "\t";
    // }
// }

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
        out += " = bitcast i32 %";
        out += v.readString;
        out += " to i32\r\n";
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
    
	out += "call i32 @";
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

void LLVMTransformVisitor::visitEBinaryOperator(EBinaryOperator *p)
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

    if( p->operator_[ 0 ] && !p->operator_[ 1 ] )
    {
        switch( p->operator_[ 0 ] )
        {
            case '+':   out += " = add i8 %r"; break;
            case '-':   out += " = sub i8 %r"; break;
            case '*':   out += " = mul i8 %r"; break;
            case '/':   out += " = udiv i8 %r"; break;
            case '%':   out += " = urem i8 %r"; break;
			case '&':   out += " = and i8 %r"; break;
            case '|':   out += " = or i8 %r"; break;
            case '^':   out += " = xor i8 %r"; break;
            default: out += " error, unrecognised operator!"; break;
        }
    }
    else if( p->operator_[ 0 ] && p->operator_[ 1 ] && !p->operator_[ 2 ] )
    {
        if( ( p->operator_[ 0 ] == '<' )
            && ( p->operator_[ 1 ] == '<' ) )
        {
            out += " = shl i8 %r";
        }
        else if( ( p->operator_[ 0 ] == '>' )
            && ( p->operator_[ 1 ] == '>' ) )
        {
            out += " = lshr i8 %r";
        }
        else
        {
            out += " error, unrecognised operator!";
        }
    }

    out += stringFromInt( left );
    out += ", %r";
    out += stringFromInt( right );
    out += "\r\n";

	// with a built in operator?
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
