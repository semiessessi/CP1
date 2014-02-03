#ifndef RVVISITOR_H
#define RVVISITOR_H

#include "CompilerVisitor.h"

#include <string>
#include <vector>

class RVVisitor : public CompilerVisitor
{

public:

	RVVisitor() { reset(); }
	
	void reset()
	{
        bDeep = false;
        bByte = true;
		readString = "_dot_";
	}

    virtual void visitRVIdent(RVIdent* p)
    {
        readString += p->ident_;
    }

    virtual void visitTByte(TByte *p)
    {
        bByte = true;
    }

	virtual void visitRVQualified( RVQualified* p )
	{
		readString += p->ident_;
		readString += "_dot_";
		p->rvalue_->accept( this );		
	}

    /*std::vector< */std::string/* >*/ readString;
    bool bDeep;
    bool bByte;
};

#endif
