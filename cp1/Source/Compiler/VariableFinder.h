#ifndef VARIABLE_FINDER_H
#define VARIABLE_FINDER_H

#include "CompilerVisitor.h"

#include "OperatorNameMangle.h"
#include "TypeVisitor.h"

#include <map>

struct VariableInfo
{
	const char* szIdentifier;
	TypeVisitor typeVisitor;
};

class VariableFinder
: public DescendingCompilerVisitor
{

public:

	virtual void visitTBDShortOperator(TBDShortOperator *p)
	{
		DescendingCompilerVisitor::visitTBDShortOperator( p );
	}

	virtual void visitPDAutoParameter(PDAutoParameter *p)
	{
	}

	virtual void visitPDTypedParameter(PDTypedParameter *p)
	{
	}



};

#endif
