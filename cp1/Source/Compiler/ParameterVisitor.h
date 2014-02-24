#ifndef PARAMETER_VISITOR_H
#define PARAMETER_VISITOR_H

#include "CompilerVisitor.h"
#include "TypeVisitor.h"

#include <string>
#include <vector>

class ParameterVisitor : public CompilerVisitor
{

public:

	ParameterVisitor() { reset(); }
	
	void reset()
	{
		topType = false;
		szName = "error-parameter-name";
		t.reset();
	}

	virtual void visitPDAutoParameter(PDAutoParameter *p)
	{
		topType = true;
		szName = p->ident_;
	}

	virtual void visitPDTypedParameter(PDTypedParameter *p)
	{
		p->type_->accept( &t );
		szName = p->ident_;
	}

	TypeVisitor t;
	bool topType;
	std::string szName;

};

#endif
