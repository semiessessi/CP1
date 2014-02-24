#ifndef CONVERSION_FINDER_H
#define CONVERSION_FINDER_H

#include <string>

#include "CompilerVisitor.h"

#include "TypeInfo.h"
#include "TypeVisitor.h"

struct ConversionInfo
{
    DetailedTypeInfo* pFrom;
    DetailedTypeInfo* pTo;
    bool bUp;
    bool bDown;
    bool bImplicit;
    
    ConversionInfo()
    : pFrom( 0 )
    , pTo( 0 )
    , bUp( false )
    , bDown( false )
    , bImplicit( false )
    {
    }
    
    ConversionInfo( DetailedTypeInfo* p1, DetailedTypeInfo* p2, bool up, bool down, bool implicit )
    : pFrom( p1 )
    , pTo( p2 )
    , bUp( up )
    , bDown( down )
    , bImplicit( implicit )
    {
    }
    
    std::string MangledName()
    {
        return std::string( "convert_" + pFrom->MangledName() + "_" + pTo->MangledName() );
    }
};

class ConversionFinder
: public DescendingCompilerVisitor
{

private:
    
    bool mbUp;
    bool mbDown;
    bool mbImplicit;
    
    static std::string sszCurrentNamespace;
    static std::vector< ConversionInfo > mxImplicitConversions;
    static std::vector< ConversionInfo > mxAllConversions;
    
public:
    
    ConversionFinder()
    {
        Reset();
    }
    

    static std::vector< ConversionInfo > FindConversionsFrom( DetailedTypeInfo* pType )
    {
        std::vector< ConversionInfo > ret;
        for( size_t i = 0; i < mxAllConversions.size(); ++i )
        {
            if( mxAllConversions[ i ].pFrom->ShortLLVMName() == pType->ShortLLVMName() ) // SE - TODO: a more/less permissive test???
            {
                ret.push_back( mxAllConversions[ i ] );
            }
        }
        
        return ret;
    }
    
    static std::vector< ConversionInfo > FindConversionsBetween( DetailedTypeInfo* pFromType, DetailedTypeInfo* pToType )
    {
        std::vector< ConversionInfo > ret;
        for( size_t i = 0; i < mxAllConversions.size(); ++i )
        {
            if( ( mxAllConversions[ i ].pFrom->ShortLLVMName() == pFromType->ShortLLVMName() ) // SE - TODO: a more/less permissive test???
                && ( mxAllConversions[ i ].pTo->ShortLLVMName() == pToType->ShortLLVMName() ) ) // SE - TODO: a more/less permissive test???
            {
                ret.push_back( mxAllConversions[ i ] );
            }
        }
        
        return ret;
    }
    
    static std::vector< ConversionInfo > FindImplicitConversionsFrom( DetailedTypeInfo* pType )
    {
        std::vector< ConversionInfo > ret;
        for( size_t i = 0; i < mxAllConversions.size(); ++i )
        {
            if( mxAllConversions[ i ].bImplicit
                && ( mxAllConversions[ i ].pFrom->ShortLLVMName() == pType->ShortLLVMName() ) ) // SE - TODO: a more/less permissive test???
            {
                ret.push_back( mxAllConversions[ i ] );
            }
        }
        
        return ret;
    }
    
    static std::vector< ConversionInfo > FindImplicitConversionsBetween( DetailedTypeInfo* pFromType, DetailedTypeInfo* pToType )
    {
        std::vector< ConversionInfo > ret;
        for( size_t i = 0; i < mxAllConversions.size(); ++i )
        {
            if( mxAllConversions[ i ].bImplicit
                && ( mxAllConversions[ i ].pFrom->ShortLLVMName() == pFromType->ShortLLVMName() ) // SE - TODO: a more/less permissive test???
                && ( mxAllConversions[ i ].pTo->ShortLLVMName() == pToType->ShortLLVMName() ) ) // SE - TODO: a more/less permissive test???
            {
                ret.push_back( mxAllConversions[ i ] );
            }
        }
        
        return ret;
    }
    
    virtual void visitDNamespace( DNamespace *p )
    {
        sszCurrentNamespace += p->ident_;
        sszCurrentNamespace += "_dot_";
        
        DescendingCompilerVisitor::visitDNamespace( p );
        
        sszCurrentNamespace.resize( sszCurrentNamespace.size() - ( sizeof( "_dot_" ) - 1 ) - strlen( p->ident_.c_str() ) );
    }
    
    virtual void visitDTypeConv( DTypeConv* p )
    {
        Reset();
        
        ListConversionSpecifier* pList = p->listconversionspecifier_;
        for( size_t i = 0 ; i < pList->size(); ++i )
        {
            ( *pList )[ i ]->accept( this );
        }
        
        DetailedTypeVisitor v1;
        p->type_1->accept( &v1 );
        
        DetailedTypeVisitor v2;
        p->type_2->accept( &v2 );
        
        ConversionInfo info( v2.pxTypeInfo, v1.pxTypeInfo, mbUp, mbDown, mbImplicit );
        mxAllConversions.push_back( info );
        if( info.bImplicit )
        {
            mxImplicitConversions.push_back( info );
        }
    }
    
    virtual void visitCSUp( CSUp* p )
    {
        mbUp = true;
    }
    
    virtual void visitCSDown( CSDown* p )
    {
        mbDown = true;
    }
    
    virtual void visitCSImplicit( CSImplicit* p )
    {
        mbImplicit = true;
    }
    
    void Reset()
    {
        sszCurrentNamespace = "_dot_";
        mbUp = false;
        mbDown = false;
        mbImplicit = false;
    }
    
};

#endif
