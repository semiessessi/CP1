#ifndef FUNCTION_FINDER_H
#define FUNCTION_FINDER_H

#include <string>

#include "CompilerVisitor.h"

#include "FunctionInfo.h"
//#include "FunctionVisitor.h"
#include "TypeVisitor.h"

class FSVisitor
: public DescendingCompilerVisitor
{
public:
    FSVisitor()
    : bPure( false )
    , bConst( false )
    , bInline( false )
    , bAssociative( false )
    , bCommutative( false )
    {
    }
    
    virtual void visitFSPure(FSPure *p) { bPure = true; }
    virtual void visitFSConst(FSConst *p) { bConst = true; }
    virtual void visitFSInline(FSInline *p) { bInline = true; }
    virtual void visitFSAssociative( FSAssociative *p ) { bAssociative = true; }
    virtual void visitFSCommutative( FSCommutative *p ) { bCommutative = true; }
    
    bool bPure;
    bool bConst;
    bool bInline;
    bool bAssociative;
    bool bCommutative;
};

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
        
        ListFunctionSpecifier* lf = lfs;
        FSVisitor fsv;
        while( lf && lf->functionspecifier_ )
        {
            lf->functionspecifier_->accept( &fsv );
            lf = lf->listfunctionspecifier_;
        }
        
        // SE - TODO: ...
        
        std::string szMangledName = sszCurrentNamespace + szIdent;
        FunctionInfo& rInfo = FindFunctionInfo( szMangledName );
        rInfo.szCPName = szIdent;
        rInfo.szLLVMName = szMangledName;
        rInfo.pTypeReturn = tv.pxTypeInfo;
        rInfo.bPure = fsv.bPure;
        rInfo.bConst = fsv.bConst;
        rInfo.bInline = fsv.bInline;
        rInfo.bAssociative = fsv.bAssociative;
        rInfo.bCommutative = fsv.bCommutative;
        
        rInfo.aszParameterTypes.clear();
        ListParameterDeclaration* lp = lpd;
        while( lp && lp->parameterdeclaration_ )
        {
            DetailedTypeVisitor dtv;
            lp->parameterdeclaration_->accept( &dtv );
            lp = lp->listparameterdeclaration_;
            
            rInfo.aszParameterTypes.push_back( dtv.pxTypeInfo );
        }
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
