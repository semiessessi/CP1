#ifndef FUNCTION_INFO_H
#define FUNCTION_INFO_H

#include <map>
#include <string>
#include <vector>

#include "TypeInfo.h"

struct FunctionInfo
{
    std::string szCPName;
    std::string szTypeOwner;
    std::string szTypeReturn;
    std::string szLLVMName;
    DetailedTypeInfo* pTypeReturn;
    std::vector< DetailedTypeInfo* > aszParameterTypes;

    std::vector< std::string > aszInverses;

    bool bPure;

    FunctionInfo()
    : szCPName( "<unnamed-operator>" )
    , szLLVMName( "ERROR!" )
    , szTypeOwner( "<unnamed-type>" )
    , aszInverses()
    , bPure( false )
    {
    }
};

FunctionInfo& FindFunction( std::string szIdent );

extern std::map< std::string, FunctionInfo > gxFunctionMap;

#endif
