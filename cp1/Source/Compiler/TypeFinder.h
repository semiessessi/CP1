#ifndef TYPE_FINDER_H
#define TYPE_FINDER_H

#include "CompilerVisitor.h"

#include "TypeInfo.h"
#include "TypeVisitor.h"

class TypeFinder
: public DescendingCompilerVisitor
{

public:

    virtual void visitDTypeDecl( DTypeDecl* p )
    {
        TypeVisitor v;
        p->type_->accept( &v );
        TypeInfo info = { p->ident_, v.createLLVMTypename(), false };
        registerTypeInfo( info );
    }

    std::string emitLLVM()
    {
        std::string out = "";
        
        for( std::map< std::string, TypeInfo >::iterator it = gxTypeMap.begin(); it != gxTypeMap.end(); ++it )
        {
            out += "%";
            out += it->first;
            out += " = type ";
            out += it->second.szLLVMName;
            out += "\r\n";
        }
        
        return out;
    }

};

#endif
