#ifndef OPERATOR_VISITOR_H
#define OPERATOR_VISITOR_H

#include "CompilerVisitor.h"
#include "ONVisitor.h"
#include "TypeVisitor.h"

#include <string>
#include <vector>

class OperatorVisitor : public DescendingCompilerVisitor
{

public:

	OperatorVisitor() { reset(); }
	
	void reset()
	{
        name = "";
        typeOwner = "";
        typeReturn = "";
        parameterTypes.clear();
        bPure = false;
        bInline = false;
        bAssociative = false;
        bCommutative = false;
	}

    virtual void visitDOperator(DOperator *p)
    {
        ONVisitor ov;
        p->operatorname_->accept( &ov );
        name = ov.operatorName;
        
        visitListFunctionSpecifier( p->listfunctionspecifier_ );
        
        ListParameterDeclaration* lp = p->listparameterdeclaration_;
        for( size_t i = 0 ; i < lp->size(); ++i )
        {
            DetailedTypeVisitor dtv;
            ( *lp )[ i ]->accept( &dtv );
            
            parameterTypes.push_back( dtv.pxTypeInfo );
        }

    }
    
    virtual void visitFSPure(FSPure *p) { bPure = true; }
    virtual void visitFSConst(FSConst *p) { bConst = true; }
    virtual void visitFSInline(FSInline *p) { bInline = true; }
    virtual void visitFSAssociative( FSAssociative *p ) { bAssociative = true; }
    virtual void visitFSCommutative( FSCommutative *p ) { bCommutative = true; }

    std::string name;
    std::string typeOwner;
    std::string typeReturn;

    std::vector < DetailedTypeInfo* > parameterTypes;

    bool bPure;
    bool bConst;
    bool bInline;
    bool bAssociative;
    bool bCommutative;
};

#endif
