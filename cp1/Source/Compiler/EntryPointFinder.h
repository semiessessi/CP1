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

    DFunction* mpFunction;
    DDefaultFunction* mpDefaultFunction;
    
    EntryPointFinder()
    {
        start();
    }
    
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

    virtual void visitDNamespace( DNamespace *p )
    {
        mszCurrentNamespace += p->ident_;
        mszCurrentNamespace += "_dot_";

        DescendingCompilerVisitor::visitDNamespace( p );

        mszCurrentNamespace.resize( mszCurrentNamespace.size() - ( sizeof( "_dot_" ) - 1 ) - strlen( p->ident_ ) );
    }
    
	virtual void visitDDefaultFunction(DDefaultFunction *p)
	{
		if( checkFunctionSpecifierList( p->listfunctionspecifier_ ) )
		{
			szIdentifier = mszCurrentNamespace + p->ident_;
            mpDefaultFunction = p;
		}
	}
	
	virtual void visitDFunction(DFunction *p)
	{        
		if( checkFunctionSpecifierList( p->listfunctionspecifier_ ) )
		{
			szIdentifier = mszCurrentNamespace + p->ident_;
            mpFunction = p;
		}
	}

	void start()
    {
        szIdentifier = "";
        mpFunction = 0;
        mpDefaultFunction = 0;
        mszCurrentNamespace = "_dot_";
    }
	const char* getIdentifier() const { return ( szIdentifier == "" ) ? 0 : szIdentifier.c_str(); }
    
    std::string emitLLVM()
    {
        std::string out;
        
        // SE - TODO: allow return code + more?
        
        out += "define ccc void @main() nounwind\r\n{\r\n";
        out += "\t"/*%epret = */ "call void @";
        out += szIdentifier;
        out += "()\r\n";
        out += "\tret void\r\n";//" %epret\r\n";
        out += "}\r\n";
        
        return out;
    }

private:

	std::string szIdentifier;
    std::string mszCurrentNamespace;

};

#endif
