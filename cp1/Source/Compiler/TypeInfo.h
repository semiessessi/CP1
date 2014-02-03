#ifndef TYPE_INFO_H
#define TYPE_INFO_H

#include <map>
#include <string>
#include <vector>

struct TypeInfo
{
    std::string szCPName;
    std::string szLLVMName;
    bool bUsed;
};

void registerTypeInfo( TypeInfo i );

extern std::map< std::string, TypeInfo > gxTypeMap;

struct DetailedTypeInfo
{
    std::string szCPName;
    std::string szLLVMName;
    
    std::vector< DetailedTypeInfo > axFields;
    
    DetailedTypeInfo* pxBaseType;
    
    int iArrayDimension;
    
    bool bByte;
    bool bInteger;
    bool bFloat;

    static bool AlreadyInMap( const std::string& key ) { return sxTypeMap.find( key ) != sxTypeMap.end(); }
    static DetailedTypeInfo* Find( const std::string& key ) { return sxTypeMap[ key ]; }
    
private:
    
    static std::map< std::string, DetailedTypeInfo* > sxTypeMap;
};

#endif
