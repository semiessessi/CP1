#ifndef IMPORT_FINDER_H
#define IMPORT_FINDER_H

#include <algorithm>
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
        std::string s = p->ident_;
		std::replace( s.begin(), s.end(), '.', '\\');
		maszImports.push_back( s );
	}
	
	virtual void visitDExpose( DExpose *p )
	{
	}
	
	std::vector< std::string > maszImports;
	
};

#endif
