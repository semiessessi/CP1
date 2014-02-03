#include "TypeInfo.h"

std::map< std::string, TypeInfo > gxTypeMap;

void registerTypeInfo( TypeInfo info )
{
    gxTypeMap[ info.szCPName ] = info;
}
