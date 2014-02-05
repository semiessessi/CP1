#ifndef FIRST_PASS_H
#define FIRST_PASS_H

#include "../Compiler/CompilerVisitor.h"

class TrivialConstantExpressionOptimiser
: public DescendingCompilerVisitor
{
};

class FirstPassOptimiser
: public DescendingCompilerVisitor
{
    virtual void visitMain( Main* p )
    {
        TrivialConstantExpressionOptimiser eo;
        p->accept( &eo );
    }
};

#endif
