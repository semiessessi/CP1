#ifndef ENTRY_POINT_FINDER_H
#define ENTRY_POINT_FINDER_H

#include "CompilerVisitor.h"

class EntryPointFinderFinal : public CompilerVisitor
{
public:
	EntryPointFinderFinal() : CompilerVisitor(), bFound( false ) {}
	virtual void visitFSEntryPoint(FSEntryPoint*) { bFound = true; }
	bool bFound;
};

class EntryPointFinder : public DescendingCompilerVisitor
{

public:

	bool checkFunctionSpecifierList( ListFunctionSpecifier* p )
	{
		if( p )
		{
			EntryPointFinderFinal final;
			ListFunctionSpecifier* iter = p;
			while( iter )
			{
				iter->functionspecifier_->accept( &final );
				iter = iter->listfunctionspecifier_;
			}

			if( final.bFound )
			{
				return true;
			}
		}

		return false;
	}

	virtual void visitDDefaultFunction(DDefaultFunction *p)
	{
		if( checkFunctionSpecifierList( p->listfunctionspecifier_ ) )
		{
			szIdentifier = p->ident_;
		}
	}
	
	virtual void visitDFunction(DFunction *p)
	{        
		if( checkFunctionSpecifierList( p->listfunctionspecifier_ ) )
		{
			szIdentifier = p->ident_;
		}
	}

	void start() { szIdentifier = 0; }
	const char* getIdentifier() const { return szIdentifier; }

private:

	const char* szIdentifier;

};

#endif
