#ifndef CONSTANT_FINDER_H
#define CONSTANT_FINDER_H

#include <map>
#include <string>

extern std::map< std::string, std::string > gszStrings;

class ConstantFinder : public DescendingCompilerVisitor
{

public:

    ConstantFinder() : DescendingCompilerVisitor()
    {
        miConstantID = 0;
    }
    
    virtual void visitEString( EString* p )
    {
        if( gszStrings.find( p->cstring_ ) == gszStrings.end() )
        {
            gszStrings[ p->cstring_ ] = nextConstant();
        }
    }
    
    std::string emitLLVM()
	{
        std::string code = "";
        for( std::map< std::string, std::string >::iterator it = gszStrings.begin(); it != gszStrings.end(); ++it )
        {
            code += it->second;
            code += " = private unnamed_addr constant [";
            code += std::to_string( it->first.length() - 1 );
            code += " x i8] c";
            code += it->first;
            code.pop_back();
            code += "\\00\"\n";
        }
        
        return code;
    }
    
    std::string identifierFromString( std::string szString )
    {
        return gszStrings[ szString ];
    }

    
private:

    std::string nextConstant()
    {
        std::string szReturnValue = "@.cstring";
        szReturnValue += std::to_string( miConstantID );
        ++miConstantID;
        return szReturnValue;
    }
    
    int miConstantID;

};

#endif
