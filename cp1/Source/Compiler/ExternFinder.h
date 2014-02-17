#ifndef EXTERN_FINDER_H
#define EXTERN_FINDER_H

#include "CompilerVisitor.h"

#include "OperatorInfo.h"
#include "OperatorNameMangle.h"
#include "OperatorVisitor.h"
#include "TypeVisitor.h"

#include "../Error/VerboseInfo.h"

class ExternFinder
: public DescendingCompilerVisitor
{

public:
	
	ExternFinder() : mbNameParams( false ), miParam( 0 ), miUnique( 0 ), mpCurrentExtern( NULL ), mszCurrentNamespace( "_dot_" ) {}
	
    virtual void visitDFunction(DFunction *p) {}
    virtual void visitDDefaultFunction( DDefaultFunction *p ) {}
    virtual void visitDOperator(DOperator *p) {}
    
	virtual void visitDNamespace( DNamespace *p )
	{
		mszCurrentNamespace += p->ident_;
		mszCurrentNamespace += "_dot_";
		
		DescendingCompilerVisitor::visitDNamespace( p );
		
		mszCurrentNamespace.resize( mszCurrentNamespace.size() - ( sizeof( "_dot_" ) - 1 ) - strlen( p->ident_ ) );
	}
	
	virtual void visitDExtern( DExtern *p )
	{
		maxFoundExterns.push_back( "declare " );
		mpCurrentExtern = &( maxFoundExterns.back() );

		p->prototype_->accept( this );
	}

	virtual void visitPFunction( PFunction* p )
    {
		std::string& szExtern = *mpCurrentExtern;

		// add the return type with some assumptions
		// SE: for now assume that everyone returns a i32...
		// TODO: use type visitor etc...
		//TypeVisitor tv;
		//p->type_->accept( &tv );
		//szExtern += tv.createLLVMTypename();

		DetailedTypeVisitor v;
		p->type_->accept( &v );
        std::string szLLVMReturnType = "i32"; // SE - HACK: !!!
        if( v.pxTypeInfo )
        {
            szLLVMReturnType = v.pxTypeInfo->ShortLLVMName();
            szExtern += szLLVMReturnType;
        }

		if( szExtern.back() == ',' )
		{
			szExtern.pop_back();
		}

		// then the function name...
		szExtern += " @";
		szExtern += p->ident_;
		szExtern += "( ";

		verboseInfo( 3, "Visiting parameter declaration\n" );
		if( p->listparameterdeclaration_ )
		{
			p->listparameterdeclaration_->accept( this );
		}

		if( szExtern.back() == ',' )
		{
			szExtern.pop_back();
		}

		szExtern += " )";
		szExtern += "\ndefine private ";
		
		szExtern += szLLVMReturnType;

		if( szExtern.back() == ',' )
		{
			szExtern.pop_back();
		}

		// then the function name...
		szExtern += " @";
		szExtern += mszCurrentNamespace + p->ident_;
		szExtern += "( ";
		
		mbNameParams = true;
		miParam = 0;
		
		if( p->listparameterdeclaration_ )
		{
			p->listparameterdeclaration_->accept( this );
		}

		if( szExtern.back() == ',' )
		{
			szExtern.pop_back();
		}
		
		mbNameParams = false;
		int iNumParams = miParam;
		szExtern += " ) nounwind";
		szExtern += "\n{";
		szExtern += "\n\t%e" + std::to_string( miUnique );
		szExtern += " = call ";
		szExtern += szLLVMReturnType;
		szExtern += " @";
		szExtern += p->ident_;
		szExtern += "( ";
		mbNameParams = true;
		miParam = 0;
		
		if( p->listparameterdeclaration_ )
		{
			p->listparameterdeclaration_->accept( this );
		}

		if( szExtern.back() == ',' )
		{
			szExtern.pop_back();
		}
		mbNameParams = false;
		szExtern += " )";
		szExtern += "\n\tret ";
		szExtern += szLLVMReturnType;
		
		szExtern += " %e" + std::to_string( miUnique );
		szExtern += "\n}\n";
		++miUnique;
	}

	//virtual void visitPDefaultFunction( PDefaultFunction* p )
	//{
	//	std::string& szExtern = *mpCurrentExtern;
	//	szExtern += "void @";
	//	szExtern += p->ident_;

	//	p->listparameterdeclaration_->accept( this );
	//}

	virtual void visitPDTypedParameter( PDTypedParameter* p )
	{
        DetailedTypeVisitor v;
		p->type_->accept( &v );
        if( v.pxTypeInfo )
        {
            std::string& szExtern = *mpCurrentExtern;
            szExtern += v.pxTypeInfo->ShortLLVMName();
            if( mbNameParams )
            {
                szExtern += " %a" + std::to_string( miParam );
                ++miParam;
            }
            szExtern += ",";
        }
	}

	// virtual void visitTCustom( TCustom* p )
	// {
		// std::string& szExtern = *mpCurrentExtern;
		// szExtern += hackyTypeConverter( p->ident_ );
		// if( mbNameParams )
		// {
			// szExtern += " %a" + std::to_string( miParam );
			// ++miParam;
		// }
		// szExtern += ",";
	// }

	std::string emitLLVM()
	{
		std::string szReturnValue = "";
		for( size_t i = 0; i < maxFoundExterns.size(); ++i )
		{
			szReturnValue += maxFoundExterns[ i ];
			szReturnValue += "\r\n";
		}

		return szReturnValue;
	}

	const char* hackyTypeConverter( const char* const szIdent )
	{
		// for now assume we know all about pointer and i32 with hacks...
		if( std::string( szIdent ) == "pointer" )
		{
			return "i8*";
		}
        else if( std::string( szIdent ) == "address" )
		{
			return "i8*";
		}
		else if( std::string( szIdent ) == "int32" )
		{
			return "i32";
		}
		else if( std::string( szIdent ) == "byte" )
		{
			return "i8";
		}

		return "<unknown-type>";
	}

	bool mbNameParams;
	int miParam;
	int miUnique;
	std::string* mpCurrentExtern;
	std::string mszCurrentNamespace;
	std::vector< std::string > maxFoundExterns;

};

#endif
