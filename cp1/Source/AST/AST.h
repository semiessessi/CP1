#ifndef AST_H
#define AST_H

#include <map>
#include <string>

class AST 
{

public:

	class Variable
	{
	};
	
private:

	std::map< std::string, Variable > m_xVariableMap;
	
};

#endif
