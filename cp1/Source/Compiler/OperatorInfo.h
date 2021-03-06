#ifndef OPERATOR_INFO_H
#define OPERATOR_INFO_H

#include <map>
#include <string>
#include <vector>

#include "TypeInfo.h"

struct OperatorInfo
{
    std::string szCPName;
    std::string szTypeOwner;
    std::string szTypeReturn;
    std::string szLLVMName;
    DetailedTypeInfo* pTypeReturn;
    std::vector< DetailedTypeInfo* > aszParameterTypes;

    std::vector< std::string > aszInverses;

    bool bPure;
    bool bConst;
    bool bInline;
    bool bAssociative;
    bool bCommutative;
    bool bUsed;

    OperatorInfo()
    : szCPName( "<unnamed-operator>" )
    , szLLVMName( "ERROR!" )
    , szTypeOwner( "<unnamed-type>" )
    , aszInverses()
    , bPure( false )
    , bConst( false )
    , bInline( false )
    , bAssociative( false )
    , bCommutative( false )
    , bUsed( false )
    {
    }
};

OperatorInfo& findOperatorInfo( OperatorInfo& info );
std::vector< OperatorInfo > findOperatorInfoBySymbol( std::string mangledSymbol );

extern std::map< std::string, OperatorInfo > gxOperatorMap;

#endif
