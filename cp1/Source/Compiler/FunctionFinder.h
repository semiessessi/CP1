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
    
    /*
    {
        OperatorVisitor v;
        DetailedTypeVisitor tv;
        p->type_->accept( &tv );
        v.typeOwner = "i8";
        v.typeReturn = "i8";
        if( tv.pxTypeInfo )
        {
            v.typeOwner = tv.pxTypeInfo->MangledName();
            v.typeReturn = tv.pxTypeInfo->ShortLLVMName();
        }
        
        p->accept( &v );
        OperatorInfo info;
        info.szLLVMName = operatorNameMangle( v.name.c_str(), v.typeOwner, v.parameterTypes );
        
        FunctionInfo& rInfo = findOperatorInfo( info );
        rInfo.szCPName = v.name;
        rInfo.szTypeOwner = v.typeOwner;
        rInfo.szTypeReturn = v.typeReturn;
        rInfo.szLLVMName = info.szLLVMName;
        rInfo.aszParameterTypes = v.parameterTypes;
        rInfo.pTypeReturn = tv.pxTypeInfo;
        
        return rInfo;
    }
    */
    
    /*
    virtual void visitDOperator(DOperator *p)
    {
        OperatorInfo& pInfo = FindOperator( p );
    }
    */
    
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
