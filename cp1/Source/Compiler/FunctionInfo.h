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
    std::string szLLVMName;
    DetailedTypeInfo* pTypeReturn;
    std::vector< DetailedTypeInfo* > aszParameterTypes;

    bool bPure;
    bool bConst;
    bool bInline;
    bool bAssociative;
    bool bCommutative;
    bool bUsed;

    FunctionInfo()
    : szCPName( "<unnamed-operator>" )
    , szLLVMName( "ERROR!" )
    , szTypeOwner( "<unnamed-type>" )
    , pTypeReturn( 0 )
    , bPure( false )
    , bConst( false )
    , bInline( false )
    , bAssociative( false )
    , bCommutative( false )
    , bUsed( false )
    {
    }
};

FunctionInfo& FindFunctionInfo( std::string szIdent );
bool FunctionExists( std::string szIdent );

extern std::map< std::string, FunctionInfo > gxFunctionMap;

#endif
