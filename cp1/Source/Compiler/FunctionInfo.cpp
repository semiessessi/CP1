#include "FunctionInfo.h"
#include "FunctionFinder.h"

std::map< std::string, FunctionInfo > gxFunctionMap;
std::string FunctionFinder::sszCurrentNamespace = "_dot_";

FunctionInfo& FindFunctionInfo( std::string szLLVMName )
{   
    return gxFunctionMap[ szLLVMName ];
}
