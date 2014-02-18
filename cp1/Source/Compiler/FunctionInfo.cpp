#include "FunctionInfo.h"

std::map< std::string, FunctionInfo > gxFunctionMap;

FunctionInfo& FindFunction( std::string szLLVMName )
{   
    return gxFunctionMap[ szLLVMName ];
}
