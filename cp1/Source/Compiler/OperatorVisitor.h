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
	}

    virtual void visitDOperator(DOperator *p)
    {
        ONVisitor ov;
        p->operatorname_->accept( &ov );
        name = ov.operatorName;
        
        ListParameterDeclaration* lp = p->listparameterdeclaration_;
        while( lp && lp->parameterdeclaration_ )
        {
            DetailedTypeVisitor dtv;
            lp->parameterdeclaration_->accept( &dtv );
            lp = lp->listparameterdeclaration_;
            
            parameterTypes.push_back( dtv.pxTypeInfo );
        }

    }

    std::string name;
    std::string typeOwner;
    std::string typeReturn;

    std::vector < DetailedTypeInfo* > parameterTypes;

};

#endif
