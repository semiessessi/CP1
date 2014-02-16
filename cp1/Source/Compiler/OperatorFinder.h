#ifndef OPERATOR_FINDER_H
#define OPERATOR_FINDER_H

#include "CompilerVisitor.h"

#include "OperatorInfo.h"
#include "OperatorNameMangle.h"
#include "OperatorVisitor.h"
#include "TypeVisitor.h"

class OperatorFinder
: public DescendingCompilerVisitor
{

public:

    static OperatorInfo& FindOperator( DOperator *p )
    {
        OperatorVisitor v;
        DetailedTypeVisitor tv;
        p->type_->accept( &tv );
        v.typeOwner = "i8";
        v.typeReturn = "i8";
        if( tv.pxTypeInfo )
        {
            v.typeOwner = tv.pxTypeInfo->MangledName();
            v.typeReturn = tv.pxTypeInfo->ShortLLVMName();
        }
        
        p->accept( &v );
        OperatorInfo info;
        info.szLLVMName = operatorNameMangle( v.name.c_str(), v.typeOwner, v.parameterTypes );
        
        OperatorInfo& rInfo = findOperatorInfo( info );
        rInfo.szCPName = v.name;
        rInfo.szTypeOwner = v.typeOwner;
        rInfo.szTypeReturn = v.typeReturn;
        rInfo.szLLVMName = info.szLLVMName;
        rInfo.aszParameterTypes = v.parameterTypes;
        
        return rInfo;
    }
    
    virtual void visitDOperator(DOperator *p)
    {
        OperatorInfo& pInfo = FindOperator( p );
    }

    std::string emitLLVM()
    {
        std::string out = "";
        
        for( std::map< std::string, OperatorInfo >::iterator it = gxOperatorMap.begin(); it != gxOperatorMap.end(); ++it )
        {
            out += "; declare private fastcc ";
            out += it->second.szTypeReturn;
            out += " @";
            out += it->first;
            out += "( ";
            for( size_t i = 0; i < it->second.aszParameterTypes.size(); ++i )
            {
                if( it->second.aszParameterTypes[ i ] )
                {
                    out += it->second.aszParameterTypes[ i ]->ShortLLVMName();
                }
                else
                {
                    out += it->second.szTypeReturn;
                }
                
                if( i < ( it->second.aszParameterTypes.size() - 1 ) )
                {
                    out += ", ";
                }
            }
            out += " )\r\n";
        }
        
        return out;
    }

    TypeVisitor mxCurrentTypeScopeVisitor;

};

#endif
