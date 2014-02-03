#ifndef OPERATOR_NAME_MANGLE_H
#define OPERATOR_NAME_MANGLE_H

#include <string>

// token Operator ( ( '+' | '-' | '=' | '&' | '^' | '|' | '/' | '%' | '*' | '>' | '<' | '!' | '~' | '?' | ':' ) * ) ;

static inline std::string operatorNameMangle( const char* szOperator, std::string szType, const int iParameterCount )
{
	std::string out = "";//"@";
	out += szType;
	out += "_operator_";
    out += 'a' + iParameterCount;
	while( *szOperator )
	{
		switch( *szOperator )
		{
			case '+': out += 'p'; break;
			case '-': out += 's'; break;
			case '*': out += 'm'; break;
			case '/': out += 'd'; break;
			case '%': out += 'r'; break;
			case '=': out += 'e'; break;
			case '!': out += 'n'; break;
			case '~': out += 'b'; break;
			case '|': out += 'o'; break;
			case '^': out += 'x'; break;
			case '&': out += 'a'; break;
			case '<': out += 'l'; break;
			case '>': out += 'g'; break;
			case '?': out += 'q'; break;
			case ':': out += 'c'; break;
			default: out += "fucko"; break;
		}
		++szOperator;
	}

	return out;
}

#endif
