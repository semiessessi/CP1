#include "OperatorInfo.h"

std::map< std::string, OperatorInfo > gxOperatorMap;

OperatorInfo& findOperatorInfo( OperatorInfo& info )
{   
    return gxOperatorMap[ info.szLLVMName ];
}

std::vector< OperatorInfo > findOperatorInfoBySymbol( std::string mangledSymbol )
{
    std::vector< OperatorInfo > infos;
    for( std::map< std::string, OperatorInfo >::iterator it = gxOperatorMap.begin(); it != gxOperatorMap.end(); ++it )
    {
        if( it->second.szLLVMName.find( mangledSymbol ) != std::string::npos )
        {
            infos.push_back( it->second );
        }
    }
    return infos;
}