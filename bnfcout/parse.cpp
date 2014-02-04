
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Absyn.H"
int yyparse(void);
int yylex(void);
int yy_mylinenumber;
int initialize_lexer(FILE * inp);
int yywrap(void)
{
  return 1;
}
extern void yyerror(const char *str);void yyerror_fucko(const char *str)
{
  std::cout << "line " << yy_mylinenumber + 1 << std::endl ;
  fprintf(stderr,"error: %s\n",str);
}


Code* YY_RESULT_Code_ = 0;
Code* pCode(FILE *inp)
{
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

TLDeclaration* YY_RESULT_TLDeclaration_ = 0;
TLDeclaration* pTLDeclaration(FILE *inp)
{
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

Declaration* YY_RESULT_Declaration_ = 0;
Declaration* pDeclaration(FILE *inp)
{
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

Prototype* YY_RESULT_Prototype_ = 0;
Prototype* pPrototype(FILE *inp)
{
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

OperatorName* YY_RESULT_OperatorName_ = 0;
OperatorName* pOperatorName(FILE *inp)
{
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

OperatorTrait* YY_RESULT_OperatorTrait_ = 0;
OperatorTrait* pOperatorTrait(FILE *inp)
{
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

FunctionSpecifier* YY_RESULT_FunctionSpecifier_ = 0;
FunctionSpecifier* pFunctionSpecifier(FILE *inp)
{
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

VariableSpecifier* YY_RESULT_VariableSpecifier_ = 0;
VariableSpecifier* pVariableSpecifier(FILE *inp)
{
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

TypeSpecifier* YY_RESULT_TypeSpecifier_ = 0;
TypeSpecifier* pTypeSpecifier(FILE *inp)
{
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

Type* YY_RESULT_Type_ = 0;
Type* pType(FILE *inp)
{
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

StructMemberDeclaration* YY_RESULT_StructMemberDeclaration_ = 0;
StructMemberDeclaration* pStructMemberDeclaration(FILE *inp)
{
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

ParameterDeclaration* YY_RESULT_ParameterDeclaration_ = 0;
ParameterDeclaration* pParameterDeclaration(FILE *inp)
{
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

Statement* YY_RESULT_Statement_ = 0;
Statement* pStatement(FILE *inp)
{
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

RValue* YY_RESULT_RValue_ = 0;
RValue* pRValue(FILE *inp)
{
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

Expression* YY_RESULT_Expression_ = 0;
Expression* pExpression(FILE *inp)
{
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

ListTLDeclaration* YY_RESULT_ListTLDeclaration_ = 0;
ListTLDeclaration* pListTLDeclaration(FILE *inp)
{
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

ListDeclaration* YY_RESULT_ListDeclaration_ = 0;
ListDeclaration* pListDeclaration(FILE *inp)
{
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

ListStatement* YY_RESULT_ListStatement_ = 0;
ListStatement* pListStatement(FILE *inp)
{
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

ListTypeSpecifier* YY_RESULT_ListTypeSpecifier_ = 0;
ListTypeSpecifier* pListTypeSpecifier(FILE *inp)
{
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

ListFunctionSpecifier* YY_RESULT_ListFunctionSpecifier_ = 0;
ListFunctionSpecifier* pListFunctionSpecifier(FILE *inp)
{
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

ListVariableSpecifier* YY_RESULT_ListVariableSpecifier_ = 0;
ListVariableSpecifier* pListVariableSpecifier(FILE *inp)
{
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

ListStructMemberDeclaration* YY_RESULT_ListStructMemberDeclaration_ = 0;
ListStructMemberDeclaration* pListStructMemberDeclaration(FILE *inp)
{
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

ListParameterDeclaration* YY_RESULT_ListParameterDeclaration_ = 0;
ListParameterDeclaration* pListParameterDeclaration(FILE *inp)
{
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

ListExpression* YY_RESULT_ListExpression_ = 0;
ListExpression* pListExpression(FILE *inp)
{
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


ListTLDeclaration* reverseListTLDeclaration(ListTLDeclaration *l)
{
  ListTLDeclaration *prev = 0;
  ListTLDeclaration *tmp = 0;
  while (l)
  {
    tmp = l->listtldeclaration_;
    l->listtldeclaration_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListDeclaration* reverseListDeclaration(ListDeclaration *l)
{
  ListDeclaration *prev = 0;
  ListDeclaration *tmp = 0;
  while (l)
  {
    tmp = l->listdeclaration_;
    l->listdeclaration_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListStatement* reverseListStatement(ListStatement *l)
{
  ListStatement *prev = 0;
  ListStatement *tmp = 0;
  while (l)
  {
    tmp = l->liststatement_;
    l->liststatement_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListTypeSpecifier* reverseListTypeSpecifier(ListTypeSpecifier *l)
{
  ListTypeSpecifier *prev = 0;
  ListTypeSpecifier *tmp = 0;
  while (l)
  {
    tmp = l->listtypespecifier_;
    l->listtypespecifier_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListFunctionSpecifier* reverseListFunctionSpecifier(ListFunctionSpecifier *l)
{
  ListFunctionSpecifier *prev = 0;
  ListFunctionSpecifier *tmp = 0;
  while (l)
  {
    tmp = l->listfunctionspecifier_;
    l->listfunctionspecifier_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListVariableSpecifier* reverseListVariableSpecifier(ListVariableSpecifier *l)
{
  ListVariableSpecifier *prev = 0;
  ListVariableSpecifier *tmp = 0;
  while (l)
  {
    tmp = l->listvariablespecifier_;
    l->listvariablespecifier_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListStructMemberDeclaration* reverseListStructMemberDeclaration(ListStructMemberDeclaration *l)
{
  ListStructMemberDeclaration *prev = 0;
  ListStructMemberDeclaration *tmp = 0;
  while (l)
  {
    tmp = l->liststructmemberdeclaration_;
    l->liststructmemberdeclaration_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListParameterDeclaration* reverseListParameterDeclaration(ListParameterDeclaration *l)
{
  ListParameterDeclaration *prev = 0;
  ListParameterDeclaration *tmp = 0;
  while (l)
  {
    tmp = l->listparameterdeclaration_;
    l->listparameterdeclaration_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListExpression* reverseListExpression(ListExpression *l)
{
  ListExpression *prev = 0;
  ListExpression *tmp = 0;
  while (l)
  {
    tmp = l->listexpression_;
    l->listexpression_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}



/* Line 189 of yacc.c  */
#line 552 "parse.cpp"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _ERROR_ = 258,
     _SYMB_0 = 259,
     _SYMB_1 = 260,
     _SYMB_2 = 261,
     _SYMB_3 = 262,
     _SYMB_4 = 263,
     _SYMB_5 = 264,
     _SYMB_6 = 265,
     _SYMB_7 = 266,
     _SYMB_8 = 267,
     _SYMB_9 = 268,
     _SYMB_10 = 269,
     _SYMB_11 = 270,
     _SYMB_12 = 271,
     _SYMB_13 = 272,
     _SYMB_14 = 273,
     _SYMB_15 = 274,
     _SYMB_16 = 275,
     _SYMB_17 = 276,
     _SYMB_18 = 277,
     _SYMB_19 = 278,
     _SYMB_20 = 279,
     _SYMB_21 = 280,
     _SYMB_22 = 281,
     _SYMB_23 = 282,
     _SYMB_24 = 283,
     _SYMB_25 = 284,
     _SYMB_26 = 285,
     _SYMB_27 = 286,
     _SYMB_28 = 287,
     _SYMB_29 = 288,
     _SYMB_30 = 289,
     _SYMB_31 = 290,
     _SYMB_32 = 291,
     _SYMB_33 = 292,
     _SYMB_34 = 293,
     _SYMB_35 = 294,
     _SYMB_36 = 295,
     _SYMB_37 = 296,
     _SYMB_38 = 297,
     _SYMB_39 = 298,
     _SYMB_40 = 299,
     _SYMB_41 = 300,
     _SYMB_42 = 301,
     _SYMB_43 = 302,
     _SYMB_44 = 303,
     _SYMB_45 = 304,
     _SYMB_46 = 305,
     _SYMB_47 = 306,
     _SYMB_48 = 307,
     _SYMB_49 = 308,
     _SYMB_50 = 309,
     _SYMB_51 = 310,
     _SYMB_52 = 311,
     _SYMB_53 = 312,
     _SYMB_54 = 313,
     _SYMB_55 = 314,
     _SYMB_56 = 315,
     _SYMB_57 = 316,
     _SYMB_58 = 317,
     _SYMB_59 = 318,
     _SYMB_60 = 319,
     _SYMB_61 = 320,
     _SYMB_62 = 321,
     _SYMB_63 = 322,
     _SYMB_64 = 323,
     _SYMB_65 = 324,
     _SYMB_66 = 325,
     _SYMB_67 = 326,
     _SYMB_68 = 327,
     _SYMB_69 = 328,
     _SYMB_70 = 329,
     _SYMB_71 = 330,
     _SYMB_72 = 331,
     _SYMB_73 = 332,
     _SYMB_74 = 333,
     _SYMB_75 = 334,
     _SYMB_76 = 335,
     _SYMB_77 = 336,
     _SYMB_78 = 337,
     _SYMB_79 = 338,
     _SYMB_80 = 339,
     _SYMB_81 = 340,
     _SYMB_82 = 341,
     _SYMB_83 = 342,
     _SYMB_84 = 343,
     _SYMB_85 = 344,
     _SYMB_86 = 345,
     _SYMB_87 = 346,
     _SYMB_88 = 347,
     _SYMB_89 = 348,
     _SYMB_90 = 349,
     _SYMB_91 = 350,
     _SYMB_92 = 351,
     _SYMB_93 = 352,
     _SYMB_94 = 353,
     _SYMB_95 = 354,
     _SYMB_96 = 355,
     _SYMB_97 = 356,
     _SYMB_98 = 357,
     _SYMB_99 = 358,
     _SYMB_100 = 359,
     _SYMB_101 = 360,
     _SYMB_102 = 361,
     _SYMB_103 = 362,
     _SYMB_104 = 363,
     _SYMB_105 = 364,
     _SYMB_106 = 365,
     _SYMB_107 = 366,
     _SYMB_108 = 367,
     _SYMB_109 = 368,
     _SYMB_110 = 369,
     _SYMB_111 = 370,
     _SYMB_112 = 371,
     _SYMB_113 = 372,
     _SYMB_114 = 373,
     _SYMB_115 = 374,
     _SYMB_116 = 375,
     _SYMB_117 = 376,
     _SYMB_118 = 377,
     _SYMB_119 = 378,
     _SYMB_120 = 379,
     _SYMB_121 = 380,
     _SYMB_122 = 381,
     _SYMB_123 = 382,
     _SYMB_124 = 383,
     _SYMB_125 = 384,
     _SYMB_126 = 385,
     _SYMB_127 = 386,
     _SYMB_128 = 387,
     _SYMB_129 = 388,
     _SYMB_130 = 389,
     _SYMB_131 = 390,
     _SYMB_132 = 391,
     _SYMB_133 = 392,
     _SYMB_134 = 393,
     _SYMB_135 = 394,
     _SYMB_136 = 395,
     _SYMB_137 = 396,
     _SYMB_138 = 397,
     _SYMB_139 = 398,
     _SYMB_140 = 399,
     _SYMB_141 = 400,
     _SYMB_142 = 401,
     _SYMB_143 = 402,
     _SYMB_144 = 403,
     _SYMB_145 = 404,
     _SYMB_146 = 405,
     _SYMB_147 = 406,
     _SYMB_148 = 407,
     _SYMB_149 = 408,
     _SYMB_150 = 409,
     _SYMB_151 = 410,
     _SYMB_152 = 411,
     _SYMB_153 = 412,
     _SYMB_154 = 413,
     _SYMB_155 = 414,
     _SYMB_156 = 415,
     _SYMB_157 = 416,
     _SYMB_158 = 417,
     _SYMB_159 = 418,
     _SYMB_160 = 419,
     _SYMB_161 = 420,
     _SYMB_162 = 421,
     _SYMB_163 = 422,
     _SYMB_164 = 423,
     _SYMB_165 = 424,
     _SYMB_166 = 425,
     _SYMB_167 = 426,
     _SYMB_168 = 427,
     _SYMB_169 = 428,
     _SYMB_170 = 429,
     _SYMB_171 = 430,
     _SYMB_172 = 431,
     _SYMB_173 = 432,
     _SYMB_174 = 433,
     _SYMB_175 = 434,
     _SYMB_176 = 435,
     _SYMB_177 = 436,
     _SYMB_178 = 437,
     _SYMB_179 = 438,
     _SYMB_180 = 439,
     _SYMB_181 = 440,
     _SYMB_182 = 441,
     _SYMB_183 = 442,
     _SYMB_184 = 443,
     _SYMB_185 = 444,
     _SYMB_186 = 445,
     _SYMB_187 = 446,
     _SYMB_188 = 447,
     _SYMB_189 = 448,
     _SYMB_190 = 449,
     _SYMB_191 = 450,
     _SYMB_192 = 451,
     _SYMB_193 = 452,
     _SYMB_194 = 453,
     _SYMB_195 = 454,
     _SYMB_196 = 455,
     _SYMB_197 = 456,
     _SYMB_198 = 457,
     _SYMB_199 = 458,
     _SYMB_200 = 459,
     _SYMB_201 = 460,
     _SYMB_202 = 461,
     _SYMB_203 = 462,
     _SYMB_204 = 463,
     _SYMB_205 = 464,
     _INTEGER_ = 465,
     _DOUBLE_ = 466,
     _IDENT_ = 467
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 481 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"

  int int_;
  char char_;
  double double_;
  char* string_;
  Code* code_;
  TLDeclaration* tldeclaration_;
  Declaration* declaration_;
  Prototype* prototype_;
  OperatorName* operatorname_;
  OperatorTrait* operatortrait_;
  FunctionSpecifier* functionspecifier_;
  VariableSpecifier* variablespecifier_;
  TypeSpecifier* typespecifier_;
  Type* type_;
  StructMemberDeclaration* structmemberdeclaration_;
  ParameterDeclaration* parameterdeclaration_;
  Statement* statement_;
  RValue* rvalue_;
  Expression* expression_;
  ListTLDeclaration* listtldeclaration_;
  ListDeclaration* listdeclaration_;
  ListStatement* liststatement_;
  ListTypeSpecifier* listtypespecifier_;
  ListFunctionSpecifier* listfunctionspecifier_;
  ListVariableSpecifier* listvariablespecifier_;
  ListStructMemberDeclaration* liststructmemberdeclaration_;
  ListParameterDeclaration* listparameterdeclaration_;
  ListExpression* listexpression_;




/* Line 214 of yacc.c  */
#line 834 "parse.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 859 "parse.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4259

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  213
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  287
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1080

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   467

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    14,    20,    29,    39,    49,
      52,    58,    61,    67,    71,    79,    81,    83,    85,    87,
      89,    91,    93,    95,    97,    99,   101,   103,   105,   107,
     109,   111,   113,   115,   117,   119,   121,   123,   125,   127,
     132,   134,   136,   138,   140,   142,   144,   147,   149,   151,
     156,   158,   160,   165,   169,   174,   178,   181,   184,   188,
     192,   195,   199,   207,   219,   227,   235,   243,   255,   266,
     277,   280,   283,   286,   293,   298,   300,   304,   306,   308,
     310,   312,   314,   316,   320,   324,   328,   334,   340,   344,
     349,   352,   355,   362,   369,   376,   383,   390,   397,   404,
     411,   418,   425,   432,   439,   446,   451,   456,   463,   470,
     477,   484,   491,   498,   505,   512,   519,   526,   533,   540,
     547,   554,   561,   568,   575,   582,   589,   594,   599,   606,
     613,   620,   627,   634,   641,   648,   655,   662,   669,   676,
     683,   690,   697,   704,   711,   718,   725,   732,   737,   742,
     749,   756,   763,   770,   777,   784,   791,   798,   805,   812,
     819,   826,   833,   840,   847,   854,   861,   868,   875,   880,
     885,   892,   899,   906,   913,   920,   927,   934,   941,   948,
     955,   962,   969,   976,   983,   990,   997,  1002,  1009,  1016,
    1023,  1030,  1037,  1044,  1051,  1058,  1065,  1072,  1077,  1084,
    1091,  1098,  1105,  1112,  1119,  1126,  1133,  1140,  1147,  1154,
    1161,  1168,  1175,  1182,  1189,  1196,  1203,  1210,  1217,  1219,
    1222,  1225,  1228,  1231,  1234,  1237,  1240,  1242,  1246,  1250,
    1254,  1256,  1260,  1264,  1266,  1270,  1274,  1278,  1280,  1284,
    1288,  1292,  1296,  1298,  1302,  1306,  1308,  1312,  1316,  1320,
    1322,  1326,  1330,  1334,  1336,  1342,  1348,  1350,  1354,  1358,
    1362,  1366,  1370,  1374,  1378,  1382,  1386,  1390,  1394,  1396,
    1397,  1400,  1401,  1404,  1405,  1408,  1409,  1412,  1413,  1416,
    1417,  1420,  1421,  1424,  1425,  1427,  1431,  1433
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     214,     0,    -1,   240,   241,    -1,   115,   212,     4,    -1,
     110,   212,     4,    -1,   135,   212,     5,   241,     6,    -1,
     244,   212,     7,   247,     8,     5,   242,     6,    -1,   244,
     223,   212,     7,   247,     8,     5,   242,     6,    -1,   244,
     223,   218,     7,   247,     8,     5,   242,     6,    -1,   219,
       4,    -1,   243,   187,   223,   212,     4,    -1,   111,   217,
      -1,   223,   212,     9,   239,     4,    -1,   223,   212,     4,
      -1,   244,   223,   212,     7,   247,     8,     4,    -1,   207,
      -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,    14,
      -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,
      -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    31,    -1,    32,    -1,   113,   223,   218,
     210,    -1,   109,    -1,   151,    -1,   117,    -1,    72,    -1,
     100,    -1,    65,    -1,   118,   218,    -1,   164,    -1,   101,
      -1,    59,    21,   210,    22,    -1,    75,    -1,   212,    -1,
     223,    33,   210,    34,    -1,   223,    33,    34,    -1,     5,
     246,     4,     6,    -1,   223,   212,     4,    -1,   223,     4,
      -1,   245,   212,    -1,   245,   223,   212,    -1,   157,   239,
       4,    -1,   239,     4,    -1,     5,   242,     6,    -1,   114,
       7,   239,     8,     5,   242,     6,    -1,   114,     7,   239,
       8,     5,   242,     6,   108,     5,   242,     6,    -1,   156,
       7,   239,     8,     5,   242,     6,    -1,   202,     7,   239,
       8,     5,   242,     6,    -1,   194,     7,   239,     8,     5,
     242,     6,    -1,   112,     7,   248,     4,   239,     4,   248,
       8,     5,   242,     6,    -1,   112,   107,     7,   212,   116,
     239,     8,     5,   242,     6,    -1,   112,    60,     7,   212,
     116,   239,     8,     5,   242,     6,    -1,    73,     4,    -1,
     102,     4,    -1,    74,     4,    -1,   245,   223,   212,     9,
     239,     4,    -1,   245,   223,   212,     4,    -1,   212,    -1,
     212,    35,   227,    -1,   211,    -1,   210,    -1,   208,    -1,
     209,    -1,   150,    -1,   227,    -1,     7,   239,     8,    -1,
       5,   248,     6,    -1,    33,   248,    34,    -1,     5,   239,
     201,   248,     6,    -1,    33,   239,   201,   248,    34,    -1,
     227,     7,     8,    -1,   227,     7,   248,     8,    -1,   227,
      11,    -1,   227,    12,    -1,    56,     7,   239,    36,   239,
       8,    -1,   184,     7,   239,    36,   239,     8,    -1,   132,
       7,   239,    36,   239,     8,    -1,   191,     7,   239,    36,
     239,     8,    -1,   161,     7,   239,    36,   239,     8,    -1,
     198,     7,   239,    36,   239,     8,    -1,   174,     7,   239,
      36,   239,     8,    -1,    64,     7,   239,    36,   239,     8,
      -1,   149,     7,   239,    36,   239,     8,    -1,   206,     7,
     239,    36,   239,     8,    -1,   168,     7,   239,    36,   239,
       8,    -1,   122,     7,   239,    36,   239,     8,    -1,    69,
       7,   239,    36,   239,     8,    -1,   145,     7,   239,     8,
      -1,   139,     7,   239,     8,    -1,    79,     7,   239,    36,
     239,     8,    -1,    99,     7,   239,    36,   239,     8,    -1,
      95,     7,   239,    36,   239,     8,    -1,    87,     7,   239,
      36,   239,     8,    -1,    91,     7,   239,    36,   239,     8,
      -1,    83,     7,   239,    36,   239,     8,    -1,    49,     7,
     239,    36,   239,     8,    -1,   177,     7,   239,    36,   239,
       8,    -1,   125,     7,   239,    36,   239,     8,    -1,   188,
       7,   239,    36,   239,     8,    -1,   158,     7,   239,    36,
     239,     8,    -1,   195,     7,   239,    36,   239,     8,    -1,
     171,     7,   239,    36,   239,     8,    -1,    61,     7,   239,
      36,   239,     8,    -1,   146,     7,   239,    36,   239,     8,
      -1,   203,     7,   239,    36,   239,     8,    -1,   165,     7,
     239,    36,   239,     8,    -1,   119,     7,   239,    36,   239,
       8,    -1,    66,     7,   239,    36,   239,     8,    -1,   142,
       7,   239,     8,    -1,   136,     7,   239,     8,    -1,    76,
       7,   239,    36,   239,     8,    -1,    96,     7,   239,    36,
     239,     8,    -1,    92,     7,   239,    36,   239,     8,    -1,
      84,     7,   239,    36,   239,     8,    -1,    88,     7,   239,
      36,   239,     8,    -1,    80,     7,   239,    36,   239,     8,
      -1,    51,     7,   239,    36,   239,     8,    -1,   179,     7,
     239,    36,   239,     8,    -1,   127,     7,   239,    36,   239,
       8,    -1,   189,     7,   239,    36,   239,     8,    -1,   159,
       7,   239,    36,   239,     8,    -1,   196,     7,   239,    36,
     239,     8,    -1,   172,     7,   239,    36,   239,     8,    -1,
      62,     7,   239,    36,   239,     8,    -1,   147,     7,   239,
      36,   239,     8,    -1,   204,     7,   239,    36,   239,     8,
      -1,   166,     7,   239,    36,   239,     8,    -1,   120,     7,
     239,    36,   239,     8,    -1,    67,     7,   239,    36,   239,
       8,    -1,   143,     7,   239,     8,    -1,   137,     7,   239,
       8,    -1,    77,     7,   239,    36,   239,     8,    -1,    97,
       7,   239,    36,   239,     8,    -1,    93,     7,   239,    36,
     239,     8,    -1,    85,     7,   239,    36,   239,     8,    -1,
      89,     7,   239,    36,   239,     8,    -1,    81,     7,   239,
      36,   239,     8,    -1,    54,     7,   239,    36,   239,     8,
      -1,   182,     7,   239,    36,   239,     8,    -1,   130,     7,
     239,    36,   239,     8,    -1,   190,     7,   239,    36,   239,
       8,    -1,   160,     7,   239,    36,   239,     8,    -1,   197,
       7,   239,    36,   239,     8,    -1,   173,     7,   239,    36,
     239,     8,    -1,    63,     7,   239,    36,   239,     8,    -1,
     148,     7,   239,    36,   239,     8,    -1,   205,     7,   239,
      36,   239,     8,    -1,   167,     7,   239,    36,   239,     8,
      -1,   121,     7,   239,    36,   239,     8,    -1,    68,     7,
     239,    36,   239,     8,    -1,   144,     7,   239,     8,    -1,
     138,     7,   239,     8,    -1,    78,     7,   239,    36,   239,
       8,    -1,    98,     7,   239,    36,   239,     8,    -1,    94,
       7,   239,    36,   239,     8,    -1,    86,     7,   239,    36,
     239,     8,    -1,    90,     7,   239,    36,   239,     8,    -1,
      82,     7,   239,    36,   239,     8,    -1,    57,     7,   239,
      36,   239,     8,    -1,   185,     7,   239,    36,   239,     8,
      -1,   133,     7,   239,    36,   239,     8,    -1,   192,     7,
     239,    36,   239,     8,    -1,   162,     7,   239,    36,   239,
       8,    -1,   199,     7,   239,    36,   239,     8,    -1,   175,
       7,   239,    36,   239,     8,    -1,   169,     7,   239,    36,
     239,     8,    -1,   123,     7,   239,    36,   239,     8,    -1,
      70,     7,   239,    36,   239,     8,    -1,   140,     7,   239,
       8,    -1,    58,     7,   239,    36,   239,     8,    -1,   186,
       7,   239,    36,   239,     8,    -1,   134,     7,   239,    36,
     239,     8,    -1,   193,     7,   239,    36,   239,     8,    -1,
     163,     7,   239,    36,   239,     8,    -1,   200,     7,   239,
      36,   239,     8,    -1,   176,     7,   239,    36,   239,     8,
      -1,   170,     7,   239,    36,   239,     8,    -1,   124,     7,
     239,    36,   239,     8,    -1,    71,     7,   239,    36,   239,
       8,    -1,   141,     7,   239,     8,    -1,    50,     7,   239,
      36,   239,     8,    -1,   178,     7,   239,    36,   239,     8,
      -1,   126,     7,   239,    36,   239,     8,    -1,   103,     7,
     239,    36,   239,     8,    -1,   152,     7,   239,    36,   239,
       8,    -1,    52,     7,   239,    36,   239,     8,    -1,   180,
       7,   239,    36,   239,     8,    -1,   128,     7,   239,    36,
     239,     8,    -1,   104,     7,   239,    36,   239,     8,    -1,
     153,     7,   239,    36,   239,     8,    -1,    55,     7,   239,
      36,   239,     8,    -1,   183,     7,   239,    36,   239,     8,
      -1,   131,     7,   239,    36,   239,     8,    -1,   106,     7,
     239,    36,   239,     8,    -1,   155,     7,   239,    36,   239,
       8,    -1,    53,     7,   239,    36,   239,     8,    -1,   181,
       7,   239,    36,   239,     8,    -1,   129,     7,   239,    36,
     239,     8,    -1,   105,     7,   239,    36,   239,     8,    -1,
     154,     7,   239,    36,   239,     8,    -1,   228,    -1,    10,
     229,    -1,    11,   227,    -1,    12,   227,    -1,    18,   229,
      -1,    13,   229,    -1,    17,   229,    -1,   207,   229,    -1,
     229,    -1,   231,    14,   230,    -1,   231,    15,   230,    -1,
     231,    16,   230,    -1,   230,    -1,   232,    17,   231,    -1,
     232,    18,   231,    -1,   231,    -1,   233,    19,   232,    -1,
     233,    20,   232,    -1,   233,   207,   232,    -1,   232,    -1,
     233,    21,   233,    -1,   233,    22,   233,    -1,   233,    23,
     233,    -1,   233,    24,   233,    -1,   233,    -1,   234,    25,
     234,    -1,   234,    26,   234,    -1,   234,    -1,   236,    27,
     235,    -1,   236,    28,   235,    -1,   236,    29,   235,    -1,
     235,    -1,   236,    30,   236,    -1,   236,    31,   236,    -1,
     236,    32,   236,    -1,   236,    -1,   237,    37,   237,    38,
     237,    -1,   237,   218,   237,   218,   237,    -1,   237,    -1,
     227,     9,   239,    -1,   227,    39,   239,    -1,   227,    40,
     239,    -1,   227,    41,   239,    -1,   227,    42,   239,    -1,
     227,    43,   239,    -1,   227,    44,   239,    -1,   227,    45,
     239,    -1,   227,    46,   239,    -1,   227,    47,   239,    -1,
     227,    48,   239,    -1,   238,    -1,    -1,   240,   215,    -1,
      -1,   241,   216,    -1,    -1,   242,   226,    -1,    -1,   243,
     222,    -1,    -1,   244,   220,    -1,    -1,   245,   221,    -1,
      -1,   246,   224,    -1,    -1,   225,    -1,   225,    36,   247,
      -1,   239,    -1,   239,    36,   248,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   762,   762,   764,   765,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   777,   779,   780,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   804,
     806,   807,   808,   809,   810,   811,   812,   813,   815,   817,
     819,   820,   821,   822,   823,   825,   826,   828,   829,   831,
     832,   833,   834,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   848,   849,   851,   852,   853,
     854,   855,   856,   857,   859,   860,   861,   862,   863,   864,
     865,   866,   867,   868,   869,   870,   871,   872,   873,   874,
     875,   876,   877,   878,   879,   880,   881,   882,   883,   884,
     885,   886,   887,   888,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   928,   929,   930,   931,   932,   933,   934,
     935,   936,   937,   938,   939,   940,   941,   942,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   995,
     996,   997,   998,   999,  1000,  1001,  1002,  1004,  1005,  1006,
    1007,  1009,  1010,  1011,  1013,  1014,  1015,  1016,  1018,  1019,
    1020,  1021,  1022,  1024,  1025,  1026,  1028,  1029,  1030,  1031,
    1033,  1034,  1035,  1036,  1038,  1039,  1040,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1055,
    1056,  1058,  1059,  1061,  1062,  1064,  1065,  1067,  1068,  1070,
    1071,  1073,  1074,  1076,  1077,  1078,  1080,  1081
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
  "_SYMB_118", "_SYMB_119", "_SYMB_120", "_SYMB_121", "_SYMB_122",
  "_SYMB_123", "_SYMB_124", "_SYMB_125", "_SYMB_126", "_SYMB_127",
  "_SYMB_128", "_SYMB_129", "_SYMB_130", "_SYMB_131", "_SYMB_132",
  "_SYMB_133", "_SYMB_134", "_SYMB_135", "_SYMB_136", "_SYMB_137",
  "_SYMB_138", "_SYMB_139", "_SYMB_140", "_SYMB_141", "_SYMB_142",
  "_SYMB_143", "_SYMB_144", "_SYMB_145", "_SYMB_146", "_SYMB_147",
  "_SYMB_148", "_SYMB_149", "_SYMB_150", "_SYMB_151", "_SYMB_152",
  "_SYMB_153", "_SYMB_154", "_SYMB_155", "_SYMB_156", "_SYMB_157",
  "_SYMB_158", "_SYMB_159", "_SYMB_160", "_SYMB_161", "_SYMB_162",
  "_SYMB_163", "_SYMB_164", "_SYMB_165", "_SYMB_166", "_SYMB_167",
  "_SYMB_168", "_SYMB_169", "_SYMB_170", "_SYMB_171", "_SYMB_172",
  "_SYMB_173", "_SYMB_174", "_SYMB_175", "_SYMB_176", "_SYMB_177",
  "_SYMB_178", "_SYMB_179", "_SYMB_180", "_SYMB_181", "_SYMB_182",
  "_SYMB_183", "_SYMB_184", "_SYMB_185", "_SYMB_186", "_SYMB_187",
  "_SYMB_188", "_SYMB_189", "_SYMB_190", "_SYMB_191", "_SYMB_192",
  "_SYMB_193", "_SYMB_194", "_SYMB_195", "_SYMB_196", "_SYMB_197",
  "_SYMB_198", "_SYMB_199", "_SYMB_200", "_SYMB_201", "_SYMB_202",
  "_SYMB_203", "_SYMB_204", "_SYMB_205", "_INTEGER_", "_DOUBLE_",
  "_IDENT_", "$accept", "Code", "TLDeclaration", "Declaration",
  "Prototype", "OperatorName", "OperatorTrait", "FunctionSpecifier",
  "VariableSpecifier", "TypeSpecifier", "Type", "StructMemberDeclaration",
  "ParameterDeclaration", "Statement", "RValue", "Expression11",
  "Expression10", "Expression9", "Expression8", "Expression7",
  "Expression6", "Expression5", "Expression4", "Expression3",
  "Expression2", "Expression1", "Expression", "ListTLDeclaration",
  "ListDeclaration", "ListStatement", "ListTypeSpecifier",
  "ListFunctionSpecifier", "ListVariableSpecifier",
  "ListStructMemberDeclaration", "ListParameterDeclaration",
  "ListExpression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   213,   214,   215,   215,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   217,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   219,
     220,   220,   220,   220,   220,   220,   220,   220,   221,   222,
     223,   223,   223,   223,   223,   224,   224,   225,   225,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   227,   227,   228,   228,   228,
     228,   228,   228,   228,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   230,
     230,   230,   230,   230,   230,   230,   230,   231,   231,   231,
     231,   232,   232,   232,   233,   233,   233,   233,   234,   234,
     234,   234,   234,   235,   235,   235,   236,   236,   236,   236,
     237,   237,   237,   237,   238,   238,   238,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   240,
     240,   241,   241,   242,   242,   243,   243,   244,   244,   245,
     245,   246,   246,   247,   247,   247,   248,   248
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     3,     5,     8,     9,     9,     2,
       5,     2,     5,     3,     7,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     4,
       1,     1,     4,     3,     4,     3,     2,     2,     3,     3,
       2,     3,     7,    11,     7,     7,     7,    11,    10,    10,
       2,     2,     2,     6,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     5,     5,     3,     4,
       2,     2,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     4,     4,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     4,     4,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     4,     4,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     4,     4,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     4,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     4,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     1,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     3,     1,     5,     5,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     269,     0,   271,     1,     0,     0,   270,   277,     0,     0,
     281,    50,   277,     0,     0,    51,   272,     0,     0,     0,
       0,     4,     3,     0,    11,     0,     0,     0,     9,     0,
       0,     0,     0,   276,    45,    43,    44,    40,    42,     0,
      41,    47,    51,   278,     0,     0,     0,   282,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    15,     0,   271,    53,     0,    13,     0,     0,
       0,    46,   279,     0,     0,    54,    56,     0,     0,    39,
     277,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
      80,    78,    77,    75,    82,   218,   226,   230,   233,   237,
     242,   245,   249,   253,   256,   268,     0,     0,     0,   284,
       0,     0,   279,   279,    55,   279,     5,   286,     0,     0,
      82,   219,   220,   221,   223,   224,   222,   286,     0,     0,
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
       0,     0,     0,     0,     0,   225,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    49,    10,   279,    48,    51,   280,
       0,     0,     0,     0,     0,     0,     0,    84,    83,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,    76,    88,   286,
       0,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   227,   228,   229,   231,   232,   234,   235,   238,
     239,   240,   241,   236,   243,   244,   246,   247,   248,   250,
     251,   252,     0,     0,   285,    58,   273,     0,     0,     0,
     287,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   127,   148,   169,
     106,   186,   197,   126,   147,   168,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    89,
       0,     0,   279,   273,   273,    14,    86,    87,     0,     0,
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
       0,     0,     0,     0,   254,   255,   273,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274,     0,     0,
     279,   279,   113,   198,   134,   203,   213,   155,   208,    92,
     176,   187,   120,   141,   162,    99,   125,   146,   167,   104,
     185,   196,   128,   149,   170,   107,   133,   154,   175,   112,
     131,   152,   173,   110,   132,   153,   174,   111,   130,   151,
     172,   109,   129,   150,   171,   108,   201,   206,   216,   211,
     124,   145,   166,   103,   184,   195,   115,   200,   136,   205,
     215,   157,   210,    94,   178,   189,   121,   142,   163,   100,
     202,   207,   217,   212,   117,   138,   159,    96,   180,   191,
     123,   144,   165,   102,   183,   194,   119,   140,   161,    98,
     182,   193,   114,   199,   135,   204,   214,   156,   209,    93,
     177,   188,   116,   137,   158,    95,   179,   190,   118,   139,
     160,    97,   181,   192,   122,   143,   164,   101,   279,    70,
      72,    71,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,     7,     8,    61,     0,     0,     0,     0,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,     0,   273,   273,   273,   273,
       0,     0,     0,     0,   279,   279,   279,   279,    73,     0,
       0,     0,    62,    64,    66,    65,     0,   273,   273,     0,
     273,   279,   279,   273,   279,    69,    68,   279,    67,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     6,    16,    24,    73,    17,    43,   439,    33,
      18,    47,   249,   887,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   888,     2,     7,   752,
      19,    20,   889,    23,   251,   258
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -710
static const yytype_int16 yypact[] =
{
    -710,    21,   -75,  -710,  -181,  -179,  -710,   612,    37,    39,
    -710,  -710,  -710,   401,  -136,  -710,  -710,    88,   -25,   -48,
     329,  -710,  -710,   110,  -710,   609,   848,   101,  -710,   139,
      33,    86,   401,  -710,  -710,  -710,  -710,  -710,  -710,  4052,
    -710,  -710,   102,  -710,   490,   104,   121,  -710,   -24,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -102,  -710,  -710,    79,  -710,  3641,   -99,
     130,  -710,   109,   111,   112,  -710,  -710,   116,   115,  -710,
     670,  -710,  3641,  3641,  3849,   -89,   -89,  3849,  3849,  3849,
    3641,   117,   119,   120,   122,   123,   124,   125,   126,   127,
     128,   129,   131,   134,   135,   137,   138,   140,   141,   142,
     143,   144,   145,   146,   154,   155,   157,   161,   162,   163,
     169,   170,   172,   173,   174,   175,   176,   177,   179,   339,
     340,   341,   343,   344,   345,   346,   347,   349,   353,   355,
     356,   363,   388,   389,   390,   391,   392,   393,   400,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,  -710,
     423,   424,   425,   426,   427,   428,   429,   430,   432,   433,
     434,   435,   436,   437,   438,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   467,
     468,   470,   471,   472,   474,   475,   476,   477,  3849,  -710,
    -710,  -710,  -710,    93,    27,  -710,  -710,  -710,    64,    36,
     -17,    61,  -710,    20,   881,  -710,   481,   118,   482,   107,
     397,   479,   109,   109,  -710,   109,  -710,   -26,   399,   480,
      12,  -710,  -710,  -710,  -710,  -710,  -710,   -23,   103,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  -710,   -89,  3433,  3641,  -710,
    -710,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  -710,  -710,  -710,   109,  -710,    10,  -710,
     132,   484,   483,   486,   487,  3641,  3641,  -710,  -710,  3641,
    -710,   372,   488,   489,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   506,   507,
     508,   575,   579,   580,   582,   636,   637,   641,   642,   643,
     644,   646,   647,   649,   650,   652,   653,   655,   656,   657,
     658,   659,   660,   662,   663,   664,   665,   667,   668,   669,
     671,   672,   674,   677,   678,   679,   680,   681,   683,   684,
     685,   686,   688,   692,   694,   518,   698,   723,   724,   725,
     726,   727,   728,   729,   730,   703,   704,   705,   706,   707,
     708,   710,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   731,   732,   733,   734,   735,   736,   738,
     739,   740,   741,   742,   743,   744,   746,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   760,
     761,   764,   765,   766,   767,   768,   771,  -710,  -710,   772,
     801,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,    64,    64,    36,    36,   136,
     136,   136,   136,    36,  -710,  -710,  -710,  -710,  -710,    56,
      56,    56,   108,  4052,  -710,  -710,  -710,   485,   805,   762,
    -710,   806,   777,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  3641,  -710,
    3641,  3641,   937,  -710,  -710,  -710,  -710,  -710,   807,   808,
     809,   810,   811,   812,   814,   815,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,   833,   834,   835,   836,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   847,   875,   876,   877,
     878,   879,   880,   882,   906,   907,   908,   909,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   925,   927,   928,   931,   938,   943,   944,   945,   950,
     951,   952,   953,   954,   955,   957,   960,   961,   964,   966,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   988,   989,   994,  1001,  1004,  1029,  1030,  1036,  1037,
    1038,  1039,  1040,  1042,  1044,  1045,  1046,  1064,  1093,  1116,
    1130,  1146,  1151,  1152,  -710,  -710,  3641,  -710,   852,   885,
     941,     5,  1154,  1157,  3641,  1158,  1159,  -710,  1149,   398,
    1145,  1353,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  1561,  -710,
    -710,  -710,  3641,  1160,  1161,  3641,  3641,  1165,  3641,  3641,
    -710,   133,  -710,  -710,  -710,  1166,   280,   284,  1163,  1164,
    -710,  1167,  1168,    73,  3641,   381,   645,  1169,  1172,  1174,
    1175,  -710,  3641,  1177,  3641,  3641,  -710,  -710,  -710,  -710,
    1178,  3641,  1176,  1179,  1769,  1977,  2185,  2393,  -710,  1180,
    1181,  1184,   651,  -710,  -710,  -710,  1185,  -710,  -710,  1186,
    -710,  2601,  2809,  -710,  3017,  -710,  -710,  3225,  -710,  -710
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -710,  -710,  -710,  -710,  -710,    77,  -710,  -710,  -710,  -710,
      68,  -710,  -710,  -710,   -39,  -710,   -69,  -317,  -325,  -390,
    -357,  -319,  -328,  -327,  -415,  -710,   -78,  -710,   689,  -709,
    -710,   802,   -81,  -710,   -95,   -80
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -284
static const yytype_int16 yytable[] =
{
     246,   250,   416,   417,   418,   419,   420,   421,    29,    29,
     445,    31,  1012,   445,   257,   259,   612,   613,   -57,   397,
     268,     3,   267,   399,   400,   261,   597,   598,   264,   265,
     266,     8,   603,     9,   397,     4,   398,    77,   399,   400,
       5,    21,    78,    22,   890,   891,   -57,   425,   426,   427,
     428,   429,   430,   414,   415,   260,   262,   263,   260,   260,
     260,   599,   600,   601,   602,  1013,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,    27,  1041,   411,   412,
     413,    26,  1042,   425,   426,   427,   423,   424,    44,   595,
     596,    46,    28,    48,   592,   593,   594,   606,   607,   608,
      80,   609,   610,   611,   604,   605,    74,    79,    89,    82,
      85,   247,  1014,    91,    45,    10,    81,  -283,   252,   253,
     254,    84,   255,   233,   269,    86,   270,   271,   396,   272,
     273,   274,   275,   276,   277,   278,   279,   450,   280,    32,
     434,   281,   282,   436,   283,   284,   750,   285,   286,   287,
     288,   289,   290,   291,    29,   416,   417,   442,   443,   395,
     444,   292,   293,    29,   294,    29,    29,  1008,   295,   296,
     297,   250,   250,    75,   250,   446,   298,   299,   449,   300,
     301,   302,   303,   304,   305,    11,   306,    30,    88,   260,
     422,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   580,   440,   579,
     581,   432,    15,   582,   583,   584,   585,   586,   587,   588,
     589,   590,   591,    87,    10,   874,   875,  1054,  1055,  1056,
    1057,   614,   248,   422,   615,  1033,   307,   308,   309,    76,
     310,   311,   312,   313,   314,   250,   315,   577,  1071,  1072,
     316,  1074,   317,   318,  1077,   620,   621,   579,   579,   622,
     319,   579,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,    34,   320,   321,   322,   323,   324,
     325,    35,    10,    10,    11,   447,    10,   326,   623,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,    36,
     347,   348,   349,   350,   351,   352,   353,   354,    37,   355,
     356,   357,   358,   359,   360,   361,    38,    39,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,    11,    11,   386,   387,    11,   388,   389,   390,
      40,   391,   392,   393,   394,   433,   435,   441,   448,   616,
     753,   617,  1035,    41,   618,   619,  1036,  1044,   437,   437,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    29,   624,   625,   687,   626,   627,   628,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,    42,   640,   641,   642,   758,   759,   760,   761,   762,
     763,   764,   765,   766,   767,   768,   769,   770,   771,   772,
     773,   774,   775,   776,   777,   778,   779,   780,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   796,   797,   798,   799,   800,   801,   802,
     803,   804,   805,   806,   807,   808,   809,   810,   811,   812,
     813,   814,   815,   816,   817,   818,   819,   820,   821,   438,
      15,   643,    -2,    15,    10,   644,   645,    10,   646,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
     833,   834,   835,   836,   837,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,   851,   852,
     853,   854,   855,   856,   857,   858,   859,   860,   861,   862,
     863,   864,   865,   866,   867,   868,   869,   870,   871,   872,
     873,  -275,   647,   648,    34,    10,   256,   649,   650,   651,
     652,    35,   653,   654,    11,   655,   656,    11,   657,   658,
     751,   659,   660,   661,   662,   663,   664,    72,   665,   666,
     667,   668,    83,   669,   670,   671,   688,   672,   673,    36,
     674,   260,   260,   675,   676,   677,   678,   679,    37,   680,
     681,   682,   683,    12,   684,    13,    38,    39,   685,  -275,
     686,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   701,   702,    11,   703,    14,   704,   705,
     706,   707,   708,   709,   710,   711,   712,   713,   714,  1069,
      40,  1045,     0,    90,     0,     0,   755,   715,   716,   717,
     718,   719,   720,    41,   721,   722,   723,   724,   725,   726,
     727,    12,   728,    13,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   257,  -275,
     743,   744,   745,   746,   747,    14,  1017,   748,   445,   749,
     754,   757,   756,     0,    25,   892,   893,   894,   895,   896,
     897,    15,   898,   899,    15,   900,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   928,   929,   930,  1009,  -275,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    29,    15,   931,   932,   933,   934,   935,   936,  1010,
     937,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,   938,   939,   940,   941,   431,   942,
     943,   944,   945,   946,   947,   948,   949,   950,   951,   952,
     953,   954,  1025,   955,   579,   956,   957,  1028,  1029,   958,
    1031,  1032,   876,   877,    93,  1011,   959,    94,    95,    96,
      97,   960,   961,   962,    98,    99,  1043,  1021,   963,   964,
     965,   966,   967,   968,  1050,   969,  1052,  1053,   970,   971,
     100,  1059,   972,   579,   973,   974,   975,   976,   977,   978,
     979,   980,   981,   982,   983,   984,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   985,   986,   111,   112,
     113,   114,   987,   115,   116,   117,   118,   119,   120,   988,
     878,   879,   989,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   990,   991,   880,
     145,   146,   147,   148,   992,   993,   994,   995,   996,   881,
     997,   882,   998,   999,  1000,    72,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,  1001,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,    72,   180,
     181,   182,   183,   883,   884,   184,   185,   186,   187,   188,
     189,  1002,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,  1003,   212,   213,   214,   215,   216,
     217,   885,   218,   219,   220,   221,   222,   223,  1004,   886,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     876,  1022,    93,  1020,  1005,    94,    95,    96,    97,  1006,
    1007,  1015,    98,    99,  1016,  1018,  1019,  1026,  1027,  1030,
    1034,  1037,  1038,     0,  1046,  1039,  1040,  1047,   100,  1048,
    1049,  1051,  1058,     0,  1060,     0,  1067,  1061,  1066,  1068,
    1070,  1073,     0,     0,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,     0,   111,   112,   113,   114,
       0,   115,   116,   117,   118,   119,   120,     0,   878,   879,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,     0,   880,   145,   146,
     147,   148,     0,     0,     0,     0,     0,   881,     0,   882,
       0,     0,     0,     0,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
       0,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,     0,   180,   181,   182,
     183,   883,   884,   184,   185,   186,   187,   188,   189,     0,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,     0,   212,   213,   214,   215,   216,   217,   885,
     218,   219,   220,   221,   222,   223,     0,   886,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   876,  1023,
      93,     0,     0,    94,    95,    96,    97,     0,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,   111,   112,   113,   114,     0,   115,
     116,   117,   118,   119,   120,     0,   878,   879,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,     0,     0,   880,   145,   146,   147,   148,
       0,     0,     0,     0,     0,   881,     0,   882,     0,     0,
       0,     0,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,     0,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,     0,   180,   181,   182,   183,   883,
     884,   184,   185,   186,   187,   188,   189,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
       0,   212,   213,   214,   215,   216,   217,   885,   218,   219,
     220,   221,   222,   223,     0,   886,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   876,  1024,    93,     0,
       0,    94,    95,    96,    97,     0,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,   111,   112,   113,   114,     0,   115,   116,   117,
     118,   119,   120,     0,   878,   879,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,     0,   880,   145,   146,   147,   148,     0,     0,
       0,     0,     0,   881,     0,   882,     0,     0,     0,     0,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,     0,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,   180,   181,   182,   183,   883,   884,   184,
     185,   186,   187,   188,   189,     0,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,     0,   212,
     213,   214,   215,   216,   217,   885,   218,   219,   220,   221,
     222,   223,     0,   886,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   876,  1062,    93,     0,     0,    94,
      95,    96,    97,     0,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,     0,
     111,   112,   113,   114,     0,   115,   116,   117,   118,   119,
     120,     0,   878,   879,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     0,
       0,   880,   145,   146,   147,   148,     0,     0,     0,     0,
       0,   881,     0,   882,     0,     0,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,     0,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,   180,   181,   182,   183,   883,   884,   184,   185,   186,
     187,   188,   189,     0,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,     0,   212,   213,   214,
     215,   216,   217,   885,   218,   219,   220,   221,   222,   223,
       0,   886,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   876,  1063,    93,     0,     0,    94,    95,    96,
      97,     0,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,     0,   111,   112,
     113,   114,     0,   115,   116,   117,   118,   119,   120,     0,
     878,   879,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,     0,   880,
     145,   146,   147,   148,     0,     0,     0,     0,     0,   881,
       0,   882,     0,     0,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,     0,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,   180,
     181,   182,   183,   883,   884,   184,   185,   186,   187,   188,
     189,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,     0,   212,   213,   214,   215,   216,
     217,   885,   218,   219,   220,   221,   222,   223,     0,   886,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     876,  1064,    93,     0,     0,    94,    95,    96,    97,     0,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,     0,   111,   112,   113,   114,
       0,   115,   116,   117,   118,   119,   120,     0,   878,   879,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,     0,   880,   145,   146,
     147,   148,     0,     0,     0,     0,     0,   881,     0,   882,
       0,     0,     0,     0,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
       0,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,     0,   180,   181,   182,
     183,   883,   884,   184,   185,   186,   187,   188,   189,     0,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,     0,   212,   213,   214,   215,   216,   217,   885,
     218,   219,   220,   221,   222,   223,     0,   886,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   876,  1065,
      93,     0,     0,    94,    95,    96,    97,     0,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,   111,   112,   113,   114,     0,   115,
     116,   117,   118,   119,   120,     0,   878,   879,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,     0,     0,   880,   145,   146,   147,   148,
       0,     0,     0,     0,     0,   881,     0,   882,     0,     0,
       0,     0,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,     0,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,     0,   180,   181,   182,   183,   883,
     884,   184,   185,   186,   187,   188,   189,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
       0,   212,   213,   214,   215,   216,   217,   885,   218,   219,
     220,   221,   222,   223,     0,   886,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   876,  1075,    93,     0,
       0,    94,    95,    96,    97,     0,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,   111,   112,   113,   114,     0,   115,   116,   117,
     118,   119,   120,     0,   878,   879,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,     0,   880,   145,   146,   147,   148,     0,     0,
       0,     0,     0,   881,     0,   882,     0,     0,     0,     0,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,     0,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,   180,   181,   182,   183,   883,   884,   184,
     185,   186,   187,   188,   189,     0,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,     0,   212,
     213,   214,   215,   216,   217,   885,   218,   219,   220,   221,
     222,   223,     0,   886,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   876,  1076,    93,     0,     0,    94,
      95,    96,    97,     0,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,     0,
     111,   112,   113,   114,     0,   115,   116,   117,   118,   119,
     120,     0,   878,   879,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     0,
       0,   880,   145,   146,   147,   148,     0,     0,     0,     0,
       0,   881,     0,   882,     0,     0,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,     0,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,   180,   181,   182,   183,   883,   884,   184,   185,   186,
     187,   188,   189,     0,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,     0,   212,   213,   214,
     215,   216,   217,   885,   218,   219,   220,   221,   222,   223,
       0,   886,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   876,  1078,    93,     0,     0,    94,    95,    96,
      97,     0,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,     0,   111,   112,
     113,   114,     0,   115,   116,   117,   118,   119,   120,     0,
     878,   879,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,     0,   880,
     145,   146,   147,   148,     0,     0,     0,     0,     0,   881,
       0,   882,     0,     0,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,     0,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,   180,
     181,   182,   183,   883,   884,   184,   185,   186,   187,   188,
     189,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,     0,   212,   213,   214,   215,   216,
     217,   885,   218,   219,   220,   221,   222,   223,     0,   886,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     876,  1079,    93,     0,     0,    94,    95,    96,    97,     0,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,     0,   111,   112,   113,   114,
       0,   115,   116,   117,   118,   119,   120,     0,   878,   879,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,     0,   880,   145,   146,
     147,   148,     0,     0,     0,     0,     0,   881,     0,   882,
       0,     0,     0,     0,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
       0,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,     0,   180,   181,   182,
     183,   883,   884,   184,   185,   186,   187,   188,   189,     0,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,     0,   212,   213,   214,   215,   216,   217,   885,
     218,   219,   220,   221,   222,   223,     0,   886,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    92,     0,
      93,   578,     0,    94,    95,    96,    97,     0,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,   111,   112,   113,   114,     0,   115,
     116,   117,   118,   119,   120,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,     0,     0,     0,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,     0,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,     0,   180,   181,   182,   183,     0,
       0,   184,   185,   186,   187,   188,   189,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
       0,   212,   213,   214,   215,   216,   217,     0,   218,   219,
     220,   221,   222,   223,     0,     0,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    92,     0,    93,     0,
       0,    94,    95,    96,    97,     0,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,   111,   112,   113,   114,     0,   115,   116,   117,
     118,   119,   120,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,     0,     0,   145,   146,   147,   148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,     0,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,   180,   181,   182,   183,     0,     0,   184,
     185,   186,   187,   188,   189,     0,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,     0,   212,
     213,   214,   215,   216,   217,     0,   218,   219,   220,   221,
     222,   223,     0,     0,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    92,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,     0,
     111,   112,   113,   114,     0,   115,   116,   117,   118,   119,
     120,     0,     0,     0,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     0,
       0,     0,   145,   146,   147,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,     0,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,   180,   181,   182,   183,     0,     0,   184,   185,   186,
     187,   188,   189,     0,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,     0,   212,   213,   214,
     215,   216,   217,     0,   218,   219,   220,   221,   222,   223,
       0,     0,   224,   225,   226,   227,     0,   229,   230,   231,
     232,   233,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72
};

static const yytype_int16 yycheck[] =
{
      78,    82,    19,    20,    21,    22,    23,    24,    33,    33,
      36,    59,     7,    36,    92,    93,   431,   432,     8,     7,
     100,     0,   100,    11,    12,    94,   416,   417,    97,    98,
      99,   212,   422,   212,     7,   110,     9,     4,    11,    12,
     115,     4,     9,     4,   753,   754,    36,    27,    28,    29,
      30,    31,    32,    17,    18,    94,    95,    96,    97,    98,
      99,   418,   419,   420,   421,    60,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   212,     4,    14,    15,
      16,    13,     9,    27,    28,    29,    25,    26,    20,   414,
     415,    23,     4,    25,   411,   412,   413,   425,   426,   427,
      32,   428,   429,   430,   423,   424,     5,    21,   210,     7,
       6,   210,   107,    34,     4,     5,    39,     8,     7,     7,
       4,    44,     7,   212,     7,     4,     7,     7,    35,     7,
       7,     7,     7,     7,     7,     7,     7,    34,     7,   187,
      22,     7,     7,    36,     7,     7,    38,     7,     7,     7,
       7,     7,     7,     7,    33,    19,    20,   252,   253,   228,
     255,     7,     7,    33,     7,    33,    33,   876,     7,     7,
       7,   252,   253,    34,   255,   201,     7,     7,   201,     7,
       7,     7,     7,     7,     7,    75,     7,   212,   212,   228,
     207,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   397,   250,   397,
     398,   244,   212,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   212,     5,   750,   751,  1046,  1047,  1048,
    1049,   436,   212,   207,   212,   212,     7,     7,     7,   210,
       7,     7,     7,     7,     7,   436,     7,   396,  1067,  1068,
       7,  1070,     7,     7,  1073,   445,   446,   445,   446,   449,
       7,   449,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,    65,     7,     7,     7,     7,     7,
       7,    72,     5,     5,    75,     6,     5,     7,    36,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,   100,
       7,     7,     7,     7,     7,     7,     7,     7,   109,     7,
       7,     7,     7,     7,     7,     7,   117,   118,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,    75,    75,     7,     7,    75,     7,     7,     7,
     151,     7,     7,     7,     7,     4,     4,     8,     8,     5,
       5,     8,   212,   164,     8,     8,   212,   116,   101,   101,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    36,    36,     8,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,   212,    36,    36,    36,   623,   624,   625,   626,   627,
     628,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,   646,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,   683,   684,   685,   686,   212,
     212,    36,     0,   212,     5,    36,    36,     5,    36,   697,
     698,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,   709,   710,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,   724,   725,   726,   727,
     728,   729,   730,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,    59,    36,    36,    65,     5,     6,    36,    36,    36,
      36,    72,    36,    36,    75,    36,    36,    75,    36,    36,
     613,    36,    36,    36,    36,    36,    36,   207,    36,    36,
      36,    36,   212,    36,    36,    36,     8,    36,    36,   100,
      36,   750,   751,    36,    36,    36,    36,    36,   109,    36,
      36,    36,    36,   111,    36,   113,   117,   118,    36,    59,
      36,     8,     8,     8,     8,     8,     8,     8,     8,    36,
      36,    36,    36,    36,    36,    75,    36,   135,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,   108,
     151,   116,    -1,    74,    -1,    -1,     4,    36,    36,    36,
      36,    36,    36,   164,    36,    36,    36,    36,    36,    36,
      36,   111,    36,   113,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,   876,   187,
      36,    36,    36,    36,    36,   135,   884,    36,    36,     8,
       5,    34,     6,    -1,    12,     8,     8,     8,     8,     8,
       8,   212,     8,     8,   212,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     4,   187,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,   212,     8,     8,     8,     8,     8,     8,     4,
       8,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     8,     8,     8,     8,    37,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,  1012,     8,  1012,     8,     8,  1015,  1016,     8,
    1018,  1019,     5,     6,     7,     4,     8,    10,    11,    12,
      13,     8,     8,     8,    17,    18,  1034,   889,     8,     8,
       8,     8,     8,     8,  1042,     8,  1044,  1045,     8,     8,
      33,  1051,     8,  1051,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     8,     8,    61,    62,
      63,    64,     8,    66,    67,    68,    69,    70,    71,     8,
      73,    74,     8,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     8,     8,   102,
     103,   104,   105,   106,     8,     8,     8,     8,     8,   112,
       8,   114,     8,     8,     8,   207,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,     8,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   207,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     8,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,     8,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,     8,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
       5,     6,     7,     4,     8,    10,    11,    12,    13,     8,
       8,     7,    17,    18,     7,     7,     7,     7,     7,     4,
       4,     8,     8,    -1,     5,     8,     8,     5,    33,     5,
       5,     4,     4,    -1,     8,    -1,     5,     8,     8,     5,
       5,     5,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    70,    71,    -1,    73,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,   112,    -1,   114,
      -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    70,    71,    -1,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,    -1,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,   112,    -1,   114,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
      -1,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    70,    71,    -1,    73,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,    -1,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,   112,    -1,   114,    -1,    -1,    -1,    -1,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    -1,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,    -1,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      71,    -1,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
      -1,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,   112,    -1,   114,    -1,    -1,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
      -1,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    70,    71,    -1,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,    -1,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,   112,
      -1,   114,    -1,    -1,    -1,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    -1,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    70,    71,    -1,    73,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,   112,    -1,   114,
      -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    70,    71,    -1,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,    -1,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,   112,    -1,   114,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
      -1,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    70,    71,    -1,    73,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,    -1,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,   112,    -1,   114,    -1,    -1,    -1,    -1,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    -1,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,    -1,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      71,    -1,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
      -1,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,   112,    -1,   114,    -1,    -1,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
      -1,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    70,    71,    -1,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,    -1,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,   112,
      -1,   114,    -1,    -1,    -1,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    -1,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    70,    71,    -1,    73,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,   112,    -1,   114,
      -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,     5,    -1,
       7,     8,    -1,    10,    11,    12,    13,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,    -1,    -1,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,   152,   153,   154,   155,    -1,
      -1,   158,   159,   160,   161,   162,   163,    -1,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
      -1,   188,   189,   190,   191,   192,   193,    -1,   195,   196,
     197,   198,   199,   200,    -1,    -1,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,     5,    -1,     7,    -1,
      -1,    10,    11,    12,    13,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,    -1,    -1,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,    -1,    -1,   158,
     159,   160,   161,   162,   163,    -1,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,   191,   192,   193,    -1,   195,   196,   197,   198,
     199,   200,    -1,    -1,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
      -1,    -1,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,    -1,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
     191,   192,   193,    -1,   195,   196,   197,   198,   199,   200,
      -1,    -1,   203,   204,   205,   206,    -1,   208,   209,   210,
     211,   212,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   214,   240,     0,   110,   115,   215,   241,   212,   212,
       5,    75,   111,   113,   135,   212,   216,   219,   223,   243,
     244,     4,     4,   246,   217,   244,   223,   212,     4,    33,
     212,    59,   187,   222,    65,    72,   100,   109,   117,   118,
     151,   164,   212,   220,   223,     4,   223,   224,   223,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   207,   218,     5,    34,   210,     4,     9,    21,
     223,   218,     7,   212,   218,     6,     4,   212,   212,   210,
     241,    34,     5,     7,    10,    11,    12,    13,    17,    18,
      33,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    61,    62,    63,    64,    66,    67,    68,    69,    70,
      71,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   103,   104,   105,   106,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     152,   153,   154,   155,   158,   159,   160,   161,   162,   163,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   188,   189,   190,   191,   192,   193,   195,   196,
     197,   198,   199,   200,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   210,   212,   225,
     245,   247,     7,     7,     4,     7,     6,   239,   248,   239,
     227,   229,   227,   227,   229,   229,   229,   239,   248,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,   229,    35,     7,     9,    11,
      12,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   207,    25,    26,    27,    28,    29,    30,    31,
      32,    37,   218,     4,    22,     4,    36,   101,   212,   221,
     223,     8,   247,   247,   247,    36,   201,     6,     8,   201,
      34,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   227,     8,   239,
     248,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   230,   230,   230,   231,   231,   232,   232,   233,
     233,   233,   233,   232,   234,   234,   235,   235,   235,   236,
     236,   236,   237,   237,   247,   212,     5,     8,     8,     8,
     248,   248,   248,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,     8,
      38,   218,   242,     5,     5,     4,     6,    34,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   237,   237,     5,     6,    73,    74,
     102,   112,   114,   156,   157,   194,   202,   226,   239,   245,
     242,   242,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,   242,     4,
       4,     4,     7,    60,   107,     7,     7,   239,     7,     7,
       4,   223,     6,     6,     6,   248,     7,     7,   239,   239,
       4,   239,   239,   212,     4,   212,   212,     8,     8,     8,
       8,     4,     9,   239,   116,   116,     5,     5,     5,     5,
     239,     4,   239,   239,   242,   242,   242,   242,     4,   248,
       8,     8,     6,     6,     6,     6,     8,     5,     5,   108,
       5,   242,   242,     5,   242,     6,     6,   242,     6,     6
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
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
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
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

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
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

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
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

      yyarg[0] = yytname[yytype];
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
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
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
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
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

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 762 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.code_) = new Main(reverseListTLDeclaration((yyvsp[(1) - (2)].listtldeclaration_)), reverseListDeclaration((yyvsp[(2) - (2)].listdeclaration_))); YY_RESULT_Code_= (yyval.code_); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 764 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.tldeclaration_) = new DImport((yyvsp[(2) - (3)].string_));  ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 765 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.tldeclaration_) = new DExpose((yyvsp[(2) - (3)].string_));  ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 767 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DNamespace((yyvsp[(2) - (5)].string_), reverseListDeclaration((yyvsp[(4) - (5)].listdeclaration_)));  ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 768 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DDefaultFunction(reverseListFunctionSpecifier((yyvsp[(1) - (8)].listfunctionspecifier_)), (yyvsp[(2) - (8)].string_), (yyvsp[(4) - (8)].listparameterdeclaration_), reverseListStatement((yyvsp[(7) - (8)].liststatement_)));  ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 769 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DFunction(reverseListFunctionSpecifier((yyvsp[(1) - (9)].listfunctionspecifier_)), (yyvsp[(2) - (9)].type_), (yyvsp[(3) - (9)].string_), (yyvsp[(5) - (9)].listparameterdeclaration_), reverseListStatement((yyvsp[(8) - (9)].liststatement_)));  ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 770 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DOperator(reverseListFunctionSpecifier((yyvsp[(1) - (9)].listfunctionspecifier_)), (yyvsp[(2) - (9)].type_), (yyvsp[(3) - (9)].operatorname_), (yyvsp[(5) - (9)].listparameterdeclaration_), reverseListStatement((yyvsp[(8) - (9)].liststatement_)));  ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 771 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DOperatorInfo((yyvsp[(1) - (2)].operatortrait_));  ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 772 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DTypeDecl(reverseListTypeSpecifier((yyvsp[(1) - (5)].listtypespecifier_)), (yyvsp[(3) - (5)].type_), (yyvsp[(4) - (5)].string_));  ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 773 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DExtern((yyvsp[(2) - (2)].prototype_));  ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 774 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DIVariable((yyvsp[(1) - (5)].type_), (yyvsp[(2) - (5)].string_), (yyvsp[(4) - (5)].expression_));  ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 775 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DVariable((yyvsp[(1) - (3)].type_), (yyvsp[(2) - (3)].string_));  ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 777 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.prototype_) = new PFunction(reverseListFunctionSpecifier((yyvsp[(1) - (7)].listfunctionspecifier_)), (yyvsp[(2) - (7)].type_), (yyvsp[(3) - (7)].string_), (yyvsp[(5) - (7)].listparameterdeclaration_));  ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 779 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONOp((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 780 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLnot();  ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 781 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONPreInc();  ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 782 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONPreDec();  ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 783 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONBnot();  ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 784 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONMul();  ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 785 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONDiv();  ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 786 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONMod();  ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 787 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONAdd();  ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 788 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONSub();  ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 789 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLSh();  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 790 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONRSh();  ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 791 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLT();  ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 792 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONGT();  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 793 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLE();  ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 794 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONGE();  ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 795 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONE();  ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 796 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONNE();  ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 797 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONBand();  ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 798 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONBor();  ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 799 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONBxor();  ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 800 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLand();  ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 801 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLor();  ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 802 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLxor();  ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 804 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatortrait_) = new OTIdentity((yyvsp[(2) - (4)].type_), (yyvsp[(3) - (4)].operatorname_), (yyvsp[(4) - (4)].int_));  ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 806 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSEntryPoint();  ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 807 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSPure();  ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 808 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSInline();  ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 809 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSAssociative();  ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 810 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSCommutative();  ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 811 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSAntiCommutative();  ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 812 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSInverse((yyvsp[(2) - (2)].operatorname_));  ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 813 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSSelfInverse();  ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 815 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.variablespecifier_) = new VSConst();  ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 817 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.typespecifier_) = new TSAlign((yyvsp[(3) - (4)].int_));  ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 819 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.type_) = new TByte();  ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 820 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.type_) = new TCustom((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 821 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.type_) = new TFixedArray((yyvsp[(1) - (4)].type_), (yyvsp[(3) - (4)].int_));  ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 822 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.type_) = new TGenericArray((yyvsp[(1) - (3)].type_));  ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 823 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.type_) = new TStruct(reverseListStructMemberDeclaration((yyvsp[(2) - (4)].liststructmemberdeclaration_)));  ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 825 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.structmemberdeclaration_) = new SMDMemberDeclaration((yyvsp[(1) - (3)].type_), (yyvsp[(2) - (3)].string_));  ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 826 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.structmemberdeclaration_) = new SMDAnonMemberDeclaration((yyvsp[(1) - (2)].type_));  ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 828 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.parameterdeclaration_) = new PDAutoParameter(reverseListVariableSpecifier((yyvsp[(1) - (2)].listvariablespecifier_)), (yyvsp[(2) - (2)].string_));  ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 829 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.parameterdeclaration_) = new PDTypedParameter(reverseListVariableSpecifier((yyvsp[(1) - (3)].listvariablespecifier_)), (yyvsp[(2) - (3)].type_), (yyvsp[(3) - (3)].string_));  ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 831 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SReturn((yyvsp[(2) - (3)].expression_));  ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 832 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SExpression((yyvsp[(1) - (2)].expression_));  ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 833 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SScope(reverseListStatement((yyvsp[(2) - (3)].liststatement_)));  ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 834 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SIf((yyvsp[(3) - (7)].expression_), reverseListStatement((yyvsp[(6) - (7)].liststatement_)));  ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 835 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SIfElse((yyvsp[(3) - (11)].expression_), reverseListStatement((yyvsp[(6) - (11)].liststatement_)), reverseListStatement((yyvsp[(10) - (11)].liststatement_)));  ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 836 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SLoop((yyvsp[(3) - (7)].expression_), reverseListStatement((yyvsp[(6) - (7)].liststatement_)));  ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 837 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SWhile((yyvsp[(3) - (7)].expression_), reverseListStatement((yyvsp[(6) - (7)].liststatement_)));  ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 838 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SUntil((yyvsp[(3) - (7)].expression_), reverseListStatement((yyvsp[(6) - (7)].liststatement_)));  ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 839 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SFor((yyvsp[(3) - (11)].listexpression_), (yyvsp[(5) - (11)].expression_), (yyvsp[(7) - (11)].listexpression_), reverseListStatement((yyvsp[(10) - (11)].liststatement_)));  ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 840 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SForEach((yyvsp[(4) - (10)].string_), (yyvsp[(6) - (10)].expression_), reverseListStatement((yyvsp[(9) - (10)].liststatement_)));  ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 841 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SForAll((yyvsp[(4) - (10)].string_), (yyvsp[(6) - (10)].expression_), reverseListStatement((yyvsp[(9) - (10)].liststatement_)));  ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 842 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SBreak();  ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 843 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SContinue();  ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 844 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SBreakpoint();  ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 845 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SIVariable(reverseListVariableSpecifier((yyvsp[(1) - (6)].listvariablespecifier_)), (yyvsp[(2) - (6)].type_), (yyvsp[(3) - (6)].string_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 846 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SVariable(reverseListVariableSpecifier((yyvsp[(1) - (4)].listvariablespecifier_)), (yyvsp[(2) - (4)].type_), (yyvsp[(3) - (4)].string_));  ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 848 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.rvalue_) = new RVIdent((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 849 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.rvalue_) = new RVQualified((yyvsp[(1) - (3)].string_), (yyvsp[(3) - (3)].rvalue_));  ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 851 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EDouble((yyvsp[(1) - (1)].double_));  ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 852 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EInteger((yyvsp[(1) - (1)].int_));  ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 853 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EString((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 854 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EChar((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 855 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EPi();  ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 856 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ERValue((yyvsp[(1) - (1)].rvalue_));  ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 857 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(2) - (3)].expression_);  ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 859 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EArray((yyvsp[(2) - (3)].listexpression_));  ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 860 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EList((yyvsp[(2) - (3)].listexpression_));  ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 861 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EAComp((yyvsp[(2) - (5)].expression_), (yyvsp[(4) - (5)].listexpression_));  ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 862 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELComp((yyvsp[(2) - (5)].expression_), (yyvsp[(4) - (5)].listexpression_));  ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 863 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ESimpleCall((yyvsp[(1) - (3)].rvalue_));  ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 864 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ECall((yyvsp[(1) - (4)].rvalue_), (yyvsp[(3) - (4)].listexpression_));  ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 865 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EPostInc((yyvsp[(1) - (2)].rvalue_));  ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 866 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EPostDec((yyvsp[(1) - (2)].rvalue_));  ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 867 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAddB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 868 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSubB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 869 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMulB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 870 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdivB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 871 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSdivB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 872 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUremB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 873 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSremB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 874 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAndB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 875 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinOrB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 876 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinXorB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 877 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinShlB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 878 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinLshrB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 879 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAshrB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 880 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNotB((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 881 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNegB((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 882 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCEqB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 883 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCNeB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 884 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCLtB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 885 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCGtB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 886 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCLeB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 887 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCGeB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 888 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 889 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 890 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 891 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 892 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSdiv2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 893 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 894 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSrem2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 895 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAnd2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 896 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinOr2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 897 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinXor2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 898 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinShl2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 899 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinLshr2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 900 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAshr2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 901 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNot2B((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 902 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNeg2B((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 903 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCEq2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 904 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCNe2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 905 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCLt2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 906 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCGt2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 907 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCLe2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 908 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCGe2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 909 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 910 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 911 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 912 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 913 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSdiv4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 914 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 915 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSrem4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 916 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAnd4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 917 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinOr4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 918 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinXor4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 919 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinShl4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 920 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinLshr4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 921 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAshr4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 922 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNot4B((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 923 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNeg4B((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 924 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCEq4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 925 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCNe4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 926 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCLt4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 927 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCGt4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 928 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCLe4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 929 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCGe4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 930 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 931 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 932 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 933 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 934 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSdiv8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 935 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 936 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSrem8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 937 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAnd8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 938 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinOr8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 939 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinXor8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 940 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinShl8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 941 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinLshr8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 942 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAshr8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 943 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNot8B((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 944 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNeg8B((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 945 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCEq8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 946 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCNe8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 947 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCLt8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 948 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCGt8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 949 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCLe8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 950 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinCGe8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 951 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAddB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 952 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSubB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 953 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMulB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 954 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdivB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 955 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSdivB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 956 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUremB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 957 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSremB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 958 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinShlB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 959 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinLshrB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 960 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAshrB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 961 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNegB4V((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 962 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAddB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 963 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSubB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 964 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMulB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 965 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdivB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 966 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSdivB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 967 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUremB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 968 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSremB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 969 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinShlB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 970 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinLshrB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 971 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAshrB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 972 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNegB8V((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 973 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd2F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 974 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub2F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 975 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul2F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 976 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv2F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 977 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem2F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 978 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd4F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 979 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub4F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 980 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul4F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 981 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv4F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 982 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem4F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 983 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd8F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 984 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub8F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 985 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul8F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 986 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv8F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 987 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem8F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 988 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd4F4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 989 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub4F4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 990 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul4F4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 991 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv4F4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 992 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem4F4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 993 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 995 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELnot((yyvsp[(2) - (2)].expression_));  ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 996 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EPreInc((yyvsp[(2) - (2)].rvalue_));  ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 997 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EPreDec((yyvsp[(2) - (2)].rvalue_));  ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 998 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ENeg((yyvsp[(2) - (2)].expression_));  ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 999 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EBnot((yyvsp[(2) - (2)].expression_));  ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1000 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EPos((yyvsp[(2) - (2)].expression_));  ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1001 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EUnaryOperator((yyvsp[(1) - (2)].string_), (yyvsp[(2) - (2)].expression_));  ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1002 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1004 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EMul((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1005 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EDiv((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1006 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EMod((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1007 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1009 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EAdd((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1010 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ESub((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1011 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1013 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELSh((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1014 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ERSh((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1015 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EBinaryOperator((yyvsp[(1) - (3)].expression_), (yyvsp[(2) - (3)].string_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1016 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1018 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELT((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1019 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EGT((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1020 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELE((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1021 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EGE((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1022 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1024 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EE((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1025 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ENE((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1026 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1028 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EBand((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1029 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EBor((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1030 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EBxor((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1031 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1033 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELand((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1034 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELor((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1035 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELxor((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1036 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1038 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EConditional((yyvsp[(1) - (5)].expression_), (yyvsp[(3) - (5)].expression_), (yyvsp[(5) - (5)].expression_));  ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1039 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ETernaryOperator((yyvsp[(1) - (5)].expression_), (yyvsp[(2) - (5)].operatorname_), (yyvsp[(3) - (5)].expression_), (yyvsp[(4) - (5)].operatorname_), (yyvsp[(5) - (5)].expression_));  ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1040 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1042 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1043 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EAddAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1044 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ESubAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1045 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EMulAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1046 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EDivAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1047 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EModAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1048 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EAndAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1049 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EOrAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1050 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EXorAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1051 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELShAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1052 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ERShAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1053 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1055 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listtldeclaration_) = 0;  ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1056 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listtldeclaration_) = new ListTLDeclaration((yyvsp[(2) - (2)].tldeclaration_), (yyvsp[(1) - (2)].listtldeclaration_));  ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1058 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listdeclaration_) = 0;  ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1059 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listdeclaration_) = new ListDeclaration((yyvsp[(2) - (2)].declaration_), (yyvsp[(1) - (2)].listdeclaration_));  ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1061 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.liststatement_) = 0;  ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1062 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.liststatement_) = new ListStatement((yyvsp[(2) - (2)].statement_), (yyvsp[(1) - (2)].liststatement_));  ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1064 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listtypespecifier_) = 0;  ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1065 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listtypespecifier_) = new ListTypeSpecifier((yyvsp[(2) - (2)].typespecifier_), (yyvsp[(1) - (2)].listtypespecifier_));  ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1067 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listfunctionspecifier_) = 0;  ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1068 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listfunctionspecifier_) = new ListFunctionSpecifier((yyvsp[(2) - (2)].functionspecifier_), (yyvsp[(1) - (2)].listfunctionspecifier_));  ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1070 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listvariablespecifier_) = 0;  ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1071 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listvariablespecifier_) = new ListVariableSpecifier((yyvsp[(2) - (2)].variablespecifier_), (yyvsp[(1) - (2)].listvariablespecifier_));  ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1073 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.liststructmemberdeclaration_) = 0;  ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1074 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.liststructmemberdeclaration_) = new ListStructMemberDeclaration((yyvsp[(2) - (2)].structmemberdeclaration_), (yyvsp[(1) - (2)].liststructmemberdeclaration_));  ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1076 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listparameterdeclaration_) = 0;  ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1077 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listparameterdeclaration_) = new ListParameterDeclaration((yyvsp[(1) - (1)].parameterdeclaration_));  ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1078 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listparameterdeclaration_) = new ListParameterDeclaration((yyvsp[(1) - (3)].parameterdeclaration_), (yyvsp[(3) - (3)].listparameterdeclaration_));  ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1080 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listexpression_) = new ListExpression((yyvsp[(1) - (1)].expression_));  ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1081 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listexpression_) = new ListExpression((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].listexpression_));  ;}
    break;



/* Line 1455 of yacc.c  */
#line 5597 "parse.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



