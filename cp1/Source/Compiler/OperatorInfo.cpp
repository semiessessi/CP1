#include "OperatorInfo.h"

std::map< std::string, OperatorInfo > gxOperatorMap;

OperatorInfo& findOperatorInfo( OperatorInfo& info )
{   
    return gxOperatorMap[ info.szLLVMName ];
}
