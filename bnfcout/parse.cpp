
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison GLR parsers in C
   
      Copyright (C) 2002, 2003, 2004, 2005, 2006 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1




/* Copy the first part of user declarations.  */

/* Line 172 of glr.c  */
#line 2 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include "Absyn.H"
typedef struct yy_buffer_state *YY_BUFFER_STATE;
int yyparse(void);
int yylex(void);
YY_BUFFER_STATE yy_scan_string(const char *str);
void yy_delete_buffer(YY_BUFFER_STATE buf);
int yy_mylinenumber;
int initialize_lexer(FILE * inp);
int yywrap(void)
{
  return 1;
}
extern void yyerror(const char *str);void yyerror_fucko(const char *str)
{
  std::cout << "line " << yy_mylinenumber << std::endl ;
  fprintf(stderr,"error: %s\n",str);
}



static Code* YY_RESULT_Code_ = 0;
Code* pCode(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Code_;
  }
}
Code* pCode(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Code_;
  }
}

static TLDeclaration* YY_RESULT_TLDeclaration_ = 0;
TLDeclaration* pTLDeclaration(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_TLDeclaration_;
  }
}
TLDeclaration* pTLDeclaration(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_TLDeclaration_;
  }
}

static Declaration* YY_RESULT_Declaration_ = 0;
Declaration* pDeclaration(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Declaration_;
  }
}
Declaration* pDeclaration(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Declaration_;
  }
}

static Prototype* YY_RESULT_Prototype_ = 0;
Prototype* pPrototype(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Prototype_;
  }
}
Prototype* pPrototype(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Prototype_;
  }
}

static OperatorName* YY_RESULT_OperatorName_ = 0;
OperatorName* pOperatorName(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OperatorName_;
  }
}
OperatorName* pOperatorName(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OperatorName_;
  }
}

static OperatorTrait* YY_RESULT_OperatorTrait_ = 0;
OperatorTrait* pOperatorTrait(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OperatorTrait_;
  }
}
OperatorTrait* pOperatorTrait(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OperatorTrait_;
  }
}

static FunctionSpecifier* YY_RESULT_FunctionSpecifier_ = 0;
FunctionSpecifier* pFunctionSpecifier(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_FunctionSpecifier_;
  }
}
FunctionSpecifier* pFunctionSpecifier(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_FunctionSpecifier_;
  }
}

static ConversionSpecifier* YY_RESULT_ConversionSpecifier_ = 0;
ConversionSpecifier* pConversionSpecifier(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ConversionSpecifier_;
  }
}
ConversionSpecifier* pConversionSpecifier(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ConversionSpecifier_;
  }
}

static VariableSpecifier* YY_RESULT_VariableSpecifier_ = 0;
VariableSpecifier* pVariableSpecifier(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_VariableSpecifier_;
  }
}
VariableSpecifier* pVariableSpecifier(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_VariableSpecifier_;
  }
}

static TypeSpecifier* YY_RESULT_TypeSpecifier_ = 0;
TypeSpecifier* pTypeSpecifier(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_TypeSpecifier_;
  }
}
TypeSpecifier* pTypeSpecifier(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_TypeSpecifier_;
  }
}

static GenericParam* YY_RESULT_GenericParam_ = 0;
GenericParam* pGenericParam(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_GenericParam_;
  }
}
GenericParam* pGenericParam(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_GenericParam_;
  }
}

static Type* YY_RESULT_Type_ = 0;
Type* pType(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}
Type* pType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}

static StructMemberDeclaration* YY_RESULT_StructMemberDeclaration_ = 0;
StructMemberDeclaration* pStructMemberDeclaration(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_StructMemberDeclaration_;
  }
}
StructMemberDeclaration* pStructMemberDeclaration(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_StructMemberDeclaration_;
  }
}

static ParameterDeclaration* YY_RESULT_ParameterDeclaration_ = 0;
ParameterDeclaration* pParameterDeclaration(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ParameterDeclaration_;
  }
}
ParameterDeclaration* pParameterDeclaration(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ParameterDeclaration_;
  }
}

static Statement* YY_RESULT_Statement_ = 0;
Statement* pStatement(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Statement_;
  }
}
Statement* pStatement(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Statement_;
  }
}

static RValue* YY_RESULT_RValue_ = 0;
RValue* pRValue(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_RValue_;
  }
}
RValue* pRValue(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_RValue_;
  }
}

static Expression* YY_RESULT_Expression_ = 0;
Expression* pExpression(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expression_;
  }
}
Expression* pExpression(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expression_;
  }
}

static ListTLDeclaration* YY_RESULT_ListTLDeclaration_ = 0;
ListTLDeclaration* pListTLDeclaration(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListTLDeclaration_;
  }
}
ListTLDeclaration* pListTLDeclaration(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListTLDeclaration_;
  }
}

static ListDeclaration* YY_RESULT_ListDeclaration_ = 0;
ListDeclaration* pListDeclaration(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDeclaration_;
  }
}
ListDeclaration* pListDeclaration(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDeclaration_;
  }
}

static ListStatement* YY_RESULT_ListStatement_ = 0;
ListStatement* pListStatement(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStatement_;
  }
}
ListStatement* pListStatement(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStatement_;
  }
}

static ListTypeSpecifier* YY_RESULT_ListTypeSpecifier_ = 0;
ListTypeSpecifier* pListTypeSpecifier(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListTypeSpecifier_;
  }
}
ListTypeSpecifier* pListTypeSpecifier(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListTypeSpecifier_;
  }
}

static ListConversionSpecifier* YY_RESULT_ListConversionSpecifier_ = 0;
ListConversionSpecifier* pListConversionSpecifier(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListConversionSpecifier_;
  }
}
ListConversionSpecifier* pListConversionSpecifier(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListConversionSpecifier_;
  }
}

static ListFunctionSpecifier* YY_RESULT_ListFunctionSpecifier_ = 0;
ListFunctionSpecifier* pListFunctionSpecifier(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListFunctionSpecifier_;
  }
}
ListFunctionSpecifier* pListFunctionSpecifier(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListFunctionSpecifier_;
  }
}

static ListVariableSpecifier* YY_RESULT_ListVariableSpecifier_ = 0;
ListVariableSpecifier* pListVariableSpecifier(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListVariableSpecifier_;
  }
}
ListVariableSpecifier* pListVariableSpecifier(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListVariableSpecifier_;
  }
}

static ListStructMemberDeclaration* YY_RESULT_ListStructMemberDeclaration_ = 0;
ListStructMemberDeclaration* pListStructMemberDeclaration(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStructMemberDeclaration_;
  }
}
ListStructMemberDeclaration* pListStructMemberDeclaration(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStructMemberDeclaration_;
  }
}

static ListGenericParam* YY_RESULT_ListGenericParam_ = 0;
ListGenericParam* pListGenericParam(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListGenericParam_;
  }
}
ListGenericParam* pListGenericParam(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListGenericParam_;
  }
}

static ListParameterDeclaration* YY_RESULT_ListParameterDeclaration_ = 0;
ListParameterDeclaration* pListParameterDeclaration(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListParameterDeclaration_;
  }
}
ListParameterDeclaration* pListParameterDeclaration(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListParameterDeclaration_;
  }
}

static ListExpression* YY_RESULT_ListExpression_ = 0;
ListExpression* pListExpression(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExpression_;
  }
}
ListExpression* pListExpression(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExpression_;
  }
}

static ListType* YY_RESULT_ListType_ = 0;
ListType* pListType(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListType_;
  }
}
ListType* pListType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListType_;
  }
}





/* Line 172 of glr.c  */
#line 1047 "parse.cpp"



#include "parse.hpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template,
   here we set the default value of $$ to a zeroed-out value.
   Since the default value is undefined, this behavior is
   technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */


/* Line 243 of glr.c  */
#line 1082 "parse.cpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(env) setjmp (env)
# define YYLONGJMP(env, val) longjmp (env, val)
#endif

/*-----------------.
| GCC extensions.  |
`-----------------*/

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5) || __STRICT_ANSI__)
#  define __attribute__(Spec) /* empty */
# endif
#endif

#define YYOPTIONAL_LOC(Name) Name

#ifndef YYASSERT
# define YYASSERT(condition) ((void) ((condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2940

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  125
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNRULES -- Number of states.  */
#define YYNSTATES  610
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 11
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   379

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,    10,    14,    20,    29,    39,    49,
      52,    58,    70,    73,    80,    85,    93,    95,    97,    99,
     101,   103,   105,   107,   109,   111,   113,   115,   117,   119,
     121,   123,   125,   127,   129,   131,   133,   135,   137,   139,
     141,   143,   145,   147,   152,   154,   156,   158,   160,   162,
     164,   166,   169,   171,   173,   175,   177,   179,   184,   189,
     191,   193,   196,   198,   200,   202,   207,   211,   215,   220,
     225,   231,   233,   237,   240,   244,   248,   251,   255,   263,
     275,   283,   291,   299,   311,   322,   333,   336,   339,   342,
     349,   354,   356,   360,   362,   364,   366,   368,   370,   372,
     376,   380,   384,   390,   396,   401,   405,   410,   413,   416,
     419,   423,   427,   435,   443,   451,   459,   469,   479,   489,
     499,   509,   519,   529,   539,   549,   559,   569,   579,   589,
     597,   605,   615,   625,   635,   645,   655,   665,   667,   670,
     673,   676,   679,   682,   685,   687,   691,   695,   699,   703,
     705,   709,   713,   717,   721,   723,   727,   731,   733,   737,
     741,   745,   749,   751,   755,   759,   761,   765,   769,   773,
     775,   779,   783,   787,   789,   795,   797,   801,   805,   809,
     813,   817,   821,   825,   829,   833,   837,   841,   843,   844,
     847,   848,   851,   852,   855,   856,   859,   860,   863,   864,
     867,   868,   871,   872,   875,   877,   881,   882,   884,   888,
     890,   894,   895,   897
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
     126,     0,    -1,   154,   155,    -1,    88,   124,     4,    -1,
      81,   124,     4,    -1,    95,   124,     5,   155,     6,    -1,
     159,   124,     7,   163,     8,     5,   156,     6,    -1,   159,
     137,   124,     7,   163,     8,     5,   156,     6,    -1,   159,
     137,   130,     7,   163,     8,     5,   156,     6,    -1,   131,
       4,    -1,   157,   110,   137,   124,     4,    -1,   137,   158,
      75,     7,    73,   137,   124,     8,     5,   156,     6,    -1,
      82,   129,    -1,   160,   137,   124,     9,   153,     4,    -1,
     160,   137,   124,     4,    -1,   159,   137,   124,     7,   163,
       8,     4,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,
      -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    85,   137,   130,
     153,    -1,    80,    -1,   100,    -1,    73,    -1,    90,    -1,
      61,    -1,    72,    -1,    59,    -1,    92,   130,    -1,   105,
      -1,   113,    -1,    77,    -1,    87,    -1,    73,    -1,    56,
      23,   122,    24,    -1,    84,    23,   162,    24,    -1,    91,
      -1,   101,    -1,   137,   124,    -1,    55,    -1,    64,    -1,
     124,    -1,   137,    37,   122,    38,    -1,   137,    37,    38,
      -1,    37,   137,    38,    -1,    37,   137,    39,    38,    -1,
       5,   161,     4,     6,    -1,     7,   165,     8,    35,   137,
      -1,   110,    -1,   137,   124,     4,    -1,   160,   124,    -1,
     160,   137,   124,    -1,   103,   153,     4,    -1,   153,     4,
      -1,     5,   156,     6,    -1,    86,     7,   153,     8,     5,
     156,     6,    -1,    86,     7,   153,     8,     5,   156,     6,
      79,     5,   156,     6,    -1,   102,     7,   153,     8,     5,
     156,     6,    -1,   116,     7,   153,     8,     5,   156,     6,
      -1,   112,     7,   153,     8,     5,   156,     6,    -1,    83,
       7,   164,     4,   153,     4,   164,     8,     5,   156,     6,
      -1,    83,    78,     7,   124,    89,   153,     8,     5,   156,
       6,    -1,    83,    57,     7,   124,    89,   153,     8,     5,
     156,     6,    -1,    62,     4,    -1,    74,     4,    -1,    63,
       4,    -1,   160,   137,   124,     9,   153,     4,    -1,   160,
     137,   124,     4,    -1,   124,    -1,   124,    40,   141,    -1,
     123,    -1,   122,    -1,   119,    -1,   120,    -1,    99,    -1,
     141,    -1,     7,   153,     8,    -1,     5,   164,     6,    -1,
      37,   164,    38,    -1,     5,   153,   115,   164,     6,    -1,
      37,   153,   115,   164,    38,    -1,   153,    37,   153,    38,
      -1,   141,     7,     8,    -1,   141,     7,   164,     8,    -1,
     141,    11,    -1,   141,    12,    -1,    29,   142,    -1,   143,
      36,   142,    -1,   143,    35,   142,    -1,   107,    23,   137,
      24,     7,   153,     8,    -1,   118,    23,   137,    24,     7,
     153,     8,    -1,    65,    23,   137,    24,     7,   153,     8,
      -1,    76,    23,   137,    24,     7,   153,     8,    -1,    54,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,   109,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,    94,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,   111,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,   104,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,   114,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,   108,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,    58,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,    98,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,   117,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,   106,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,    93,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,    60,
      23,   137,    24,     7,   153,    41,   153,     8,    -1,    97,
      23,   137,    24,     7,   153,     8,    -1,    96,    23,   137,
      24,     7,   153,     8,    -1,    66,    23,   137,    24,     7,
     153,    41,   153,     8,    -1,    71,    23,   137,    24,     7,
     153,    41,   153,     8,    -1,    70,    23,   137,    24,     7,
     153,    41,   153,     8,    -1,    68,    23,   137,    24,     7,
     153,    41,   153,     8,    -1,    69,    23,   137,    24,     7,
     153,    41,   153,     8,    -1,    67,    23,   137,    24,     7,
     153,    41,   153,     8,    -1,   142,    -1,    10,   143,    -1,
      11,   141,    -1,    12,   141,    -1,    20,   143,    -1,    13,
     143,    -1,    19,   143,    -1,   143,    -1,   145,    14,   144,
      -1,   145,    15,   144,    -1,   145,    16,   144,    -1,   145,
      18,   144,    -1,   144,    -1,   146,    19,   145,    -1,   146,
      20,   145,    -1,   146,    11,   145,    -1,   146,    12,   145,
      -1,   145,    -1,   147,    21,   146,    -1,   147,    22,   146,
      -1,   146,    -1,   147,    23,   147,    -1,   147,    24,   147,
      -1,   147,    25,   147,    -1,   147,    26,   147,    -1,   147,
      -1,   148,    27,   148,    -1,   148,    28,   148,    -1,   148,
      -1,   150,    29,   149,    -1,   150,    30,   149,    -1,   150,
      31,   149,    -1,   149,    -1,   150,    32,   150,    -1,   150,
      33,   150,    -1,   150,    34,   150,    -1,   150,    -1,   151,
      42,   151,    43,   151,    -1,   151,    -1,   141,     9,   153,
      -1,   141,    44,   153,    -1,   141,    45,   153,    -1,   141,
      46,   153,    -1,   141,    47,   153,    -1,   141,    48,   153,
      -1,   141,    49,   153,    -1,   141,    50,   153,    -1,   141,
      51,   153,    -1,   141,    52,   153,    -1,   141,    53,   153,
      -1,   152,    -1,    -1,   154,   127,    -1,    -1,   155,   128,
      -1,    -1,   156,   140,    -1,    -1,   157,   135,    -1,    -1,
     158,   133,    -1,    -1,   159,   132,    -1,    -1,   160,   134,
      -1,    -1,   161,   138,    -1,   136,    -1,   136,    41,   162,
      -1,    -1,   139,    -1,   139,    41,   163,    -1,   153,    -1,
     153,    41,   164,    -1,    -1,   137,    -1,   137,    41,   165,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,  1196,  1196,  1198,  1199,  1201,  1202,  1203,  1204,  1205,
    1206,  1207,  1208,  1209,  1210,  1212,  1214,  1215,  1216,  1217,
    1218,  1219,  1220,  1221,  1222,  1223,  1224,  1225,  1226,  1227,
    1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,
    1238,  1239,  1240,  1242,  1244,  1245,  1246,  1247,  1248,  1249,
    1250,  1251,  1252,  1254,  1255,  1256,  1258,  1260,  1261,  1262,
    1263,  1265,  1267,  1268,  1269,  1270,  1271,  1272,  1273,  1274,
    1275,  1276,  1278,  1280,  1281,  1283,  1284,  1285,  1286,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,
    1298,  1300,  1301,  1303,  1304,  1305,  1306,  1307,  1308,  1309,
    1311,  1312,  1313,  1314,  1315,  1316,  1317,  1318,  1319,  1320,
    1321,  1322,  1323,  1324,  1325,  1326,  1327,  1328,  1329,  1330,
    1331,  1332,  1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,
    1341,  1342,  1343,  1344,  1345,  1346,  1347,  1348,  1350,  1351,
    1352,  1353,  1354,  1355,  1356,  1358,  1359,  1360,  1361,  1362,
    1364,  1365,  1366,  1367,  1368,  1370,  1371,  1372,  1374,  1375,
    1376,  1377,  1378,  1380,  1381,  1382,  1384,  1385,  1386,  1387,
    1389,  1390,  1391,  1392,  1394,  1395,  1397,  1398,  1399,  1400,
    1401,  1402,  1403,  1404,  1405,  1406,  1407,  1408,  1410,  1411,
    1413,  1414,  1416,  1417,  1419,  1420,  1422,  1423,  1425,  1426,
    1428,  1429,  1431,  1432,  1434,  1435,  1437,  1438,  1439,  1441,
    1442,  1444,  1445,  1446
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ERROR_", "_SYMB_0", "_SYMB_1",
  "_SYMB_2", "_SYMB_3", "_SYMB_4", "_SYMB_5", "_SYMB_6", "_SYMB_7",
  "_SYMB_8", "_SYMB_9", "_SYMB_10", "_SYMB_11", "_SYMB_12", "_SYMB_13",
  "_SYMB_14", "_SYMB_15", "_SYMB_16", "_SYMB_17", "_SYMB_18", "_SYMB_19",
  "_SYMB_20", "_SYMB_21", "_SYMB_22", "_SYMB_23", "_SYMB_24", "_SYMB_25",
  "_SYMB_26", "_SYMB_27", "_SYMB_28", "_SYMB_29", "_SYMB_30", "_SYMB_31",
  "_SYMB_32", "_SYMB_33", "_SYMB_34", "_SYMB_35", "_SYMB_36", "_SYMB_37",
  "_SYMB_38", "_SYMB_39", "_SYMB_40", "_SYMB_41", "_SYMB_42", "_SYMB_43",
  "_SYMB_44", "_SYMB_45", "_SYMB_46", "_SYMB_47", "_SYMB_48", "_SYMB_49",
  "_SYMB_50", "_SYMB_51", "_SYMB_52", "_SYMB_53", "_SYMB_54", "_SYMB_55",
  "_SYMB_56", "_SYMB_57", "_SYMB_58", "_SYMB_59", "_SYMB_60", "_SYMB_61",
  "_SYMB_62", "_SYMB_63", "_SYMB_64", "_SYMB_65", "_SYMB_66", "_SYMB_67",
  "_SYMB_68", "_SYMB_69", "_SYMB_70", "_SYMB_71", "_SYMB_72", "_SYMB_73",
  "_SYMB_74", "_SYMB_75", "_SYMB_76", "_SYMB_77", "_SYMB_78", "_SYMB_79",
  "_SYMB_80", "_SYMB_81", "_SYMB_82", "_SYMB_83", "_SYMB_84", "_SYMB_85",
  "_SYMB_86", "_SYMB_87", "_SYMB_88", "_SYMB_89", "_SYMB_90", "_SYMB_91",
  "_SYMB_92", "_SYMB_93", "_SYMB_94", "_SYMB_95", "_SYMB_96", "_SYMB_97",
  "_SYMB_98", "_SYMB_99", "_SYMB_100", "_SYMB_101", "_SYMB_102",
  "_SYMB_103", "_SYMB_104", "_SYMB_105", "_SYMB_106", "_SYMB_107",
  "_SYMB_108", "_SYMB_109", "_SYMB_110", "_SYMB_111", "_SYMB_112",
  "_SYMB_113", "_SYMB_114", "_SYMB_115", "_SYMB_116", "_SYMB_117",
  "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept", "Code", "TLDeclaration",
  "Declaration", "Prototype", "OperatorName", "OperatorTrait",
  "FunctionSpecifier", "ConversionSpecifier", "VariableSpecifier",
  "TypeSpecifier", "GenericParam", "Type", "StructMemberDeclaration",
  "ParameterDeclaration", "Statement", "RValue", "Expression11",
  "Expression10", "Expression9", "Expression8", "Expression7",
  "Expression6", "Expression5", "Expression4", "Expression3",
  "Expression2", "Expression1", "Expression", "ListTLDeclaration",
  "ListDeclaration", "ListStatement", "ListTypeSpecifier",
  "ListConversionSpecifier", "ListFunctionSpecifier",
  "ListVariableSpecifier", "ListStructMemberDeclaration",
  "ListGenericParam", "ListParameterDeclaration", "ListExpression",
  "ListType", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   125,   126,   127,   127,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   133,   133,   134,   135,   135,   135,
     135,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   138,   139,   139,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   141,   141,   142,   142,   142,   142,   142,   142,   142,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   144,   144,
     144,   144,   144,   144,   144,   145,   145,   145,   145,   145,
     146,   146,   146,   146,   146,   147,   147,   147,   148,   148,
     148,   148,   148,   149,   149,   149,   150,   150,   150,   150,
     151,   151,   151,   151,   152,   152,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   154,   154,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   159,
     160,   160,   161,   161,   162,   162,   163,   163,   163,   164,
     164,   165,   165,   165
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     3,     3,     5,     8,     9,     9,     2,
       5,    11,     2,     6,     4,     7,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     4,     4,     1,
       1,     2,     1,     1,     1,     4,     3,     3,     4,     4,
       5,     1,     3,     2,     3,     3,     2,     3,     7,    11,
       7,     7,     7,    11,    10,    10,     2,     2,     2,     6,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     5,     5,     4,     3,     4,     2,     2,     2,
       3,     3,     7,     7,     7,     7,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     7,
       7,     9,     9,     9,     9,     9,     9,     1,     2,     2,
       2,     2,     2,     2,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     3,     1,     5,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     1,     3,     0,     1,     3,     1,
       3,     0,     1,     3
};

/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error.  */
static const unsigned char yydefact[] =
{
     188,     0,   190,     1,     0,     0,   189,   198,     0,     0,
     202,   211,     0,    62,    63,   198,     0,     0,    71,    64,
     191,     0,   196,     0,     0,     0,     4,     3,     0,   212,
       0,     0,    12,     0,     0,     0,     9,     0,     0,     0,
       0,    59,    60,     0,   195,    50,    48,    49,    46,    44,
      47,     0,    45,    52,    64,   199,     0,    56,   201,     0,
       0,     0,   203,   211,     0,    67,     0,     0,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     0,   190,    66,     0,     0,
      54,    55,    53,   197,     0,     0,     0,    51,   200,     0,
       0,     0,    69,     0,   213,     0,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    94,    93,    91,    98,
     137,   144,   149,   154,   157,   162,   165,   169,   173,   175,
     187,    43,   198,    65,     0,     0,   204,     0,     0,     0,
     207,     0,     0,   200,   200,    14,     0,    72,    70,   200,
     209,     0,     0,   138,     0,   139,   140,   142,   143,   141,
      98,   109,   209,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,    57,     0,    61,    58,    10,   200,    64,     0,
       0,     0,     0,     0,     0,     0,     0,   100,    99,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,   105,   209,     0,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   111,   110,   145,   146,   147,   148,   152,   153,   150,
     151,   155,   156,   158,   159,   160,   161,   163,   164,   166,
     167,   168,   170,   171,   172,   175,     0,     0,   205,   208,
      74,   192,     0,     0,    13,     0,   210,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,     0,   104,     0,   200,   192,
     192,    15,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   174,
       0,   192,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,     0,     0,   200,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,   200,    86,    88,    87,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     7,     8,     0,
       0,     0,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,   130,   129,     0,     0,     0,   112,     0,     0,
       0,     0,     0,   113,   200,    77,     0,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,     0,     0,     0,
       0,     0,    90,     0,   116,   123,   128,   131,   136,   134,
     135,   133,   132,   127,   118,   124,   120,   126,   122,   117,
     119,   121,   125,     0,     0,     0,   192,   192,   192,   192,
       0,     0,     0,     0,   200,   200,   200,   200,    89,     0,
       0,     0,    78,    80,    82,    81,     0,   192,   192,     0,
     192,   200,   200,   192,   200,    85,    84,   200,    83,    79
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     6,    20,    32,    95,    21,    55,   103,    58,
      44,   176,    22,    62,   180,   442,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   194,     2,
       7,   398,    23,    38,    24,   444,    28,   178,   182,   191,
      30
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -356
static const short int yypact[] =
{
    -356,    48,   163,  -356,   -93,   -68,  -356,   420,    62,    70,
    -356,    58,    58,  -356,  -356,  -356,    58,   -35,  -356,  -356,
    -356,   166,    79,    -7,  2385,    45,  -356,  -356,    14,    31,
     145,   730,  -356,  2408,  2876,   167,  -356,   -16,    -2,   158,
     170,  -356,  -356,    58,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  2904,  -356,  -356,   188,  -356,   263,  -356,  -356,   -28,
     240,   -25,  -356,    58,   190,  -356,   198,   -23,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  2192,  -356,  -356,   266,   251,
    -356,  -356,  -356,  -356,   217,    58,    -1,  -356,   333,   374,
     383,    89,  -356,   343,  -356,    58,  -356,   390,  2192,  2192,
    2192,   299,   299,  2192,  2192,  2192,   130,  2192,   326,   425,
     431,   448,   454,   460,   462,   487,   505,   516,   546,   553,
     564,   581,   589,   599,  -356,   602,   604,   637,   644,   664,
     666,   668,   673,   684,  -356,  -356,  -356,  -356,   593,   417,
    -356,   372,  -356,   650,   526,   633,   557,  -356,   984,   685,
    -356,   687,  2446,  -356,   648,   708,   701,     1,   721,   743,
     712,    55,   776,   333,   333,  -356,  2192,  -356,   748,   333,
     -11,   784,    21,  2553,   687,  -356,  -356,  2582,  2611,  2640,
    -356,  -356,     0,   778,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,   299,
    2072,  2192,  -356,  -356,  2192,  2192,  2192,  2192,  2192,  2192,
    2192,  2192,  2192,  2192,   130,   130,  2192,  2192,  2192,  2192,
    2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,
    2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,
    -356,    58,  -356,    58,  -356,  -356,  -356,   333,     5,     2,
     804,   816,   817,     6,   819,  2192,  2192,  -356,  -356,  2192,
    -356,    33,   138,   143,   147,   152,   210,   318,   322,   356,
     367,   394,   398,   408,   409,   435,   436,   450,   457,   464,
     489,   490,   492,   496,   510,   511,  -356,  -356,   113,   833,
     807,   810,   815,   820,   825,   828,   830,   836,   843,   844,
     853,  -356,  -356,   342,  2669,  2698,  2727,  2756,  2785,  2814,
    2843,   531,   651,   771,   891,  1011,  1131,   410,   746,   466,
     560,   680,   800,   865,   920,   598,   610,     3,  -356,  -356,
    -356,  -356,   848,   888,  -356,   896,  -356,   902,   873,   903,
     922,   924,   929,   937,   938,   940,   949,   956,   957,   960,
     965,   966,   970,   975,   978,   980,   986,   993,   994,   999,
    1012,  1013,  1018,  1019,  -356,  2192,  -356,   919,   512,  -356,
    -356,  -356,  -356,  -356,  2192,  2192,  2192,  2192,  2192,  2192,
    2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,
    2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,   265,
    1022,  2312,  -356,  1024,  1026,  1027,    74,  1040,  1042,  2192,
    1044,  1049,  -356,    30,    45,   632,   752,   393,   412,   414,
      34,   441,   499,   530,   566,   576,   609,    51,   612,   679,
      53,    71,   682,   696,   729,    75,   745,   750,   770,   799,
     802,   112,  -356,   872,  -356,  -356,  -356,  2192,  1057,  1058,
    2192,  2192,    43,  2192,  2192,  -356,    27,  -356,  -356,  2192,
    2192,  2192,  -356,  2192,  2192,  2192,  2192,  2192,  2192,  -356,
    2192,  2192,  -356,  -356,  2192,  2192,  2192,  -356,  2192,  2192,
    2192,  2192,  2192,  -356,   992,  -356,  1063,   945,   946,   148,
     149,  -356,   150,   151,   334,   155,   218,   219,   220,   222,
     223,   224,   225,   227,   229,   230,   231,   232,   233,   264,
     297,   298,   300,   340,  -356,  2192,   982,   983,  1068,  1069,
    1071,  1072,  -356,  2192,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,    49,  2192,  2192,  -356,  -356,  -356,  -356,
      50,  2192,   375,   384,  1112,  1232,  1352,  1472,  -356,  1073,
    1074,  1075,  1003,  -356,  -356,  -356,  1078,  -356,  -356,  1079,
    -356,  1592,  1712,  -356,  1832,  -356,  -356,  1952,  -356,  -356
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -356,  -356,  -356,  -356,  -356,   289,  -356,  -356,  -356,  -356,
    -356,  -356,    -8,  -356,  -356,  -356,  -115,  -111,   476,   640,
     653,   506,   751,   444,   697,   757,  -263,  -356,   -95,  -356,
     991,  -355,  -356,  -356,  1077,    -6,  -356,   824,  -156,  -125,
    1030
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -207
static const short int yytable[] =
{
     171,    25,   203,    29,    31,   355,   195,   196,    34,    37,
     364,   200,    37,   -73,    37,   201,    56,    59,    60,    10,
      61,    11,    97,   190,   192,    67,   269,   281,   282,   288,
     285,     8,   202,   284,   485,   106,    37,   269,    37,    37,
      37,   285,   492,   269,   445,   446,   -73,   521,     3,    39,
      10,    12,    11,   581,   588,    29,     9,   369,   269,   499,
      10,   502,    11,    10,    37,    11,    26,   269,    37,    13,
      37,   269,    63,    99,    27,   100,   473,    40,    14,   503,
     269,   477,    12,   507,    41,   101,   269,   269,   269,    35,
     269,   283,    12,   185,    42,    12,   111,   177,   186,   113,
      13,   117,   181,    43,   286,   319,    98,   188,   269,    14,
      13,   102,   269,    13,   316,   289,    37,   514,    57,    14,
     513,   359,    14,   179,    18,   274,   360,   397,    57,   200,
     200,   478,   429,   331,   332,   318,   320,   119,    19,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   269,
     269,   524,   479,    64,   285,    18,   548,   549,   550,   551,
     366,   367,   370,   554,   368,    18,    25,   371,    18,    19,
      36,   372,    96,   279,   356,    37,   373,   181,   181,   278,
      37,   104,    19,   181,    37,   269,   269,   269,   269,    37,
     318,   318,   269,   105,   318,   108,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   584,   585,   586,   587,   115,   555,   556,   557,   144,
     558,   559,   560,   561,   374,   562,   116,   563,   564,   565,
     566,   567,   601,   602,     4,   604,   112,    37,   607,   154,
     155,     5,   156,   157,   158,   269,   269,   269,   174,   269,
     269,   269,   269,   357,   269,   177,   269,   269,   269,   269,
     269,   181,   568,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      37,   269,  -174,   443,   173,   569,   570,   268,   571,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   269,   269,   190,   269,   552,   175,
     107,  -206,   375,   553,   482,   110,   376,   187,   572,   204,
     443,   443,   516,  -145,  -145,    37,  -145,  -145,  -145,    37,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,   269,   443,  -145,
     377,   183,   318,   590,  -145,   519,   520,   109,   522,   523,
     184,   378,   591,    37,   525,   526,   527,   189,   528,   529,
     530,   531,   532,   533,    37,   534,   535,   244,   245,   536,
     537,   538,   269,   539,   540,   541,   542,   543,   379,   443,
      -2,   269,   380,   158,   230,    10,   231,    11,   232,   233,
     269,    37,   381,   382,   489,    37,   486,   260,   261,  -163,
    -163,  -163,  -163,  -163,  -163,    37,    37,  -163,   205,   269,
     573,   269,  -163,   490,   206,   491,   589,    12,   580,   383,
     384,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   207,    37,    37,   385,    13,  -194,   208,   269,   582,
     583,   386,   493,   209,    14,   210,   318,    37,   387,   443,
     443,   443,   443,  -198,    37,  -166,  -166,  -166,  -166,  -166,
    -166,    37,    15,  -166,  -194,    16,   443,   443,  -166,   443,
     211,  -194,   443,   388,   389,    17,   390,   431,   432,   119,
     391,  -194,   120,   121,   122,   123,    37,    37,   212,    37,
      18,   124,   125,    37,   392,   393,   269,   250,   251,   213,
     494,   126,   250,   251,    19,   252,   253,    37,    37,   127,
     252,   253,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,   128,   269,  -155,   214,
     129,   495,   130,  -155,   433,   434,   215,   131,   132,   133,
     134,   135,   136,   137,   260,   261,   435,   216,   138,  -167,
    -167,  -167,  -167,  -167,  -167,   436,   193,  -167,   437,   197,
     198,   199,  -167,   269,   217,   139,   140,   496,   141,   142,
     143,   144,   218,   269,   438,   439,   145,   497,   146,   147,
     148,   149,   219,   150,   440,   220,   151,   221,   441,   152,
     153,   154,   155,   229,   156,   157,   158,   431,   487,   119,
     268,   395,   120,   121,   122,   123,   269,   269,   396,   269,
     498,   124,   125,   500,   254,   255,   256,   257,   258,   259,
     222,   126,   250,   251,   246,   247,   248,   223,   249,   127,
     252,   253,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,   128,   224,  -156,   225,
     129,   226,   130,  -156,   433,   434,   227,   131,   132,   133,
     134,   135,   136,   137,   347,   348,   435,   228,   138,  -168,
    -168,  -168,  -168,  -168,  -168,   436,   269,  -168,   437,   269,
     501,   271,  -168,   504,   269,   139,   140,   268,   141,   142,
     143,   144,   272,   269,   438,   439,   145,   505,   146,   147,
     148,   149,   273,   150,   440,   275,   151,   276,   441,   152,
     153,   154,   155,   277,   156,   157,   158,   431,   488,   119,
     341,   342,   120,   121,   122,   123,   269,    37,    65,    66,
     506,   124,   125,   260,   261,  -164,  -164,  -164,  -164,  -164,
    -164,   126,   269,  -164,   280,    37,   508,   269,  -164,   127,
     287,   509,   254,   255,   256,   257,   258,   259,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,   128,   269,  -158,   361,
     129,   510,   130,  -158,   433,   434,   290,   131,   132,   133,
     134,   135,   136,   137,   362,   363,   435,   365,   138,   262,
     263,   264,   265,   266,   267,   436,   269,  -170,   437,   269,
     511,   394,  -170,   512,   269,   139,   140,   269,   141,   142,
     143,   144,   269,   399,   438,   439,   145,   269,   146,   147,
     148,   149,   269,   150,   440,   269,   151,   269,   441,   152,
     153,   154,   155,   269,   156,   157,   158,   431,   515,   119,
     269,   269,   120,   121,   122,   123,   333,   334,   335,   336,
     269,   124,   125,   400,   262,   263,   264,   265,   266,   267,
     401,   126,  -171,   337,   338,   339,   340,  -171,   402,   127,
     404,   403,   254,   255,   256,   257,   258,   259,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,   128,   430,  -159,   405,
     129,   406,   130,  -159,   433,   434,   407,   131,   132,   133,
     134,   135,   136,   137,   408,   409,   435,   410,   138,   262,
     263,   264,   265,   266,   267,   436,   411,  -172,   437,   349,
     350,   351,  -172,   412,   413,   139,   140,   414,   141,   142,
     143,   144,   415,   416,   438,   439,   145,   417,   146,   147,
     148,   149,   418,   150,   440,   419,   151,   420,   441,   152,
     153,   154,   155,   421,   156,   157,   158,   431,   544,   119,
     422,   423,   120,   121,   122,   123,   424,   343,   344,   345,
     346,   124,   125,   262,   263,   264,   265,   266,   267,   425,
     426,   126,   352,   353,   354,   427,   428,   472,   474,   127,
     475,   476,   254,   255,   256,   257,   258,   259,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,   128,   480,  -160,   481,
     129,   483,   130,  -160,   433,   434,   484,   131,   132,   133,
     134,   135,   136,   137,   517,   518,   435,   545,   138,   546,
     547,   574,   575,   576,   577,   436,   578,   579,   437,   597,
     598,   596,   599,   600,   603,   139,   140,   172,   141,   142,
     143,   144,    33,   114,   438,   439,   145,   358,   146,   147,
     148,   149,     0,   150,   440,     0,   151,     0,   441,   152,
     153,   154,   155,     0,   156,   157,   158,   431,   592,   119,
       0,     0,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,   254,   255,   256,   257,   258,   259,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,   128,     0,  -161,     0,
     129,     0,   130,  -161,   433,   434,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,   435,     0,   138,     0,
       0,     0,     0,     0,     0,   436,     0,     0,   437,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,     0,     0,   438,   439,   145,     0,   146,   147,
     148,   149,     0,   150,   440,     0,   151,     0,   441,   152,
     153,   154,   155,     0,   156,   157,   158,   431,   593,   119,
       0,     0,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
     129,     0,   130,     0,   433,   434,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,   435,     0,   138,     0,
       0,     0,     0,     0,     0,   436,     0,     0,   437,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,     0,     0,   438,   439,   145,     0,   146,   147,
     148,   149,     0,   150,   440,     0,   151,     0,   441,   152,
     153,   154,   155,     0,   156,   157,   158,   431,   594,   119,
       0,     0,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
     129,     0,   130,     0,   433,   434,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,   435,     0,   138,     0,
       0,     0,     0,     0,     0,   436,     0,     0,   437,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,     0,     0,   438,   439,   145,     0,   146,   147,
     148,   149,     0,   150,   440,     0,   151,     0,   441,   152,
     153,   154,   155,     0,   156,   157,   158,   431,   595,   119,
       0,     0,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
     129,     0,   130,     0,   433,   434,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,   435,     0,   138,     0,
       0,     0,     0,     0,     0,   436,     0,     0,   437,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,     0,     0,   438,   439,   145,     0,   146,   147,
     148,   149,     0,   150,   440,     0,   151,     0,   441,   152,
     153,   154,   155,     0,   156,   157,   158,   431,   605,   119,
       0,     0,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
     129,     0,   130,     0,   433,   434,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,   435,     0,   138,     0,
       0,     0,     0,     0,     0,   436,     0,     0,   437,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,     0,     0,   438,   439,   145,     0,   146,   147,
     148,   149,     0,   150,   440,     0,   151,     0,   441,   152,
     153,   154,   155,     0,   156,   157,   158,   431,   606,   119,
       0,     0,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
     129,     0,   130,     0,   433,   434,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,   435,     0,   138,     0,
       0,     0,     0,     0,     0,   436,     0,     0,   437,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,     0,     0,   438,   439,   145,     0,   146,   147,
     148,   149,     0,   150,   440,     0,   151,     0,   441,   152,
     153,   154,   155,     0,   156,   157,   158,   431,   608,   119,
       0,     0,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
     129,     0,   130,     0,   433,   434,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,   435,     0,   138,     0,
       0,     0,     0,     0,     0,   436,     0,     0,   437,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,     0,     0,   438,   439,   145,     0,   146,   147,
     148,   149,     0,   150,   440,     0,   151,     0,   441,   152,
     153,   154,   155,     0,   156,   157,   158,   431,   609,   119,
       0,     0,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
     129,     0,   130,     0,   433,   434,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,   435,     0,   138,     0,
       0,     0,     0,     0,     0,   436,     0,     0,   437,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,     0,     0,   438,   439,   145,     0,   146,   147,
     148,   149,     0,   150,   440,     0,   151,     0,   441,   152,
     153,   154,   155,     0,   156,   157,   158,   118,     0,   119,
     317,     0,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
     129,     0,   130,     0,     0,     0,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,     0,     0,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,     0,     0,     0,     0,   145,     0,   146,   147,
     148,   149,     0,   150,     0,     0,   151,     0,     0,   152,
     153,   154,   155,     0,   156,   157,   158,   118,     0,   119,
       0,     0,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
     129,     0,   130,     0,     0,     0,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,     0,     0,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,     0,     0,     0,     0,   145,     0,   146,   147,
     148,   149,     0,   150,     0,     0,   151,     0,     0,   152,
     153,   154,   155,     0,   156,   157,   158,   118,     0,   119,
       0,     0,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
     129,     0,   130,     0,     0,     0,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,     0,     0,   138,     0,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,     0,    10,     0,    11,   145,     0,   146,   147,
     148,   149,    12,   150,     0,     0,   151,     0,     0,   152,
     153,   154,   155,     0,   156,   157,   158,     0,     0,     0,
      13,     0,     0,     0,    45,    12,    46,     0,     0,    14,
       0,    10,   270,    11,     0,     0,     0,    47,    48,     0,
       0,     0,     0,    13,     0,    49,     0,    45,     0,    46,
       0,     0,    14,     0,     0,    50,     0,    51,     0,     0,
      47,    48,     0,    12,     0,    52,     0,     0,    49,     0,
      53,     0,     0,     0,     0,    18,     0,     0,    50,     0,
      51,    13,  -194,     0,     0,     0,     0,     0,    52,    54,
      14,     0,     0,    53,     0,     0,     0,     0,    18,  -198,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
    -194,    16,    19,     0,     0,     0,     0,  -194,     0,     0,
       0,    17,     0,     0,     0,     0,     0,  -194,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,  -138,  -138,     0,  -138,  -138,  -138,
      19,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,   244,   245,
    -138,     0,     0,  -142,  -142,  -138,  -142,  -142,  -142,     0,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,   244,   245,  -142,
       0,     0,  -143,  -143,  -142,  -143,  -143,  -143,     0,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,   244,   245,  -143,     0,
       0,  -141,  -141,  -143,  -141,  -141,  -141,     0,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,   244,   245,  -141,     0,     0,
    -146,  -146,  -141,  -146,  -146,  -146,     0,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,     0,     0,  -146,     0,     0,  -147,
    -147,  -146,  -147,  -147,  -147,     0,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,     0,     0,  -147,     0,     0,  -148,  -148,
    -147,  -148,  -148,  -148,     0,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,     0,     0,  -148,     0,     0,  -152,  -152,  -148,
     246,   247,   248,     0,   249,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,     0,     0,  -152,     0,     0,  -153,  -153,  -152,   246,
     247,   248,     0,   249,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
       0,     0,  -153,     0,     0,  -150,  -150,  -153,   246,   247,
     248,     0,   249,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,     0,
       0,  -150,     0,     0,  -151,  -151,  -150,   246,   247,   248,
       0,   249,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,     0,     0,
    -151,     0,     0,     0,     0,  -151,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    37,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned short int yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   865,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   269,   271,     0,   273,   275,   277,     0,
     279,   281,   283,   285,   287,   289,   291,   293,   295,   297,
     299,   301,   303,   305,   307,   309,   311,     0,     0,   313,
       0,     0,     0,     0,   315,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     4,    25,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   765,
     767,   769,   771,   773,   775,     0,     0,   777,     0,     0,
       0,     0,   779,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,   797,   799,   801,   803,   805,
     807,     0,     0,   809,     0,     0,     0,     0,   811,     0,
       0,     0,     0,     0,     0,     0,     0,   857,     0,   859,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,   861,
       0,     0,   621,   623,   625,   627,   629,   631,   633,   635,
     637,   639,   641,   643,   645,   647,     0,     0,   649,     0,
       0,     0,     0,   651,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   813,
     815,   817,   819,   821,   823,     0,     0,   825,     0,     0,
       0,     0,   827,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   863,   949,     0,   951,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   953,
       0,     0,   653,   655,   657,   659,   661,   663,   665,   667,
     669,   671,   673,   675,   677,   679,     0,     0,   681,     0,
       0,     0,     0,   683,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   829,
     831,   833,   835,   837,   839,     0,     0,   841,     0,     0,
       0,     0,   843,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   955,   957,     0,   959,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   781,   783,   785,   787,   789,
     791,     0,     0,   793,     0,    53,     0,     0,   795,   961,
       0,     0,     0,     0,     0,     0,     0,     0,   685,   687,
     689,   691,   693,   695,   697,   699,     0,     0,   701,     0,
       0,     0,     0,   703,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   845,     0,     0,
       0,     0,   847,     0,   247,     0,     0,   249,     0,     0,
       0,     0,   251,     0,     0,     0,     0,   253,     0,     0,
       0,     0,   255,     0,     0,   257,     0,   259,     0,     0,
       0,     0,     0,   261,     0,     0,   963,   965,     0,   967,
     263,   265,     0,     0,     0,     0,     0,     0,     0,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   849,     0,     0,     0,     0,   851,     0,   969,
       0,     0,     0,     0,     0,     0,     0,     0,   705,   707,
     709,   711,   713,   715,   717,   719,     0,     0,   721,     0,
       0,     0,     0,   723,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   853,     0,     0,
       0,     0,   855,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   971,   973,     0,   975,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   977,
       0,     0,     0,     0,     0,     0,     0,     0,   725,   727,
     729,   731,   733,   735,   737,   739,     0,     0,   741,     0,
       0,     0,     0,   743,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   979,   981,     0,   983,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   985,
       0,     0,     0,     0,     0,     0,     0,     0,   745,   747,
     749,   751,   753,   755,   757,   759,     0,     0,   761,     0,
       0,     0,     0,   763,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   987,   989,     0,   991,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   993,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   995,   997,     0,   999,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1001,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1003,  1005,     0,  1007,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1009,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1011,  1013,     0,  1015,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1017,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1019,  1021,     0,  1023,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1025,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1027,  1029,     0,  1031,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1033,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1035,  1037,     0,  1039,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1041,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1043,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   867,     0,   869,
       0,     0,   871,   873,   875,   877,     0,     0,     0,     0,
       0,   879,   881,     0,     0,     0,     0,     0,     0,     0,
       0,   883,     0,     0,     0,     0,     0,     0,     0,   885,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   887,     0,     0,     0,
     889,     0,   891,     0,     0,     0,     0,   893,   895,   897,
     899,   901,   903,   905,     0,     0,     0,     0,   907,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   909,   911,     0,   913,   915,
     917,   919,     0,     0,     0,     0,   921,     0,   923,   925,
     927,   929,     0,   931,     0,     0,   933,     0,     0,   935,
     937,   939,   941,     0,   943,   945,   947,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,    55,    57,     0,    59,    61,    63,
      50,    65,    67,    69,    71,    73,    75,    77,    79,    81,
      83,    85,    87,    89,    91,    93,    95,    97,     0,     0,
      99,     0,     0,   103,   105,   101,   107,   109,   111,     0,
     113,   115,   117,   119,   121,   123,   125,   127,   129,   131,
     133,   135,   137,   139,   141,   143,   145,     0,     0,   147,
       0,     0,   151,   153,   149,   155,   157,   159,     0,   161,
     163,   165,   167,   169,   171,   173,   175,   177,   179,   181,
     183,   185,   187,   189,   191,   193,     0,     0,   195,     0,
       0,   199,   201,   197,   203,   205,   207,     0,   209,   211,
     213,   215,   217,   219,   221,   223,   225,   227,   229,   231,
     233,   235,   237,   239,   241,     0,     0,   243,     0,     0,
     317,   319,   245,   321,   323,   325,     0,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   345,   347,   349,   351,
     353,   355,   357,   359,     0,     0,   361,     0,     0,   365,
     367,   363,   369,   371,   373,     0,   375,   377,   379,   381,
     383,   385,   387,   389,   391,   393,   395,   397,   399,   401,
     403,   405,   407,     0,     0,   409,     0,     0,   413,   415,
     411,   417,   419,   421,     0,   423,   425,   427,   429,   431,
     433,   435,   437,   439,   441,   443,   445,   447,   449,   451,
     453,   455,     0,     0,   457,     0,     0,   461,   463,   459,
       0,     0,     0,     0,     0,   465,   467,   469,   471,   473,
     475,   477,   479,   481,   483,   485,   487,   489,   491,   493,
     495,     0,     0,   497,     0,     0,   501,   503,   499,     0,
       0,     0,     0,     0,   505,   507,   509,   511,   513,   515,
     517,   519,   521,   523,   525,   527,   529,   531,   533,   535,
       0,     0,   537,     0,     0,   541,   543,   539,     0,     0,
       0,     0,     0,   545,   547,   549,   551,   553,   555,   557,
     559,   561,   563,   565,   567,   569,   571,   573,   575,     0,
       0,   577,     0,     0,   581,   583,   579,     0,     0,     0,
       0,     0,   585,   587,   589,   591,   593,   595,   597,   599,
     601,   603,   605,   607,   609,   611,   613,   615,     0,     0,
     617,     0,     0,     0,     0,   619,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   198,   200,     0,   198,   200,     0,   198,   200,     0,
     198,   200,     0,   198,   200,     0,   200,     0,   194,   198,
     200,     0,   198,   200,     0,    98,     0,    98,     0,   198,
     200,     0,   198,   200,     0,   198,   200,     0,   198,   200,
       0,   198,   200,     0,   200,     0,   194,   198,   200,     0,
     198,   200,     0,    70,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   176,     0,   177,
       0,   178,     0,   179,     0,   180,     0,   181,     0,   182,
       0,   183,     0,   184,     0,   185,     0,   186,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   149,     0,   149,     0,   149,     0,   149,     0,   149,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   154,     0,   154,     0,   154,     0,   154,     0,   154,
       0,   157,     0,   157,     0,   157,     0,   157,     0,   157,
       0,   157,     0,   157,     0,   157,     0,   157,     0,   157,
       0,   157,     0,   157,     0,   157,     0,   157,     0,   157,
       0,   157,     0,   157,     0,   157,     0,   157,     0,   157,
       0,   157,     0,   157,     0,   157,     0,   157,     0,   157,
       0,   157,     0,   157,     0,   157,     0,   157,     0,   157,
       0,   157,     0,   157,     0,   162,     0,   162,     0,   162,
       0,   162,     0,   162,     0,   162,     0,   162,     0,   162,
       0,   162,     0,   162,     0,   162,     0,   162,     0,   162,
       0,   162,     0,   162,     0,   162,     0,   162,     0,   162,
       0,   162,     0,   162,     0,   162,     0,   162,     0,   162,
       0,   162,     0,   162,     0,   162,     0,   162,     0,   162,
       0,   162,     0,   162,     0,   162,     0,   162,     0,   162,
       0,   162,     0,   162,     0,   162,     0,   162,     0,   162,
       0,   162,     0,   162,     0,   165,     0,   165,     0,   165,
       0,   165,     0,   165,     0,   165,     0,   165,     0,   165,
       0,   165,     0,   165,     0,   165,     0,   165,     0,   165,
       0,   165,     0,   165,     0,   165,     0,   169,     0,   169,
       0,   169,     0,   169,     0,   169,     0,   169,     0,   169,
       0,   169,     0,   169,     0,   169,     0,   169,     0,   169,
       0,   169,     0,   169,     0,   169,     0,   169,     0,   169,
       0,   169,     0,   169,     0,   169,     0,   169,     0,   169,
       0,   169,     0,   169,     0,   173,     0,   173,     0,   173,
       0,   173,     0,   173,     0,   173,     0,   200,     0,   200,
       0,   200,     0,   200,     0,   175,     0,   192,     0,   192,
       0,   192,     0,   192,     0,   192,     0,   192,     0,   192,
       0,   192,     0,   192,     0,   192,     0,   192,     0,   192,
       0,   192,     0,   192,     0,   192,     0,   192,     0,   192,
       0,   192,     0,   192,     0,   192,     0,   192,     0,   192,
       0,   192,     0,   192,     0,   192,     0,   192,     0,   192,
       0,   192,     0,   192,     0,   192,     0,   192,     0,   192,
       0,   192,     0,   192,     0,   192,     0,   192,     0,   192,
       0,   192,     0,   192,     0,   192,     0,   192,     0,   200,
       0,   200,     0,   200,     0,   200,     0,   200,     0,   200,
       0,   200,     0,   200,     0,   200,     0,   200,     0,   200,
       0,   200,     0,   200,     0,   200,     0,   200,     0,   200,
       0,   200,     0,   200,     0,   200,     0,   200,     0,   200,
       0,   200,     0,   200,     0,   200,     0,   200,     0,   200,
       0,   200,     0,   200,     0,   200,     0,   200,     0,   200,
       0,   200,     0,   200,     0,   200,     0,   200,     0,   200,
       0,   200,     0,   200,     0,   200,     0,   200,     0,   200,
       0,   200,     0,   200,     0,   200,     0,   200,     0,   200,
       0,   200,     0,   200,     0
};

static const short int yycheck[] =
{
      95,     7,   127,    11,    12,   268,   121,   122,    16,    37,
       4,   126,    37,     8,    37,   126,    24,    25,     4,     5,
      28,     7,    38,   118,   119,    33,    37,   183,   184,     8,
      41,   124,   127,   189,     4,    43,    37,    37,    37,    37,
      37,    41,     8,    37,   399,   400,    41,     4,     0,    56,
       5,    37,     7,     4,     4,    63,   124,    24,    37,     8,
       5,     8,     7,     5,    37,     7,     4,    37,    37,    55,
      37,    37,    41,    75,     4,    77,   431,    84,    64,     8,
      37,     7,    37,     8,    91,    87,    37,    37,    37,   124,
      37,   186,    37,     4,   101,    37,   124,   105,     9,   124,
      55,   124,   108,   110,   115,   230,   122,   115,    37,    64,
      55,   113,    37,    55,   229,   115,    37,   472,    73,    64,
       8,   277,    64,   124,   110,   124,   124,   124,    73,   244,
     245,    57,   395,   244,   245,   230,   231,     7,   124,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,    37,
      37,   124,    78,     8,    41,   110,     8,     8,     8,     8,
     285,   286,    24,     8,   289,   110,   172,    24,   110,   124,
       4,    24,     5,   181,   269,    37,    24,   183,   184,   124,
      37,    23,   124,   189,    37,    37,    37,    37,    37,    37,
     285,   286,    37,    23,   289,     7,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   576,   577,   578,   579,    35,     8,     8,     8,    99,
       8,     8,     8,     8,    24,     8,    38,     8,     8,     8,
       8,     8,   597,   598,    81,   600,     6,    37,   603,   119,
     120,    88,   122,   123,   124,    37,    37,    37,     7,    37,
      37,    37,    37,   271,    37,   273,    37,    37,    37,    37,
      37,   277,     8,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    37,    37,   398,    38,     8,     8,    42,     8,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,    37,    37,   431,    37,     4,   122,
      51,     8,    24,     9,   439,    56,    24,     4,     8,    23,
     445,   446,   477,    11,    12,    37,    14,    15,    16,    37,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    37,   473,    37,
      24,     7,   477,     8,    42,   480,   481,   124,   483,   484,
       7,    24,     8,    37,   489,   490,   491,     7,   493,   494,
     495,   496,   497,   498,    37,   500,   501,    35,    36,   504,
     505,   506,    37,   508,   509,   510,   511,   512,    24,   514,
       0,    37,    24,   124,     7,     5,     9,     7,    11,    12,
      37,    37,    24,    24,    41,    37,   444,    27,    28,    29,
      30,    31,    32,    33,    34,    37,    37,    37,    23,    37,
     545,    37,    42,    41,    23,    41,   581,    37,   553,    24,
      24,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    23,    37,    37,    24,    55,    56,    23,    37,   574,
     575,    24,    41,    23,    64,    23,   581,    37,    24,   584,
     585,   586,   587,    73,    37,    29,    30,    31,    32,    33,
      34,    37,    82,    37,    84,    85,   601,   602,    42,   604,
      23,    91,   607,    24,    24,    95,    24,     5,     6,     7,
      24,   101,    10,    11,    12,    13,    37,    37,    23,    37,
     110,    19,    20,    37,    24,    24,    37,    11,    12,    23,
      41,    29,    11,    12,   124,    19,    20,    37,    37,    37,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    54,    37,    37,    23,
      58,    41,    60,    42,    62,    63,    23,    65,    66,    67,
      68,    69,    70,    71,    27,    28,    74,    23,    76,    29,
      30,    31,    32,    33,    34,    83,   120,    37,    86,   123,
     124,   125,    42,    37,    23,    93,    94,    41,    96,    97,
      98,    99,    23,    37,   102,   103,   104,    41,   106,   107,
     108,   109,    23,   111,   112,    23,   114,    23,   116,   117,
     118,   119,   120,    40,   122,   123,   124,     5,     6,     7,
      42,    43,    10,    11,    12,    13,    37,    37,    38,    37,
      41,    19,    20,    41,    21,    22,    23,    24,    25,    26,
      23,    29,    11,    12,    14,    15,    16,    23,    18,    37,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    54,    23,    37,    23,
      58,    23,    60,    42,    62,    63,    23,    65,    66,    67,
      68,    69,    70,    71,   260,   261,    74,    23,    76,    29,
      30,    31,    32,    33,    34,    83,    37,    37,    86,    37,
      41,    73,    42,    41,    37,    93,    94,    42,    96,    97,
      98,    99,    24,    37,   102,   103,   104,    41,   106,   107,
     108,   109,    41,   111,   112,    24,   114,     4,   116,   117,
     118,   119,   120,    41,   122,   123,   124,     5,     6,     7,
     254,   255,    10,    11,    12,    13,    37,    37,    38,    39,
      41,    19,    20,    27,    28,    29,    30,    31,    32,    33,
      34,    29,    37,    37,     8,    37,    41,    37,    42,    37,
       6,    41,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    54,    37,    37,     5,
      58,    41,    60,    42,    62,    63,    38,    65,    66,    67,
      68,    69,    70,    71,     8,     8,    74,     8,    76,    29,
      30,    31,    32,    33,    34,    83,    37,    37,    86,    37,
      41,     8,    42,    41,    37,    93,    94,    37,    96,    97,
      98,    99,    37,     5,   102,   103,   104,    37,   106,   107,
     108,   109,    37,   111,   112,    37,   114,    37,   116,   117,
     118,   119,   120,    37,   122,   123,   124,     5,     6,     7,
      37,    37,    10,    11,    12,    13,   246,   247,   248,   249,
      37,    19,    20,     5,    29,    30,    31,    32,    33,    34,
       4,    29,    37,   250,   251,   252,   253,    42,     6,    37,
       7,    38,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    54,     8,    37,     7,
      58,     7,    60,    42,    62,    63,     7,    65,    66,    67,
      68,    69,    70,    71,     7,     7,    74,     7,    76,    29,
      30,    31,    32,    33,    34,    83,     7,    37,    86,   262,
     263,   264,    42,     7,     7,    93,    94,     7,    96,    97,
      98,    99,     7,     7,   102,   103,   104,     7,   106,   107,
     108,   109,     7,   111,   112,     7,   114,     7,   116,   117,
     118,   119,   120,     7,   122,   123,   124,     5,     6,     7,
       7,     7,    10,    11,    12,    13,     7,   256,   257,   258,
     259,    19,    20,    29,    30,    31,    32,    33,    34,     7,
       7,    29,   265,   266,   267,     7,     7,     5,     4,    37,
       4,     4,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    54,     7,    37,     7,
      58,     7,    60,    42,    62,    63,     7,    65,    66,    67,
      68,    69,    70,    71,     7,     7,    74,     4,    76,   124,
     124,    89,    89,     5,     5,    83,     5,     5,    86,     5,
       5,     8,    79,     5,     5,    93,    94,    96,    96,    97,
      98,    99,    15,    63,   102,   103,   104,   273,   106,   107,
     108,   109,    -1,   111,   112,    -1,   114,    -1,   116,   117,
     118,   119,   120,    -1,   122,   123,   124,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    54,    -1,    37,    -1,
      58,    -1,    60,    42,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,   102,   103,   104,    -1,   106,   107,
     108,   109,    -1,   111,   112,    -1,   114,    -1,   116,   117,
     118,   119,   120,    -1,   122,   123,   124,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    60,    -1,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,   102,   103,   104,    -1,   106,   107,
     108,   109,    -1,   111,   112,    -1,   114,    -1,   116,   117,
     118,   119,   120,    -1,   122,   123,   124,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    60,    -1,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,   102,   103,   104,    -1,   106,   107,
     108,   109,    -1,   111,   112,    -1,   114,    -1,   116,   117,
     118,   119,   120,    -1,   122,   123,   124,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    60,    -1,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,   102,   103,   104,    -1,   106,   107,
     108,   109,    -1,   111,   112,    -1,   114,    -1,   116,   117,
     118,   119,   120,    -1,   122,   123,   124,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    60,    -1,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,   102,   103,   104,    -1,   106,   107,
     108,   109,    -1,   111,   112,    -1,   114,    -1,   116,   117,
     118,   119,   120,    -1,   122,   123,   124,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    60,    -1,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,   102,   103,   104,    -1,   106,   107,
     108,   109,    -1,   111,   112,    -1,   114,    -1,   116,   117,
     118,   119,   120,    -1,   122,   123,   124,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    60,    -1,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,   102,   103,   104,    -1,   106,   107,
     108,   109,    -1,   111,   112,    -1,   114,    -1,   116,   117,
     118,   119,   120,    -1,   122,   123,   124,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    60,    -1,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,   102,   103,   104,    -1,   106,   107,
     108,   109,    -1,   111,   112,    -1,   114,    -1,   116,   117,
     118,   119,   120,    -1,   122,   123,   124,     5,    -1,     7,
       8,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,    -1,    -1,   104,    -1,   106,   107,
     108,   109,    -1,   111,    -1,    -1,   114,    -1,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,     5,    -1,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,    -1,    -1,   104,    -1,   106,   107,
     108,   109,    -1,   111,    -1,    -1,   114,    -1,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,     5,    -1,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    76,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,     5,    -1,     7,   104,    -1,   106,   107,
     108,   109,    37,   111,    -1,    -1,   114,    -1,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    59,    37,    61,    -1,    -1,    64,
      -1,     5,     6,     7,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    55,    -1,    80,    -1,    59,    -1,    61,
      -1,    -1,    64,    -1,    -1,    90,    -1,    92,    -1,    -1,
      72,    73,    -1,    37,    -1,   100,    -1,    -1,    80,    -1,
     105,    -1,    -1,    -1,    -1,   110,    -1,    -1,    90,    -1,
      92,    55,    56,    -1,    -1,    -1,    -1,    -1,   100,   124,
      64,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      84,    85,   124,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    -1,    14,    15,    16,
     124,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    11,    12,    42,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    11,    12,    42,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    11,    12,    42,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      11,    12,    42,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    37,    -1,    -1,    11,
      12,    42,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    37,    -1,    -1,    11,    12,
      42,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    37,    -1,    -1,    11,    12,    42,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    37,    -1,    -1,    11,    12,    42,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    37,    -1,    -1,    11,    12,    42,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    37,    -1,    -1,    11,    12,    42,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,   126,   154,     0,    81,    88,   127,   155,   124,   124,
       5,     7,    37,    55,    64,    82,    85,    95,   110,   124,
     128,   131,   137,   157,   159,   160,     4,     4,   161,   137,
     165,   137,   129,   159,   137,   124,     4,    37,   158,    56,
      84,    91,   101,   110,   135,    59,    61,    72,    73,    80,
      90,    92,   100,   105,   124,   132,   137,    73,   134,   137,
       4,   137,   138,    41,     8,    38,    39,   137,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,   130,     5,    38,   122,    75,
      77,    87,   113,   133,    23,    23,   137,   130,     7,   124,
     130,   124,     6,   124,   165,    35,    38,   124,     5,     7,
      10,    11,    12,    13,    19,    20,    29,    37,    54,    58,
      60,    65,    66,    67,    68,    69,    70,    71,    76,    93,
      94,    96,    97,    98,    99,   104,   106,   107,   108,   109,
     111,   114,   117,   118,   119,   120,   122,   123,   124,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   155,    38,     7,   122,   136,   137,   162,   124,
     139,   160,   163,     7,     7,     4,     9,     4,   137,     7,
     153,   164,   153,   143,   153,   141,   141,   143,   143,   143,
     141,   142,   153,   164,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    40,
       7,     9,    11,    12,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    35,    36,    14,    15,    16,    18,
      11,    12,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    42,    37,
       6,    73,    24,    41,   124,    24,     4,    41,   124,   137,
       8,   163,   163,   153,   163,    41,   115,     6,     8,   115,
      38,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   141,     8,   153,   164,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   142,   142,   144,   144,   144,   144,   145,   145,   145,
     145,   146,   146,   147,   147,   147,   147,   148,   148,   149,
     149,   149,   150,   150,   150,   151,   153,   137,   162,   163,
     124,     5,     8,     8,     4,     8,   164,   164,   164,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,     8,    43,    38,   124,   156,     5,
       5,     4,     6,    38,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,   151,
       8,     5,     6,    62,    63,    74,    83,    86,   102,   103,
     112,   116,   140,   153,   160,   156,   156,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,     5,   156,     4,     4,     4,     7,    57,    78,
       7,     7,   153,     7,     7,     4,   137,     6,     6,    41,
      41,    41,     8,    41,    41,    41,    41,    41,    41,     8,
      41,    41,     8,     8,    41,    41,    41,     8,    41,    41,
      41,    41,    41,     8,   156,     6,   164,     7,     7,   153,
     153,     4,   153,   153,   124,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,     6,     4,   124,   124,     8,     8,
       8,     8,     4,     9,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,   153,    89,    89,     5,     5,     5,     5,
     153,     4,   153,   153,   156,   156,   156,   156,     4,   164,
       8,     8,     6,     6,     6,     6,     8,     5,     5,    79,
       5,   156,   156,     5,   156,     6,     6,   156,     6,     6
};


/* Prevent warning if -Wmissing-prototypes.  */
int yyparse (void);

/* Error token number */
#define YYTERROR 1

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */


#define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))							\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))

/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# define YY_LOCATION_PRINT(File, Loc)			\
    fprintf (File, "%d.%d-%d.%d",			\
	     (Loc).first_line, (Loc).first_column,	\
	     (Loc).last_line,  (Loc).last_column)
#endif


#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#define YYLEX yylex ()

YYSTYPE yylval;

YYLTYPE yylloc;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)							     \
   do { YYRESULTTAG yyflag = YYE; if (yyflag != yyok) return yyflag; }	     \
   while (YYID (0))

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			    \
do {									    \
  if (yydebug)								    \
    {									    \
      YYFPRINTF (stderr, "%s ", Title);					    \
      yy_symbol_print (stderr, Type,					    \
		       Value, Location);  \
      YYFPRINTF (stderr, "\n");						    \
    }									    \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
# if (! defined __cplusplus \
      || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	  && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL))
#  define YYSTACKEXPANDABLE 1
# else
#  define YYSTACKEXPANDABLE 0
# endif
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyexpandGLRStack (Yystack);			\
  } while (YYID (0))
#else
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyMemoryExhausted (Yystack);			\
  } while (YYID (0))
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef short int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the first token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != NULL)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  yyGLRState* s;
  int i;
  s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
      YYASSERT (s->yyresolved);
      yyvsp[i].yystate.yyresolved = yytrue;
      yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
/*ARGSUSED*/ static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
	      YYSTYPE* yyvalp,
	      YYLTYPE* YYOPTIONAL_LOC (yylocp),
	      yyGLRStack* yystackp
	      )
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  int yylow;
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)						     \
  return yyerror (YY_("syntax error: cannot back up")),     \
	 yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;

  switch (yyn)
    {
        case 2:

/* Line 936 of glr.c  */
#line 1196 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).code_) = new Main((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listtldeclaration_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.listdeclaration_)); YY_RESULT_Code_= ((*yyvalp).code_); ;}
    break;

  case 3:

/* Line 936 of glr.c  */
#line 1198 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).tldeclaration_) = new DImport((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 4:

/* Line 936 of glr.c  */
#line 1199 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).tldeclaration_) = new DExpose((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 5:

/* Line 936 of glr.c  */
#line 1201 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).declaration_) = new DNamespace((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.listdeclaration_));  ;}
    break;

  case 6:

/* Line 936 of glr.c  */
#line 1202 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.listparameterdeclaration_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.listparameterdeclaration_)->end()) ;((*yyvalp).declaration_) = new DDefaultFunction((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.listfunctionspecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (8))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.listparameterdeclaration_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 7:

/* Line 936 of glr.c  */
#line 1203 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.listparameterdeclaration_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.listparameterdeclaration_)->end()) ;((*yyvalp).declaration_) = new DFunction((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.listfunctionspecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.listparameterdeclaration_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 8:

/* Line 936 of glr.c  */
#line 1204 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.listparameterdeclaration_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.listparameterdeclaration_)->end()) ;((*yyvalp).declaration_) = new DOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.listfunctionspecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.operatorname_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.listparameterdeclaration_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 9:

/* Line 936 of glr.c  */
#line 1205 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).declaration_) = new DOperatorInfo((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.operatortrait_));  ;}
    break;

  case 10:

/* Line 936 of glr.c  */
#line 1206 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).declaration_) = new DTypeDecl((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.listtypespecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 11:

/* Line 936 of glr.c  */
#line 1207 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).declaration_) = new DTypeConv((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (11))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (11))].yystate.yysemantics.yysval.listconversionspecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (11))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (11))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((10) - (11))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 12:

/* Line 936 of glr.c  */
#line 1208 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).declaration_) = new DExtern((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.prototype_));  ;}
    break;

  case 13:

/* Line 936 of glr.c  */
#line 1209 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).declaration_) = new DIVariable((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.listvariablespecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 14:

/* Line 936 of glr.c  */
#line 1210 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).declaration_) = new DVariable((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.listvariablespecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 15:

/* Line 936 of glr.c  */
#line 1212 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.listparameterdeclaration_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.listparameterdeclaration_)->end()) ;((*yyvalp).prototype_) = new PFunction((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.listfunctionspecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.listparameterdeclaration_));  ;}
    break;

  case 16:

/* Line 936 of glr.c  */
#line 1214 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONLnot();  ;}
    break;

  case 17:

/* Line 936 of glr.c  */
#line 1215 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONPreInc();  ;}
    break;

  case 18:

/* Line 936 of glr.c  */
#line 1216 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONPreDec();  ;}
    break;

  case 19:

/* Line 936 of glr.c  */
#line 1217 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONBnot();  ;}
    break;

  case 20:

/* Line 936 of glr.c  */
#line 1218 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONMul();  ;}
    break;

  case 21:

/* Line 936 of glr.c  */
#line 1219 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONExp();  ;}
    break;

  case 22:

/* Line 936 of glr.c  */
#line 1220 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONDiv();  ;}
    break;

  case 23:

/* Line 936 of glr.c  */
#line 1221 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONRDiv();  ;}
    break;

  case 24:

/* Line 936 of glr.c  */
#line 1222 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONMod();  ;}
    break;

  case 25:

/* Line 936 of glr.c  */
#line 1223 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONAdd();  ;}
    break;

  case 26:

/* Line 936 of glr.c  */
#line 1224 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONSub();  ;}
    break;

  case 27:

/* Line 936 of glr.c  */
#line 1225 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONLSh();  ;}
    break;

  case 28:

/* Line 936 of glr.c  */
#line 1226 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONRSh();  ;}
    break;

  case 29:

/* Line 936 of glr.c  */
#line 1227 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONLT();  ;}
    break;

  case 30:

/* Line 936 of glr.c  */
#line 1228 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONGT();  ;}
    break;

  case 31:

/* Line 936 of glr.c  */
#line 1229 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONLE();  ;}
    break;

  case 32:

/* Line 936 of glr.c  */
#line 1230 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONGE();  ;}
    break;

  case 33:

/* Line 936 of glr.c  */
#line 1231 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONE();  ;}
    break;

  case 34:

/* Line 936 of glr.c  */
#line 1232 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONNE();  ;}
    break;

  case 35:

/* Line 936 of glr.c  */
#line 1233 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONBand();  ;}
    break;

  case 36:

/* Line 936 of glr.c  */
#line 1234 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONBor();  ;}
    break;

  case 37:

/* Line 936 of glr.c  */
#line 1235 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONBxor();  ;}
    break;

  case 38:

/* Line 936 of glr.c  */
#line 1236 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONLand();  ;}
    break;

  case 39:

/* Line 936 of glr.c  */
#line 1237 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONLor();  ;}
    break;

  case 40:

/* Line 936 of glr.c  */
#line 1238 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONLxor();  ;}
    break;

  case 41:

/* Line 936 of glr.c  */
#line 1239 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONRight();  ;}
    break;

  case 42:

/* Line 936 of glr.c  */
#line 1240 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatorname_) = new ONLeft();  ;}
    break;

  case 43:

/* Line 936 of glr.c  */
#line 1242 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).operatortrait_) = new OTIdentity((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.operatorname_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 44:

/* Line 936 of glr.c  */
#line 1244 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).functionspecifier_) = new FSEntryPoint();  ;}
    break;

  case 45:

/* Line 936 of glr.c  */
#line 1245 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).functionspecifier_) = new FSPure();  ;}
    break;

  case 46:

/* Line 936 of glr.c  */
#line 1246 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).functionspecifier_) = new FSConst();  ;}
    break;

  case 47:

/* Line 936 of glr.c  */
#line 1247 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).functionspecifier_) = new FSInline();  ;}
    break;

  case 48:

/* Line 936 of glr.c  */
#line 1248 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).functionspecifier_) = new FSAssociative();  ;}
    break;

  case 49:

/* Line 936 of glr.c  */
#line 1249 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).functionspecifier_) = new FSCommutative();  ;}
    break;

  case 50:

/* Line 936 of glr.c  */
#line 1250 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).functionspecifier_) = new FSAntiCommutative();  ;}
    break;

  case 51:

/* Line 936 of glr.c  */
#line 1251 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).functionspecifier_) = new FSInverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.operatorname_));  ;}
    break;

  case 52:

/* Line 936 of glr.c  */
#line 1252 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).functionspecifier_) = new FSSelfInverse();  ;}
    break;

  case 53:

/* Line 936 of glr.c  */
#line 1254 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).conversionspecifier_) = new CSUp();  ;}
    break;

  case 54:

/* Line 936 of glr.c  */
#line 1255 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).conversionspecifier_) = new CSDown();  ;}
    break;

  case 55:

/* Line 936 of glr.c  */
#line 1256 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).conversionspecifier_) = new CSImplicit();  ;}
    break;

  case 56:

/* Line 936 of glr.c  */
#line 1258 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).variablespecifier_) = new VSConst();  ;}
    break;

  case 57:

/* Line 936 of glr.c  */
#line 1260 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).typespecifier_) = new TSAlign((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.int_));  ;}
    break;

  case 58:

/* Line 936 of glr.c  */
#line 1261 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.listgenericparam_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.listgenericparam_)->end()) ;((*yyvalp).typespecifier_) = new TSGeneric((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.listgenericparam_));  ;}
    break;

  case 59:

/* Line 936 of glr.c  */
#line 1262 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).typespecifier_) = new TSInteger();  ;}
    break;

  case 60:

/* Line 936 of glr.c  */
#line 1263 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).typespecifier_) = new TSReal();  ;}
    break;

  case 61:

/* Line 936 of glr.c  */
#line 1265 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).genericparam_) = new TSGParam((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 62:

/* Line 936 of glr.c  */
#line 1267 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).type_) = new TAddress();  ;}
    break;

  case 63:

/* Line 936 of glr.c  */
#line 1268 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).type_) = new TByte();  ;}
    break;

  case 64:

/* Line 936 of glr.c  */
#line 1269 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).type_) = new TCustom((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 65:

/* Line 936 of glr.c  */
#line 1270 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).type_) = new TFixedArray((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.int_));  ;}
    break;

  case 66:

/* Line 936 of glr.c  */
#line 1271 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).type_) = new TGenericArray((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.type_));  ;}
    break;

  case 67:

/* Line 936 of glr.c  */
#line 1272 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).type_) = new TList((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.type_));  ;}
    break;

  case 68:

/* Line 936 of glr.c  */
#line 1273 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).type_) = new TInfiniteList((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.type_));  ;}
    break;

  case 69:

/* Line 936 of glr.c  */
#line 1274 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).type_) = new TStruct((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.liststructmemberdeclaration_));  ;}
    break;

  case 70:

/* Line 936 of glr.c  */
#line 1275 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.listtype_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.listtype_)->end()) ;((*yyvalp).type_) = new TFunction((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.listtype_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.type_));  ;}
    break;

  case 71:

/* Line 936 of glr.c  */
#line 1276 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).type_) = new TType();  ;}
    break;

  case 72:

/* Line 936 of glr.c  */
#line 1278 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).structmemberdeclaration_) = new SMDMemberDeclaration((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 73:

/* Line 936 of glr.c  */
#line 1280 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).parameterdeclaration_) = new PDAutoParameter((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listvariablespecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 74:

/* Line 936 of glr.c  */
#line 1281 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).parameterdeclaration_) = new PDTypedParameter((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.listvariablespecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 75:

/* Line 936 of glr.c  */
#line 1283 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SReturn((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 76:

/* Line 936 of glr.c  */
#line 1284 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SExpression((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 77:

/* Line 936 of glr.c  */
#line 1285 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 78:

/* Line 936 of glr.c  */
#line 1286 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SIf((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 79:

/* Line 936 of glr.c  */
#line 1287 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SIfElse((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (11))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (11))].yystate.yysemantics.yysval.liststatement_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((10) - (11))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 80:

/* Line 936 of glr.c  */
#line 1288 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SLoop((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 81:

/* Line 936 of glr.c  */
#line 1289 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SWhile((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 82:

/* Line 936 of glr.c  */
#line 1290 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SUntil((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 83:

/* Line 936 of glr.c  */
#line 1291 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (11))].yystate.yysemantics.yysval.listexpression_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (11))].yystate.yysemantics.yysval.listexpression_)->end()) ; std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (11))].yystate.yysemantics.yysval.listexpression_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (11))].yystate.yysemantics.yysval.listexpression_)->end()) ;((*yyvalp).statement_) = new SFor((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (11))].yystate.yysemantics.yysval.listexpression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (11))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (11))].yystate.yysemantics.yysval.listexpression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((10) - (11))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 84:

/* Line 936 of glr.c  */
#line 1292 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SForEach((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (10))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (10))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (10))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 85:

/* Line 936 of glr.c  */
#line 1293 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SForAll((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (10))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (10))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (10))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 86:

/* Line 936 of glr.c  */
#line 1294 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SBreak();  ;}
    break;

  case 87:

/* Line 936 of glr.c  */
#line 1295 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SContinue();  ;}
    break;

  case 88:

/* Line 936 of glr.c  */
#line 1296 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SBreakpoint();  ;}
    break;

  case 89:

/* Line 936 of glr.c  */
#line 1297 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SIVariable((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.listvariablespecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 90:

/* Line 936 of glr.c  */
#line 1298 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).statement_) = new SVariable((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.listvariablespecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 91:

/* Line 936 of glr.c  */
#line 1300 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).rvalue_) = new RVIdent((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 92:

/* Line 936 of glr.c  */
#line 1301 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).rvalue_) = new RVQualified((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 93:

/* Line 936 of glr.c  */
#line 1303 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EDouble((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.double_));  ;}
    break;

  case 94:

/* Line 936 of glr.c  */
#line 1304 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EInteger((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.int_));  ;}
    break;

  case 95:

/* Line 936 of glr.c  */
#line 1305 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 96:

/* Line 936 of glr.c  */
#line 1306 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EChar((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 97:

/* Line 936 of glr.c  */
#line 1307 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EPi();  ;}
    break;

  case 98:

/* Line 936 of glr.c  */
#line 1308 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ERValue((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 99:

/* Line 936 of glr.c  */
#line 1309 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 100:

/* Line 936 of glr.c  */
#line 1311 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.listexpression_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.listexpression_)->end()) ;((*yyvalp).expression_) = new EArray((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.listexpression_));  ;}
    break;

  case 101:

/* Line 936 of glr.c  */
#line 1312 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.listexpression_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.listexpression_)->end()) ;((*yyvalp).expression_) = new EList((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.listexpression_));  ;}
    break;

  case 102:

/* Line 936 of glr.c  */
#line 1313 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.listexpression_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.listexpression_)->end()) ;((*yyvalp).expression_) = new EAComp((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.listexpression_));  ;}
    break;

  case 103:

/* Line 936 of glr.c  */
#line 1314 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.listexpression_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.listexpression_)->end()) ;((*yyvalp).expression_) = new ELComp((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.listexpression_));  ;}
    break;

  case 104:

/* Line 936 of glr.c  */
#line 1315 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIndex((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 105:

/* Line 936 of glr.c  */
#line 1316 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ESimpleCall((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 106:

/* Line 936 of glr.c  */
#line 1317 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  std::reverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.listexpression_)->begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.listexpression_)->end()) ;((*yyvalp).expression_) = new ECall((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.listexpression_));  ;}
    break;

  case 107:

/* Line 936 of glr.c  */
#line 1318 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EPostInc((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 108:

/* Line 936 of glr.c  */
#line 1319 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EPostDec((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 109:

/* Line 936 of glr.c  */
#line 1320 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EAddress((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 110:

/* Line 936 of glr.c  */
#line 1321 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ELeft((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 111:

/* Line 936 of glr.c  */
#line 1322 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ERight((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 112:

/* Line 936 of glr.c  */
#line 1323 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinSExt((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 113:

/* Line 936 of glr.c  */
#line 1324 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinZExt((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 114:

/* Line 936 of glr.c  */
#line 1325 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinCast((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 115:

/* Line 936 of glr.c  */
#line 1326 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinConvert((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 116:

/* Line 936 of glr.c  */
#line 1327 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinAddI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 117:

/* Line 936 of glr.c  */
#line 1328 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinSubI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 118:

/* Line 936 of glr.c  */
#line 1329 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinMulI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 119:

/* Line 936 of glr.c  */
#line 1330 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinUdivI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 120:

/* Line 936 of glr.c  */
#line 1331 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinSdivI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 121:

/* Line 936 of glr.c  */
#line 1332 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinUremI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 122:

/* Line 936 of glr.c  */
#line 1333 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinSremI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 123:

/* Line 936 of glr.c  */
#line 1334 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinAndI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 124:

/* Line 936 of glr.c  */
#line 1335 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinOrI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 125:

/* Line 936 of glr.c  */
#line 1336 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinXorI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 126:

/* Line 936 of glr.c  */
#line 1337 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinShlI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 127:

/* Line 936 of glr.c  */
#line 1338 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinLshrI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 128:

/* Line 936 of glr.c  */
#line 1339 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinAshrI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 129:

/* Line 936 of glr.c  */
#line 1340 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinNotI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 130:

/* Line 936 of glr.c  */
#line 1341 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinNegI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 131:

/* Line 936 of glr.c  */
#line 1342 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinCEqI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 132:

/* Line 936 of glr.c  */
#line 1343 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinCNeI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 133:

/* Line 936 of glr.c  */
#line 1344 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinCLtI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 134:

/* Line 936 of glr.c  */
#line 1345 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinCGtI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 135:

/* Line 936 of glr.c  */
#line 1346 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinCLeI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 136:

/* Line 936 of glr.c  */
#line 1347 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EIntrinCGeI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 137:

/* Line 936 of glr.c  */
#line 1348 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 138:

/* Line 936 of glr.c  */
#line 1350 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ELnot((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 139:

/* Line 936 of glr.c  */
#line 1351 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EPreInc((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 140:

/* Line 936 of glr.c  */
#line 1352 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EPreDec((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 141:

/* Line 936 of glr.c  */
#line 1353 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ENeg((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 142:

/* Line 936 of glr.c  */
#line 1354 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EBnot((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 143:

/* Line 936 of glr.c  */
#line 1355 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EPos((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 144:

/* Line 936 of glr.c  */
#line 1356 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 145:

/* Line 936 of glr.c  */
#line 1358 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EMul((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 146:

/* Line 936 of glr.c  */
#line 1359 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EMulA((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 147:

/* Line 936 of glr.c  */
#line 1360 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EDiv((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 148:

/* Line 936 of glr.c  */
#line 1361 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EMod((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 149:

/* Line 936 of glr.c  */
#line 1362 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 150:

/* Line 936 of glr.c  */
#line 1364 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EAdd((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 151:

/* Line 936 of glr.c  */
#line 1365 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ESub((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 152:

/* Line 936 of glr.c  */
#line 1366 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EAddA((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 153:

/* Line 936 of glr.c  */
#line 1367 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ESubA((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 154:

/* Line 936 of glr.c  */
#line 1368 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 155:

/* Line 936 of glr.c  */
#line 1370 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ELSh((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 156:

/* Line 936 of glr.c  */
#line 1371 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ERSh((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 157:

/* Line 936 of glr.c  */
#line 1372 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 158:

/* Line 936 of glr.c  */
#line 1374 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ELT((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 159:

/* Line 936 of glr.c  */
#line 1375 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EGT((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 160:

/* Line 936 of glr.c  */
#line 1376 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ELE((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 161:

/* Line 936 of glr.c  */
#line 1377 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EGE((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 162:

/* Line 936 of glr.c  */
#line 1378 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 163:

/* Line 936 of glr.c  */
#line 1380 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EE((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 164:

/* Line 936 of glr.c  */
#line 1381 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ENE((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 165:

/* Line 936 of glr.c  */
#line 1382 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 166:

/* Line 936 of glr.c  */
#line 1384 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EBand((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 167:

/* Line 936 of glr.c  */
#line 1385 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EBor((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 168:

/* Line 936 of glr.c  */
#line 1386 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EBxor((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 169:

/* Line 936 of glr.c  */
#line 1387 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 170:

/* Line 936 of glr.c  */
#line 1389 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ELand((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 171:

/* Line 936 of glr.c  */
#line 1390 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ELor((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 172:

/* Line 936 of glr.c  */
#line 1391 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ELxor((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 173:

/* Line 936 of glr.c  */
#line 1392 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 174:

/* Line 936 of glr.c  */
#line 1394 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EConditional((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 175:

/* Line 936 of glr.c  */
#line 1395 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 176:

/* Line 936 of glr.c  */
#line 1397 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 177:

/* Line 936 of glr.c  */
#line 1398 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EAddAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 178:

/* Line 936 of glr.c  */
#line 1399 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ESubAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 179:

/* Line 936 of glr.c  */
#line 1400 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EMulAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 180:

/* Line 936 of glr.c  */
#line 1401 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EDivAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 181:

/* Line 936 of glr.c  */
#line 1402 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EModAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 182:

/* Line 936 of glr.c  */
#line 1403 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EAndAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 183:

/* Line 936 of glr.c  */
#line 1404 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EOrAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 184:

/* Line 936 of glr.c  */
#line 1405 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new EXorAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 185:

/* Line 936 of glr.c  */
#line 1406 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ELShAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 186:

/* Line 936 of glr.c  */
#line 1407 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = new ERShAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 187:

/* Line 936 of glr.c  */
#line 1408 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 188:

/* Line 936 of glr.c  */
#line 1410 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).listtldeclaration_) = new ListTLDeclaration();  ;}
    break;

  case 189:

/* Line 936 of glr.c  */
#line 1411 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listtldeclaration_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tldeclaration_)) ; ((*yyvalp).listtldeclaration_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listtldeclaration_) ;  ;}
    break;

  case 190:

/* Line 936 of glr.c  */
#line 1413 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).listdeclaration_) = new ListDeclaration();  ;}
    break;

  case 191:

/* Line 936 of glr.c  */
#line 1414 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listdeclaration_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.declaration_)) ; ((*yyvalp).listdeclaration_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listdeclaration_) ;  ;}
    break;

  case 192:

/* Line 936 of glr.c  */
#line 1416 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).liststatement_) = new ListStatement();  ;}
    break;

  case 193:

/* Line 936 of glr.c  */
#line 1417 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.liststatement_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.statement_)) ; ((*yyvalp).liststatement_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.liststatement_) ;  ;}
    break;

  case 194:

/* Line 936 of glr.c  */
#line 1419 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).listtypespecifier_) = new ListTypeSpecifier();  ;}
    break;

  case 195:

/* Line 936 of glr.c  */
#line 1420 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listtypespecifier_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.typespecifier_)) ; ((*yyvalp).listtypespecifier_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listtypespecifier_) ;  ;}
    break;

  case 196:

/* Line 936 of glr.c  */
#line 1422 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).listconversionspecifier_) = new ListConversionSpecifier();  ;}
    break;

  case 197:

/* Line 936 of glr.c  */
#line 1423 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listconversionspecifier_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.conversionspecifier_)) ; ((*yyvalp).listconversionspecifier_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listconversionspecifier_) ;  ;}
    break;

  case 198:

/* Line 936 of glr.c  */
#line 1425 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).listfunctionspecifier_) = new ListFunctionSpecifier();  ;}
    break;

  case 199:

/* Line 936 of glr.c  */
#line 1426 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listfunctionspecifier_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.functionspecifier_)) ; ((*yyvalp).listfunctionspecifier_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listfunctionspecifier_) ;  ;}
    break;

  case 200:

/* Line 936 of glr.c  */
#line 1428 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).listvariablespecifier_) = new ListVariableSpecifier();  ;}
    break;

  case 201:

/* Line 936 of glr.c  */
#line 1429 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listvariablespecifier_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.variablespecifier_)) ; ((*yyvalp).listvariablespecifier_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listvariablespecifier_) ;  ;}
    break;

  case 202:

/* Line 936 of glr.c  */
#line 1431 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).liststructmemberdeclaration_) = new ListStructMemberDeclaration();  ;}
    break;

  case 203:

/* Line 936 of glr.c  */
#line 1432 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.liststructmemberdeclaration_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.structmemberdeclaration_)) ; ((*yyvalp).liststructmemberdeclaration_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.liststructmemberdeclaration_) ;  ;}
    break;

  case 204:

/* Line 936 of glr.c  */
#line 1434 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).listgenericparam_) = new ListGenericParam() ; ((*yyvalp).listgenericparam_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.genericparam_));  ;}
    break;

  case 205:

/* Line 936 of glr.c  */
#line 1435 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.listgenericparam_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.genericparam_)) ; ((*yyvalp).listgenericparam_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.listgenericparam_) ;  ;}
    break;

  case 206:

/* Line 936 of glr.c  */
#line 1437 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).listparameterdeclaration_) = new ListParameterDeclaration();  ;}
    break;

  case 207:

/* Line 936 of glr.c  */
#line 1438 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).listparameterdeclaration_) = new ListParameterDeclaration() ; ((*yyvalp).listparameterdeclaration_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.parameterdeclaration_));  ;}
    break;

  case 208:

/* Line 936 of glr.c  */
#line 1439 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.listparameterdeclaration_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.parameterdeclaration_)) ; ((*yyvalp).listparameterdeclaration_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.listparameterdeclaration_) ;  ;}
    break;

  case 209:

/* Line 936 of glr.c  */
#line 1441 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).listexpression_) = new ListExpression() ; ((*yyvalp).listexpression_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 210:

/* Line 936 of glr.c  */
#line 1442 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.listexpression_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_)) ; ((*yyvalp).listexpression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.listexpression_) ;  ;}
    break;

  case 211:

/* Line 936 of glr.c  */
#line 1444 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).listtype_) = new ListType();  ;}
    break;

  case 212:

/* Line 936 of glr.c  */
#line 1445 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  ((*yyvalp).listtype_) = new ListType() ; ((*yyvalp).listtype_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.type_));  ;}
    break;

  case 213:

/* Line 936 of glr.c  */
#line 1446 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    {  (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.listtype_)->push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.type_)) ; ((*yyvalp).listtype_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.listtype_) ;  ;}
    break;



/* Line 936 of glr.c  */
#line 4737 "parse.cpp"
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


/*ARGSUSED*/ static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {
      
      default: break;
    }
}

			      /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
		&yys->yysemantics.yysval, &yys->yyloc);
  else
    {
#if YYDEBUG
      if (yydebug)
	{
	  if (yys->yysemantics.yyfirstVal)
	    YYFPRINTF (stderr, "%s unresolved ", yymsg);
	  else
	    YYFPRINTF (stderr, "%s incomplete ", yymsg);
	  yy_symbol_print (stderr, yystos[yys->yylrState],
			   NULL, &yys->yyloc);
	  YYFPRINTF (stderr, "\n");
	}
#endif

      if (yys->yysemantics.yyfirstVal)
	{
	  yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
	  yyGLRState *yyrh;
	  int yyn;
	  for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
	       yyn > 0;
	       yyrh = yyrh->yypred, yyn -= 1)
	    yydestroyGLRState (yymsg, yyrh);
	}
    }
}

/** Left-hand-side symbol for rule #RULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yyis_pact_ninf(yystate) \
  ((yystate) == YYPACT_NINF)

/** True iff LR state STATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yyis_pact_ninf (yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yyis_table_ninf(yytable_value) \
  YYID (0)

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *CONFLICTS to a pointer into yyconfl to 0-terminated list of
 *  conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
		int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yyis_table_ninf (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr;
  yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

				/* GLRStates */

/** Return a fresh GLRStackItem.  Callers should call
 * YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 * headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  RULENUM on the semantic values in RHS to the list of
 *  alternative actions for STATE.  Assumes that RHS comes from
 *  stack #K of *STACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
		     yyGLRState* rhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = rhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

				/* GLRStacks */

/** Initialize SET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize STACK to a single empty stack, with total maximum
 *  capacity for all stacks of SIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If STACK is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yysize, yynewSize;
  size_t yyn;
  yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
	{
	  yyGLRState* yys0 = &yyp0->yystate;
	  yyGLRState* yys1 = &yyp1->yystate;
	  if (yys0->yypred != NULL)
	    yys1->yypred =
	      YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
	  if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != NULL)
	    yys1->yysemantics.yyfirstVal =
	      YYRELOC(yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
	}
      else
	{
	  yySemanticOption* yyv0 = &yyp0->yyoption;
	  yySemanticOption* yyv1 = &yyp1->yyoption;
	  if (yyv0->yystate != NULL)
	    yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
	  if (yyv0->yynext != NULL)
	    yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
	}
    }
  if (yystackp->yysplitPoint != NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
				 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != NULL)
      yystackp->yytops.yystates[yyn] =
	YYRELOC (yystackp->yyitems, yynewItems,
		 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that S is a GLRState somewhere on STACK, update the
 *  splitpoint of STACK, if needed, so that it is at least as deep as
 *  S.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = NULL;
}

/** Undelete the last stack that was marked as deleted.  Can only be
    done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == NULL)
	{
	  if (yyi == yyj)
	    {
	      YYDPRINTF ((stderr, "Removing dead stacks.\n"));
	    }
	  yystackp->yytops.yysize -= 1;
	}
      else
	{
	  yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
	  /* In the current implementation, it's unnecessary to copy
	     yystackp->yytops.yylookaheadNeeds[yyi] since, after
	     yyremoveDeletes returns, the parser immediately either enters
	     deterministic operation or shifts a token.  However, it doesn't
	     hurt, and the code might evolve to need it.  */
	  yystackp->yytops.yylookaheadNeeds[yyj] =
	    yystackp->yytops.yylookaheadNeeds[yyi];
	  if (yyj != yyi)
	    {
	      YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
			  (unsigned long int) yyi, (unsigned long int) yyj));
	    }
	  yyj += 1;
	}
      yyi += 1;
    }
}

/** Shift to a new state on stack #K of STACK, corresponding to LR state
 * LRSTATE, at input position POSN, with (resolved) semantic value SVAL.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
	    size_t yyposn,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #K of YYSTACK, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
		 size_t yyposn, yyGLRState* rhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, rhs, yyrule);
}

/** Pop the symbols consumed by reduction #RULE from the top of stack
 *  #K of STACK, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *VALP to the resulting value,
 *  and *LOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* rhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, rhs,
			   yyvalp, yylocp, yystackp);
    }
  else
    {
      /* At present, doAction is never called in nondeterministic
       * mode, so this branch is never taken.  It is here in
       * anticipation of a future feature that will allow immediate
       * evaluation of selected actions in nondeterministic mode.  */
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
	= yystackp->yytops.yystates[yyk];
      if (yynrhs == 0)
	/* Set default location.  */
	yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp);
    }
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)		\
do {					\
  if (yydebug)				\
    yy_reduce_print Args;		\
} while (YYID (0))

/*----------------------------------------------------------.
| Report that the RULE is going to be reduced on stack #K.  |
`----------------------------------------------------------*/

/*ARGSUSED*/ static inline void
yy_reduce_print (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  yyGLRStackItem* yyvsp = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
  int yylow = 1;
  int yyi;
  YYUSE (yyvalp);
  YYUSE (yylocp);
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
	     (unsigned long int) yyk, yyrule - 1,
	     (unsigned long int) yyrline[yyrule]);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yysemantics.yysval)
		       , &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)		       );
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop items off stack #K of STACK according to grammar rule RULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with RULE and store its value with the
 *  newly pushed state, if FORCEEVAL or if STACK is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #K from
 *  the STACK.  In this case, the (necessarily deferred) semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	     yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == NULL)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YY_REDUCE_PRINT ((yystackp, yyk, yyrule, &yysval, &yyloc));
      YYCHK (yydoAction (yystackp, yyk, yyrule, &yysval,
			 &yyloc));
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
		  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
				 yylhsNonterm (yyrule)),
		  yyposn, &yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
	   0 < yyn; yyn -= 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
		  "Reduced stack %lu by rule #%d; action deferred.  Now in state %d.\n",
		  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
	if (yyi != yyk && yystackp->yytops.yystates[yyi] != NULL)
	  {
	    yyGLRState* yyp, *yysplit = yystackp->yysplitPoint;
	    yyp = yystackp->yytops.yystates[yyi];
	    while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
	      {
		if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
		  {
		    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
		    yymarkStackDeleted (yystackp, yyk);
		    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
				(unsigned long int) yyk,
				(unsigned long int) yyi));
		    return yyok;
		  }
		yyp = yyp->yypred;
	      }
	  }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = NULL;

      if (yystackp->yytops.yycapacity
	  > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
	(yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
				  (yystackp->yytops.yycapacity
				   * sizeof yynewStates[0]));
      if (yynewStates == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
	(yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
			     (yystackp->yytops.yycapacity
			      * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff Y0 and Y1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
	   yyn = yyrhsLength (yyy0->yyrule);
	   yyn > 0;
	   yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
	if (yys0->yyposn != yys1->yyposn)
	  return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (Y0,Y1), destructively merge the
 *  alternative semantic values for the RHS-symbols of Y1 and Y0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
	break;
      else if (yys0->yyresolved)
	{
	  yys1->yyresolved = yytrue;
	  yys1->yysemantics.yysval = yys0->yysemantics.yysval;
	}
      else if (yys1->yyresolved)
	{
	  yys0->yyresolved = yytrue;
	  yys0->yysemantics.yysval = yys1->yysemantics.yysval;
	}
      else
	{
	  yySemanticOption** yyz0p;
	  yySemanticOption* yyz1;
	  yyz0p = &yys0->yysemantics.yyfirstVal;
	  yyz1 = yys1->yysemantics.yyfirstVal;
	  while (YYID (yytrue))
	    {
	      if (yyz1 == *yyz0p || yyz1 == NULL)
		break;
	      else if (*yyz0p == NULL)
		{
		  *yyz0p = yyz1;
		  break;
		}
	      else if (*yyz0p < yyz1)
		{
		  yySemanticOption* yyz = *yyz0p;
		  *yyz0p = yyz1;
		  yyz1 = yyz1->yynext;
		  (*yyz0p)->yynext = yyz;
		}
	      yyz0p = &(*yyz0p)->yynext;
	    }
	  yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
	}
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
	return 0;
      else
	return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
				   yyGLRStack* yystackp);


/** Resolve the previous N states starting at and including state S.  If result
 *  != yyok, some states may have been left unresolved possibly with empty
 *  semantic option chains.  Regardless of whether result = yyok, each state
 *  has been left with consistent data so that yydestroyGLRState can be invoked
 *  if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
		 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
	YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of OPT, perform its user action, and return
 *  the semantic value and location.  Regardless of whether result = yyok, all
 *  RHS states have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs;
  int yychar_current;
  YYSTYPE yylval_current;
  YYLTYPE yylloc_current;
  YYRESULTTAG yyflag;

  yynrhs = yyrhsLength (yyopt->yyrule);
  yyflag = yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
	yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  yychar_current = yychar;
  yylval_current = yylval;
  yylloc_current = yylloc;
  yychar = yyopt->yyrawchar;
  yylval = yyopt->yyval;
  yylloc = yyopt->yyloc;
  yyflag = yyuserAction (yyopt->yyrule, yynrhs,
			   yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp);
  yychar = yychar_current;
  yylval = yylval_current;
  yylloc = yylloc_current;
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
	       (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
	{
	  if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
	    YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]));
	  else
	    YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]),
		       (unsigned long int) (yystates[yyi - 1]->yyposn + 1),
		       (unsigned long int) yystates[yyi]->yyposn);
	}
      else
	yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

/*ARGSUSED*/ static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
		   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Starting at and including state S1, resolve the location for each of the
 *  previous N1 states that is unresolved.  The first semantic option of a state
 *  is always chosen.  */
static void
yyresolveLocations (yyGLRState* yys1, int yyn1,
		    yyGLRStack *yystackp)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp);
      if (!yys1->yyresolved)
	{
	  yySemanticOption *yyoption;
	  yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
	  int yynrhs;
	  int yychar_current;
	  YYSTYPE yylval_current;
	  YYLTYPE yylloc_current;
	  yyoption = yys1->yysemantics.yyfirstVal;
	  YYASSERT (yyoption != NULL);
	  yynrhs = yyrhsLength (yyoption->yyrule);
	  if (yynrhs > 0)
	    {
	      yyGLRState *yys;
	      int yyn;
	      yyresolveLocations (yyoption->yystate, yynrhs,
				  yystackp);
	      for (yys = yyoption->yystate, yyn = yynrhs;
		   yyn > 0;
		   yys = yys->yypred, yyn -= 1)
		yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
	    }
	  else
	    {
	      /* Both yyresolveAction and yyresolveLocations traverse the GSS
		 in reverse rightmost order.  It is only necessary to invoke
		 yyresolveLocations on a subforest for which yyresolveAction
		 would have been invoked next had an ambiguity not been
		 detected.  Thus the location of the previous state (but not
		 necessarily the previous state itself) is guaranteed to be
		 resolved already.  */
	      yyGLRState *yyprevious = yyoption->yystate;
	      yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
	    }
	  yychar_current = yychar;
	  yylval_current = yylval;
	  yylloc_current = yylloc;
	  yychar = yyoption->yyrawchar;
	  yylval = yyoption->yyval;
	  yylloc = yyoption->yyloc;
	  YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
	  yychar = yychar_current;
	  yylval = yylval_current;
	  yylloc = yylloc_current;
	}
    }
}

/** Resolve the ambiguity represented in state S, perform the indicated
 *  actions, and set the semantic value of S.  If result != yyok, the chain of
 *  semantic options in S has been cleared instead or it has been left
 *  unmodified except that redundant options may have been removed.  Regardless
 *  of whether result = yyok, S has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest;
  yySemanticOption** yypp;
  yybool yymerge;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  yybest = yyoptionList;
  yymerge = yyfalse;
  for (yypp = &yyoptionList->yynext; *yypp != NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
	{
	  yymergeOptionSets (yybest, yyp);
	  *yypp = yyp->yynext;
	}
      else
	{
	  switch (yypreference (yybest, yyp))
	    {
	    case 0:
	      yyresolveLocations (yys, 1, yystackp);
	      return yyreportAmbiguity (yybest, yyp);
	      break;
	    case 1:
	      yymerge = yytrue;
	      break;
	    case 2:
	      break;
	    case 3:
	      yybest = yyp;
	      yymerge = yyfalse;
	      break;
	    default:
	      /* This cannot happen so it is not worth a YYASSERT (yyfalse),
		 but some compilers complain if the default case is
		 omitted.  */
	      break;
	    }
	  yypp = &yyp->yynext;
	}
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval,
				yylocp);
      if (yyflag == yyok)
	for (yyp = yybest->yynext; yyp != NULL; yyp = yyp->yynext)
	  {
	    if (yyprec == yydprec[yyp->yyrule])
	      {
		YYSTYPE yysval_other;
		YYLTYPE yydummy;
		yyflag = yyresolveAction (yyp, yystackp, &yysval_other,
					  &yydummy);
		if (yyflag != yyok)
		  {
		    yydestruct ("Cleanup: discarding incompletely merged value for",
				yystos[yys->yylrState],
				&yysval, yylocp);
		    break;
		  }
		yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
	      }
	  }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
	   yys != yystackp->yysplitPoint;
	   yys = yys->yypred, yyn += 1)
	continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
			     ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;

  while (yyr != NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
		   size_t yyposn)
{
  int yyaction;
  const short int* yyconflicts;
  yyRuleNum yyrule;

  while (yystackp->yytops.yystates[yyk] != NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
		  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
	{
	  yyrule = yydefaultAction (yystate);
	  if (yyrule == 0)
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      return yyok;
	    }
	  YYCHK (yyglrReduce (yystackp, yyk, yyrule, yyfalse));
	}
      else
	{
	  yySymbol yytoken;
	  yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
	  if (yychar == YYEMPTY)
	    {
	      YYDPRINTF ((stderr, "Reading a token: "));
	      yychar = YYLEX;
	    }

	  if (yychar <= YYEOF)
	    {
	      yychar = yytoken = YYEOF;
	      YYDPRINTF ((stderr, "Now at end of input.\n"));
	    }
	  else
	    {
	      yytoken = YYTRANSLATE (yychar);
	      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	    }

	  yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

	  while (*yyconflicts != 0)
	    {
	      size_t yynewStack = yysplitStack (yystackp, yyk);
	      YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
			  (unsigned long int) yynewStack,
			  (unsigned long int) yyk));
	      YYCHK (yyglrReduce (yystackp, yynewStack,
				  *yyconflicts, yyfalse));
	      YYCHK (yyprocessOneStack (yystackp, yynewStack,
					yyposn));
	      yyconflicts += 1;
	    }

	  if (yyisShiftAction (yyaction))
	    break;
	  else if (yyisErrorAction (yyaction))
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      break;
	    }
	  else
	    YYCHK (yyglrReduce (yystackp, yyk, -yyaction,
				yyfalse));
	}
    }
  return yyok;
}

/*ARGSUSED*/ static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 0)
    {
#if YYERROR_VERBOSE
      int yyn;
      yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      if (YYPACT_NINF < yyn && yyn <= YYLAST)
	{
	  yySymbol yytoken = YYTRANSLATE (yychar);
	  size_t yysize0 = yytnamerr (NULL, yytokenName (yytoken));
	  size_t yysize = yysize0;
	  size_t yysize1;
	  yybool yysize_overflow = yyfalse;
	  char* yymsg = NULL;
	  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn + 1;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytokenName (yytoken);
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytokenName (yyx);
		yysize1 = yysize + yytnamerr (NULL, yytokenName (yyx));
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + strlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow)
	    yymsg = (char *) YYMALLOC (yysize);

	  if (yymsg)
	    {
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYFREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      yyMemoryExhausted (yystackp);
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
      yynerrs += 1;
    }
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
/*ARGSUSED*/ static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (YYID (yytrue))
      {
	yySymbol yytoken;
	if (yychar == YYEOF)
	  yyFail (yystackp, NULL);
	if (yychar != YYEMPTY)
	  {
	    /* We throw away the lookahead, but the error range
	       of the shifted error token must take it into account.  */
	    yyGLRState *yys = yystackp->yytops.yystates[0];
	    yyGLRStackItem yyerror_range[3];
	    yyerror_range[1].yystate.yyloc = yys->yyloc;
	    yyerror_range[2].yystate.yyloc = yylloc;
	    YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
	    yytoken = YYTRANSLATE (yychar);
	    yydestruct ("Error: discarding",
			yytoken, &yylval, &yylloc);
	  }
	YYDPRINTF ((stderr, "Reading a token: "));
	yychar = YYLEX;
	if (yychar <= YYEOF)
	  {
	    yychar = yytoken = YYEOF;
	    YYDPRINTF ((stderr, "Now at end of input.\n"));
	  }
	else
	  {
	    yytoken = YYTRANSLATE (yychar);
	    YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	  }
	yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
	if (yyis_pact_ninf (yyj))
	  return;
	yyj += yytoken;
	if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
	  {
	    if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
	      return;
	  }
	else if (yytable[yyj] != 0 && ! yyis_table_ninf (yytable[yyj]))
	  return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yyis_pact_ninf (yyj))
	{
	  yyj += YYTERROR;
	  if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
	      && yyisShiftAction (yytable[yyj]))
	    {
	      /* Shift the error token having adjusted its location.  */
	      YYLTYPE yyerrloc;
	      yystackp->yyerror_range[2].yystate.yyloc = yylloc;
	      YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
	      YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
			       &yylval, &yyerrloc);
	      yyglrShift (yystackp, 0, yytable[yyj],
			  yys->yyposn, &yylval, &yyerrloc);
	      yys = yystackp->yytops.yystates[0];
	      break;
	    }
	}
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      if (yys->yypred != NULL)
	yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == NULL)
    yyFail (yystackp, NULL);
}

#define YYCHK1(YYE)							     \
  do {									     \
    switch (YYE) {							     \
    case yyok:								     \
      break;								     \
    case yyabort:							     \
      goto yyabortlab;							     \
    case yyaccept:							     \
      goto yyacceptlab;							     \
    case yyerr:								     \
      goto yyuser_error;						     \
    default:								     \
      goto yybuglab;							     \
    }									     \
  } while (YYID (0))


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

#if YYLTYPE_IS_TRIVIAL
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif


  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (YYID (yytrue))
    {
      /* For efficiency, we have two loops, the first of which is
	 specialized to deterministic operation (single stack, no
	 potential ambiguity).  */
      /* Standard mode */
      while (YYID (yytrue))
	{
	  yyRuleNum yyrule;
	  int yyaction;
	  const short int* yyconflicts;

	  yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
	  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
	  if (yystate == YYFINAL)
	    goto yyacceptlab;
	  if (yyisDefaultedState (yystate))
	    {
	      yyrule = yydefaultAction (yystate);
	      if (yyrule == 0)
		{
		  yystack.yyerror_range[1].yystate.yyloc = yylloc;
		  yyreportSyntaxError (&yystack);
		  goto yyuser_error;
		}
	      YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
	    }
	  else
	    {
	      yySymbol yytoken;
	      if (yychar == YYEMPTY)
		{
		  YYDPRINTF ((stderr, "Reading a token: "));
		  yychar = YYLEX;
		}

	      if (yychar <= YYEOF)
		{
		  yychar = yytoken = YYEOF;
		  YYDPRINTF ((stderr, "Now at end of input.\n"));
		}
	      else
		{
		  yytoken = YYTRANSLATE (yychar);
		  YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
		}

	      yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
	      if (*yyconflicts != 0)
		break;
	      if (yyisShiftAction (yyaction))
		{
		  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
		  yychar = YYEMPTY;
		  yyposn += 1;
		  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
		  if (0 < yystack.yyerrState)
		    yystack.yyerrState -= 1;
		}
	      else if (yyisErrorAction (yyaction))
		{
		  yystack.yyerror_range[1].yystate.yyloc = yylloc;
		  yyreportSyntaxError (&yystack);
		  goto yyuser_error;
		}
	      else
		YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
	    }
	}

      while (YYID (yytrue))
	{
	  yySymbol yytoken_to_shift;
	  size_t yys;

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

	  /* yyprocessOneStack returns one of three things:

	      - An error flag.  If the caller is yyprocessOneStack, it
		immediately returns as well.  When the caller is finally
		yyparse, it jumps to an error label via YYCHK1.

	      - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
		(&yystack, yys), which sets the top state of yys to NULL.  Thus,
		yyparse's following invocation of yyremoveDeletes will remove
		the stack.

	      - yyok, when ready to shift a token.

	     Except in the first case, yyparse will invoke yyremoveDeletes and
	     then shift the next token onto all remaining stacks.  This
	     synchronization of the shift (that is, after all preceding
	     reductions on all stacks) helps prevent double destructor calls
	     on yylval in the event of memory exhaustion.  */

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
	  yyremoveDeletes (&yystack);
	  if (yystack.yytops.yysize == 0)
	    {
	      yyundeleteLastStack (&yystack);
	      if (yystack.yytops.yysize == 0)
		yyFail (&yystack, YY_("syntax error"));
	      YYCHK1 (yyresolveStack (&yystack));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yystack.yyerror_range[1].yystate.yyloc = yylloc;
	      yyreportSyntaxError (&yystack);
	      goto yyuser_error;
	    }

	  /* If any yyglrShift call fails, it will fail after shifting.  Thus,
	     a copy of yylval will already be on stack 0 in the event of a
	     failure in the following loop.  Thus, yychar is set to YYEMPTY
	     before the loop to make sure the user destructor for yylval isn't
	     called twice.  */
	  yytoken_to_shift = YYTRANSLATE (yychar);
	  yychar = YYEMPTY;
	  yyposn += 1;
	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    {
	      int yyaction;
	      const short int* yyconflicts;
	      yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
	      yygetLRActions (yystate, yytoken_to_shift, &yyaction,
			      &yyconflicts);
	      /* Note that yyconflicts were handled by yyprocessOneStack.  */
	      YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
	      YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
	      yyglrShift (&yystack, yys, yyaction, yyposn,
			  &yylval, &yylloc);
	      YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
			  (unsigned long int) yys,
			  yystack.yytops.yystates[yys]->yylrState));
	    }

	  if (yystack.yytops.yysize == 1)
	    {
	      YYCHK1 (yyresolveStack (&yystack));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yycompressStack (&yystack);
	      break;
	    }
	}
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
		YYTRANSLATE (yychar),
		&yylval, &yylloc);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
	{
	  size_t yysize = yystack.yytops.yysize;
	  size_t yyk;
	  for (yyk = 0; yyk < yysize; yyk += 1)
	    if (yystates[yyk])
	      {
		while (yystates[yyk])
		  {
		    yyGLRState *yys = yystates[yyk];
		    yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
		    if (yys->yypred != NULL)
		      yydestroyGLRState ("Cleanup: popping", yys);
		    yystates[yyk] = yys->yypred;
		    yystack.yynextFree -= 1;
		    yystack.yyspaceLeft += 1;
		  }
		break;
	      }
	}
      yyfreeGLRStack (&yystack);
    }

  /* Make sure YYID is used.  */
  return YYID (yyresult);
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void yypstack (yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (yyGLRStack* yystackp) __attribute__ ((__unused__));

static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == NULL)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)							     \
    ((YYX) == NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
	{
	  YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
		     yyp->yystate.yyresolved, yyp->yystate.yylrState,
		     (unsigned long int) yyp->yystate.yyposn,
		     (long int) YYINDEX (yyp->yystate.yypred));
	  if (! yyp->yystate.yyresolved)
	    YYFPRINTF (stderr, ", firstVal: %ld",
		       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
	}
      else
	{
	  YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
		     yyp->yyoption.yyrule - 1,
		     (long int) YYINDEX (yyp->yyoption.yystate),
		     (long int) YYINDEX (yyp->yyoption.yynext));
	}
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
	       (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif



