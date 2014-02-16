#include "TypeInfo.h"

std::map< std::string, TypeInfo > gxTypeMap;
std::map< std::string, DetailedTypeInfo* > DetailedTypeInfo::sxTypeMap;

void registerTypeInfo( TypeInfo info )
{
    gxTypeMap[ info.szCPName ] = info;
}
