#ifndef OPERATOR_VISITOR_H
#define OPERATOR_VISITOR_H

#include "CompilerVisitor.h"
#include "ONVisitor.h"

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

    }

    //virtual void visitTBDShortOperator(TBDShortOperator *p)
    //{
    //    ONVisitor ov;
    //    p->operatorname_->accept( &ov );
    //    name = ov.operatorName;
    //}

    //virtual void visitTBDTypedOperator(TBDTypedOperator *p)
    //{
    //    ONVisitor ov;
    //    p->operatorname_->accept( &ov );
    //    name = ov.operatorName;
    //}

    //virtual void visitTBDTypedShortOperator(TBDTypedShortOperator *p)
    //{
    //    ONVisitor ov;
    //    p->operatorname_->accept( &ov );
    //    name = ov.operatorName;
    //}

    std::string name;
    std::string typeOwner;
    std::string typeReturn;

    std::vector < std::string > parameterTypes;

};

#endif
