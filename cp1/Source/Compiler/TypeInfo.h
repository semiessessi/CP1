#ifndef TYPE_INFO_H
#define TYPE_INFO_H

#include <map>
#include <string>
#include <vector>

#include "../Error/VerboseInfo.h"

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
    
    std::vector< DetailedTypeInfo* > axFields;
    
    DetailedTypeInfo* pxArrayType;
    
    int iArrayDimension;
    
    bool bList;
    bool bAddress;
    
    bool bByte;
    bool bInteger;
    bool bFloat;
    
    bool bDefined;
    bool bTypedef;

    DetailedTypeInfo()
    {
        pxArrayType = 0;
        iArrayDimension = 0;
    
        bList = false;
        bAddress = false;
        
        bByte = false;
        bInteger = false;
        bFloat = false;
        
        bDefined = false;
        bTypedef = false;
    }
    
    static bool AlreadyInMap( const std::string& key ) { return sxTypeMap.find( key ) != sxTypeMap.end(); }
    static DetailedTypeInfo* Find( const std::string& key )
    {
        if( !AlreadyInMap( key ) )
        {
            sxTypeMap[ key ] = new DetailedTypeInfo;
        }
        
        return sxTypeMap[ key ];
    }
    
    bool DependsOn( DetailedTypeInfo& info ) const
    {
        if( bByte )
        {
            return false;
        }
        
        if( bAddress )
        {
            return false;
        }
        
        for( size_t i = 0; i < axFields.size(); ++i )
        {
            if( axFields[ i ]->DependsOn( info ) )
            {
                return true;
            }
        }
        
        if( pxArrayType == 0 )
        {
            return false;
        }
        
        return pxArrayType->DependsOn( info );
    }
    
    std::string MangledName()
    {
        std::string ret = szCPName;
        
        return ret;
    }
    
    std::string ShortLLVMName()
    {
        std::string ret = "";
        
        if( bTypedef )
        {
            ret += "%";
            ret += szCPName;
        }
        else
        {
            if( pxArrayType && ( iArrayDimension > 0 ) )
            {
                ret += "[ ";
                ret += std::to_string( iArrayDimension );
                ret += " x ";
                ret += pxArrayType->ShortLLVMName();
                ret += " ]";
            }
            else
            {
                ret += szLLVMName;
            }
        }
        
        return ret;
    }
    
    std::string FullLLVMName()
    {
        if( pxArrayType && ( iArrayDimension > 0 ) )
        {
            if( bInteger )
            {
                // SE - TODO: error of pxArrayType isn't byte...
                szLLVMName = std::string( "i" ) + std::to_string( iArrayDimension * 8 );
            }
            else if( bFloat )
            {
                // SE - TODO: error of pxArrayType isn't byte...
                szLLVMName = std::string( "f" ) + std::to_string( iArrayDimension * 8 );
            }
            else
            {
                szLLVMName = std::string( "[ " ) + std::to_string( iArrayDimension ) + " x " + pxArrayType->FullLLVMName() + " ]";
            }
        }
        
        return szLLVMName;
    }
    
    static std::string EmitLLVM()
    {
        std::string out = "";
        for( std::map< std::string, DetailedTypeInfo* >::iterator it = sxTypeMap.begin(); it != sxTypeMap.end(); ++it )
        {
            if( !it->second->bTypedef )
            {
                continue;
            }
            
            out += "%";
            out += it->first;
            out += " = type ";
            out += it->second->FullLLVMName();
            out += "\r\n";
            
            verboseInfo( 2, "Emitting type %s - %s : ",  it->first.c_str(), it->second->szLLVMName.c_str() );
            if( it->second->bInteger )
            {
                verboseInfo( 2, "integer " );
            }
            
            if( it->second->pxArrayType )
            {
                verboseInfo( 2, "array of type %s ", it->second->pxArrayType->szCPName.c_str() );
            }
            
            if( it->second->iArrayDimension != 0 )
            {
                verboseInfo( 2, "with dimension %d ", it->second->iArrayDimension );
            }
            
            verboseInfo( 2, "\n" );
        }
        
        return out;
    }
    
private:
    
    static std::map< std::string, DetailedTypeInfo* > sxTypeMap;
};

#endif
