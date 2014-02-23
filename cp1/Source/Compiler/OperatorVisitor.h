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
        
        ListFunctionSpecifier* lf = p->listfunctionspecifier_;
        while( lf && lf->functionspecifier_ )
        {
            lf->functionspecifier_->accept( this );
            lf = lf->listfunctionspecifier_;
        }
        
        ListParameterDeclaration* lp = p->listparameterdeclaration_;
        while( lp && lp->parameterdeclaration_ )
        {
            DetailedTypeVisitor dtv;
            lp->parameterdeclaration_->accept( &dtv );
            lp = lp->listparameterdeclaration_;
            
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
