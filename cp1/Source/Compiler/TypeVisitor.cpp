#include "TypeVisitor.h"

std::string TypeVisitor::createLLVMTypename()
{
	std::string out = "";
	char buf[ 16 ];
	if( isByte )
	{
		if( aArrayDimensions.size() )
		{
            if( ( aArrayDimensions.size() == 1 )
                && ( aArrayDimensions[ 0 ] == 2 ) )
            {
                out += "i16";
            }
            else if( ( aArrayDimensions.size() == 1 )
                && ( aArrayDimensions[ 0 ] == 4 ) )
            {
                out += "i32";
            }
            else if( ( aArrayDimensions.size() == 1 )
                && ( aArrayDimensions[ 0 ] == 8 ) )
            {
                out += "i64";
            }
            else
            {
                char stack[ 16 ];
                char* sp = stack;
			    for( size_t i = 0; i < aArrayDimensions.size(); ++i )
			    {
                    if( aArrayDimensions[ i ] == 0 )
                    {
                        *sp = '*';
                        ++sp;
                    }
                    else
                    {
				        out += "[ ";
				        sprintf( buf, "%d", aArrayDimensions[ i ] );
				        out += buf;
				        out += " x ";
                        *sp = ']';
                        ++sp;
                    }
			    }
			    out += "i8";
			    for( size_t i = 0; i < aArrayDimensions.size(); ++i )
			    {
				    out += stack[ aArrayDimensions.size() - i - 1 ] == ']' ? " " : "";
                    out += stack[ aArrayDimensions.size() - i - 1 ];
			    }
            }
		}
		else
		{
			out += "i8";
		}
	}
	else
	{
		if( aArrayDimensions.size() )
		{
			char stack[ 16 ];
            char* sp = stack;
			for( size_t i = 0; i < aArrayDimensions.size(); ++i )
			{
                if( aArrayDimensions[ i ] == 0 )
                {
                    *sp = '*';
                    ++sp;
                }
                else
                {
				    out += "[ ";
				    sprintf( buf, "%d", aArrayDimensions[ i ] );
				    out += buf;
				    out += " x ";
                    *sp = ']';
                    ++sp;
                }
			}
            out += "%";
			out += szName;
			for( size_t i = 0; i < aArrayDimensions.size(); ++i )
			{
				out += " ";
                out += stack[ aArrayDimensions.size() - i - 1 ];
			}
		}
		else
		{
			out += "%";
			out += szName;
		}
	}

	return out;
}
