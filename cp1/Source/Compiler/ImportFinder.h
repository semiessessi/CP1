#ifndef IMPORT_FINDER_H
#define IMPORT_FINDER_H

#include <string>
#include <vector>

class ImportFinder
: public DescendingCompilerVisitor
{

public:

	virtual void visitDImport( DImport *p )
	{
		for( size_t i = 0; i < maszImports.size(); ++i )
		{
			if( maszImports[ i ] == p->ident_ )
			{
				return;
			}
		}
		
		maszImports.push_back( p->ident_ );
	}
	
	virtual void visitDExpose( DExpose *p )
	{
	}
	
	std::vector< std::string > maszImports;
	
};

#endif
