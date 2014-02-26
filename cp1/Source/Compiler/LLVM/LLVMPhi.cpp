#include "LLVMTransform.h"

std::string LLVMTransformVisitor::handleLoopLocalPhis( std::map< std::string, Local > originalLocals, std::string szLoopEntry, std::string szLoopRepeat )
{
    std::string szResult = "";
    
    // for( std::map< std::string, Local >::iterator it = mxLocalPhiRefs.begin(); it != mxLocalPhiRefs.end(); ++it )
    // {
        // std::map< std::string, Local >::iterator it0 = originalLocals.find( it->first );
        // if( it0 != originalLocals.end() )
        // {
            // for( int i = 0; i < siTabLevel; ++i )
            // {
                // szResult += "\t";
            // }
        // }
    // }
    
    return szResult;
}

std::map< std::string, Local > LLVMTransformVisitor::handlePhiInstructions( std::map< std::string, Local > originalLocals, std::map< std::string, Local > locals1, std::map< std::string, Local > locals2, std::string szLabel1, std::string szLabel2 )
{
    std::map< std::string, Local > xResolvedLocals = originalLocals;
    
    for( std::map< std::string, Local >::iterator it = xResolvedLocals.begin(); it != xResolvedLocals.end(); ++it )
    {
        //std::map< std::string, Local >::iterator it0 = originalLocals.find( it->first );
        std::map< std::string, Local >::iterator it1 = locals1.find( it->first );
        std::map< std::string, Local >::iterator it2 = locals2.find( it->first );
        if( ( it1 != locals1.end() )
            && ( it2 != locals2.end() ) )
        {
            //Local l0 = it0->second;
            Local l1 = it1->second;
            Local l2 = it2->second;
            
            if( l1.szLLVMIdent != l2.szLLVMIdent )
            {
                // we need a phi... and to update the locals that we return
                
                for( int i = 0; i < siTabLevel; ++i )
                {
                    out += "\t";
                }
                
                out += "%r" + std::to_string( siTempCounter );
                int iPhi = siTempCounter;
                ++siTempCounter;
                out += " = phi i32 [ " + l1.szLLVMIdent + ", %" + szLabel1 + " ],";
                out += " [ " + l2.szLLVMIdent + ", %" + szLabel2 + " ]\r\n";
                
                it->second.szLLVMIdent = "%r" + std::to_string( iPhi );
            }
        }
    }
    
    return xResolvedLocals;
}
