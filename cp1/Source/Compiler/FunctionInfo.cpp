#include "FunctionInfo.h"

#include "ConversionFinder.h"
#include "FunctionFinder.h"

std::map< std::string, FunctionInfo > gxFunctionMap;
std::string FunctionFinder::sszCurrentNamespace = "_dot_";

// SE - BLAH!!!

std::string ConversionFinder::sszCurrentNamespace;
std::vector< ConversionInfo > ConversionFinder::mxImplicitConversions;
std::vector< ConversionInfo > ConversionFinder::mxAllConversions;

FunctionInfo& FindFunctionInfo( std::string szLLVMName )
{   
    return gxFunctionMap[ szLLVMName ];
}
