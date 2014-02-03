#ifndef TYPE_VISITOR_H
#define TYPE_VISITOR_H

#include "CompilerVisitor.h"
#include "TypeInfo.h"

#include <string>
#include <vector>

class TypeVisitor : public CompilerVisitor
{

public:

	TypeVisitor() { reset(); }
	
	void reset()
	{
		aArrayDimensions.clear();
		szName = 0;
		isByte = false;
	}

	virtual void visitTByte(TByte *p)
	{
		szName = "byte";
		isByte = true;
	}

	virtual void visitTCustom(TCustom *p)
	{
		szName = p->ident_;
	}

	virtual void visitTFixedArray(TFixedArray *p)
	{
		aArrayDimensions.push_back( p->integer_ );
		p->type_->accept( this );
	}

	std::vector< int > aArrayDimensions;
	const char* szName;
	bool isByte;

	std::string createLLVMTypename();

};

class DetailedTypeVisitor
: public DescendingCompilerVisitor
{

public:

    DetailedTypeInfo xTypeInfo;
    
    DetailedTypeVisitor() : DescendingCompilerVisitor()
    {
        xTypeInfo.bByte = true;
        xTypeInfo.szCPName = "byte";
    }
    
    virtual void visitTByte(TByte *p)
	{
		//xTypeInfo.bByte = true;
	}

};

class DetailedTypeInferer
: public DescendingCompilerVisitor
{
}; 

#endif
