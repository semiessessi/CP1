#ifndef TYPE_VISITOR_H
#define TYPE_VISITOR_H

#include "CompilerVisitor.h"
#include "TypeInfo.h"

#include <string>
#include <vector>

class TypeVisitor : public CompilerVisitor
{

public:

	TypeVisitor() { reset(); }
	
	void reset()
	{
		aArrayDimensions.clear();
		szName = 0;
		isByte = false;
	}

	virtual void visitTByte(TByte *p)
	{
		szName = "byte";
		isByte = true;
	}

	virtual void visitTCustom(TCustom *p)
	{
		szName = p->ident_.c_str();
	}

	virtual void visitTFixedArray(TFixedArray *p)
	{
		aArrayDimensions.push_back( p->integer_ );
		p->type_->accept( this );
	}

	std::vector< int > aArrayDimensions;
	const char* szName;
	bool isByte;

	std::string createLLVMTypename();

};

class DetailedTypeVisitor
: public DescendingCompilerVisitor
{

private:

    std::string mszCurrentNamespace;

public:

    DetailedTypeInfo* pxTypeInfo;
    
    DetailedTypeVisitor() : DescendingCompilerVisitor()
    {
        pxTypeInfo = 0;
        mszCurrentNamespace = "_dot_";
    }
    
    virtual void visitDNamespace( DNamespace *p )
	{
		mszCurrentNamespace += p->ident_;
		mszCurrentNamespace += "_dot_";
		
		DescendingCompilerVisitor::visitDNamespace( p );
		
		mszCurrentNamespace.resize( mszCurrentNamespace.size() - ( sizeof( "_dot_" ) - 1 ) - strlen( p->ident_.c_str() ) );
	}
    
    virtual void visitTAddress( TAddress* p )
	{
        pxTypeInfo = DetailedTypeInfo::Find( "address" );
		pxTypeInfo->bAddress = true;
        pxTypeInfo->szCPName = "address";
        pxTypeInfo->szLLVMName = "i8*";
        pxTypeInfo->bDefined = true;
	}
    
    virtual void visitTByte( TByte* p )
	{
        pxTypeInfo = DetailedTypeInfo::Find( "byte" );
		pxTypeInfo->bByte = true;
        pxTypeInfo->szCPName = "byte";
        pxTypeInfo->szLLVMName = "i8";
        pxTypeInfo->bDefined = true;
	}
    
    virtual void visitTCustom( TCustom* p )
	{
        bool bAlreadyInMap = DetailedTypeInfo::AlreadyInMap( mszCurrentNamespace + p->ident_ );
        pxTypeInfo = DetailedTypeInfo::Find( mszCurrentNamespace + p->ident_ );
        if( !bAlreadyInMap )
        {
            pxTypeInfo->szCPName = mszCurrentNamespace + p->ident_;
            pxTypeInfo->szLLVMName = "%";
            pxTypeInfo->szLLVMName += mszCurrentNamespace + p->ident_;
            pxTypeInfo->bDefined = false;
        }
	}
    
    virtual void visitTFixedArray( TFixedArray* p )
	{
        DetailedTypeVisitor v;
        p->type_->accept( &v );
        
        if( v.pxTypeInfo )
        {
            std::string szCPName = v.pxTypeInfo->szCPName + "[ " + std::to_string( p->integer_ ) + " ]";
            pxTypeInfo = DetailedTypeInfo::Find( szCPName );
            pxTypeInfo->szCPName = szCPName;
            pxTypeInfo->szLLVMName = std::string( "[ " ) + std::to_string( p->integer_ ) + " x " + v.pxTypeInfo->szLLVMName + " ]";
            pxTypeInfo->pxArrayType = v.pxTypeInfo;
            pxTypeInfo->iArrayDimension = p->integer_;
            pxTypeInfo->bDefined = true;
        }
	}
    
    virtual void visitTSInteger( TSInteger* p )
    {
        if( pxTypeInfo )
        {
            // SE - TODO: check its an array of bytes...
            pxTypeInfo->bInteger = true;
        }
    }
    
    virtual void visitTSReal( TSReal* p )
    {
        if( pxTypeInfo )
        {
            // SE - TODO: check its an array of bytes...
            pxTypeInfo->bFloat = true;
        }
    }
    
    virtual void visitDTypeDecl( DTypeDecl* p )
    {
        DetailedTypeInfo* pxNewTypeInfo = DetailedTypeInfo::Find( mszCurrentNamespace + p->ident_ );
        
        DetailedTypeVisitor v;
        p->type_->accept( &v );
        
        ListTypeSpecifier* ps = p->listtypespecifier_;
        for( size_t i = 0 ; i < ps->size(); ++i )
        {
            ( *ps )[ i ]->accept( &v );
        }
        
        *pxNewTypeInfo = *v.pxTypeInfo;
        
        pxNewTypeInfo->szCPName = mszCurrentNamespace + p->ident_;
        pxNewTypeInfo->bDefined = true;
        pxNewTypeInfo->bTypedef = true;
    }
    
    std::string emitLLVM()
    {
        return DetailedTypeInfo::EmitLLVM();
    }
    
};

class DetailedTypeInferer
: public DescendingCompilerVisitor
{

private:

    std::string mszCurrentNamespace;
    
public:

    DetailedTypeInferer() : DescendingCompilerVisitor()
    {
        pxTypeInfo = 0;
        mszCurrentNamespace = "_dot_";
    }
    
    DetailedTypeInfo* pxTypeInfo;
    
    virtual void visitDNamespace( DNamespace *p )
    {
        mszCurrentNamespace += p->ident_;
        mszCurrentNamespace += "_dot_";

        DescendingCompilerVisitor::visitDNamespace( p );

        mszCurrentNamespace.resize( mszCurrentNamespace.size() - ( sizeof( "_dot_" ) - 1 ) - strlen( p->ident_.c_str() ) );
    }
    
    virtual void visitEString( EString* p )
    {
        pxTypeInfo = DetailedTypeInfo::Find( "address" );
    }
    
    virtual void visitEChar( EChar* p )
    {
        pxTypeInfo = DetailedTypeInfo::Find( "byte" );
    }
    
    virtual void visitEDouble( EDouble* p )
    {
        //pxTypeInfo = DetailedTypeInfo::Find( "byte[ 8 ]" ); // SE - TODO: ...
    }
    
    virtual void visitEInteger( EInteger* p )
    {
        pxTypeInfo = DetailedTypeInfo::Find( "byte" );
    }

}; 

#endif
