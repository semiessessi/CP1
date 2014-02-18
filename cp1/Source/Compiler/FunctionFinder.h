#ifndef FUNCTION_FINDER_H
#define FUNCTION_FINDER_H

#include <string>

#include "CompilerVisitor.h"

#include "FunctionInfo.h"
//#include "FunctionVisitor.h"
#include "TypeVisitor.h"

class FunctionFinder
: public DescendingCompilerVisitor
{

private:
    
    static std::string sszCurrentNamespace;
    
public:
    
    FunctionFinder()
    {
        sszCurrentNamespace = "_dot_";
    }
    
    static FunctionInfo& FindFunction( ListFunctionSpecifier* lfs, Type* returnType, std::string szIdent, ListParameterDeclaration* lpd )
    {
        DetailedTypeVisitor tv;
        if( returnType )
        {
            returnType->accept( &tv );
        }
        
        std::string szMangledName = sszCurrentNamespace + szIdent;
        FunctionInfo& rInfo = FindFunctionInfo( szMangledName );
        rInfo.szCPName = szIdent;
        rInfo.szLLVMName = szMangledName;
        rInfo.pTypeReturn = tv.pxTypeInfo;
        return rInfo;
    }
    
    virtual void visitDNamespace( DNamespace *p )
	{
		sszCurrentNamespace += p->ident_;
		sszCurrentNamespace += "_dot_";
		
		DescendingCompilerVisitor::visitDNamespace( p );
		
		sszCurrentNamespace.resize( sszCurrentNamespace.size() - ( sizeof( "_dot_" ) - 1 ) - strlen( p->ident_ ) );
	}
    
    virtual void visitDExtern( DExtern *p )
	{
		p->prototype_->accept( this );
	}
    
    virtual void visitPFunction( PFunction* p )
    {
        FindFunction( p->listfunctionspecifier_, p->type_, p->ident_, p->listparameterdeclaration_ );
    }
    
    virtual void visitDFunction( DFunction* p )
    {
        FindFunction( p->listfunctionspecifier_, p->type_, p->ident_, p->listparameterdeclaration_ );
    }
    
    virtual void visitDDefaultFunction( DDefaultFunction* p )
    {
        FindFunction( p->listfunctionspecifier_, 0, p->ident_, p->listparameterdeclaration_ );
    }
};

#endif
