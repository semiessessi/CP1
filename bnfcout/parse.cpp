
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
     _INTEGER_ = 440,
     _DOUBLE_ = 441,
     _IDENT_ = 442
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
#line 809 "parse.cpp"
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
#line 834 "parse.cpp"

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
#define YYLAST   3498

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  188
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  258
/* YYNRULES -- Number of states.  */
#define YYNSTATES  921

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   442

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
     185,   186,   187
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
     156,   158,   160,   165,   170,   174,   177,   180,   184,   188,
     191,   195,   203,   215,   223,   231,   239,   251,   262,   273,
     276,   279,   282,   288,   292,   294,   298,   300,   302,   304,
     306,   308,   310,   314,   318,   323,   326,   329,   336,   343,
     350,   357,   364,   371,   378,   385,   392,   399,   406,   413,
     420,   425,   430,   437,   444,   451,   458,   465,   472,   479,
     486,   493,   500,   507,   514,   521,   526,   531,   538,   545,
     552,   559,   566,   573,   580,   587,   594,   601,   608,   615,
     622,   627,   632,   639,   646,   653,   660,   667,   674,   681,
     688,   695,   702,   709,   716,   723,   728,   733,   740,   747,
     754,   761,   768,   775,   782,   789,   796,   803,   808,   815,
     822,   829,   836,   843,   850,   857,   864,   871,   878,   883,
     890,   897,   904,   911,   918,   925,   932,   939,   946,   953,
     960,   967,   974,   981,   988,   995,  1002,  1009,  1016,  1023,
    1025,  1028,  1031,  1034,  1037,  1040,  1043,  1046,  1048,  1052,
    1056,  1060,  1062,  1066,  1070,  1072,  1076,  1080,  1084,  1086,
    1090,  1094,  1098,  1102,  1104,  1108,  1112,  1114,  1118,  1122,
    1126,  1128,  1132,  1136,  1140,  1142,  1148,  1154,  1156,  1160,
    1164,  1168,  1172,  1176,  1180,  1184,  1188,  1192,  1196,  1200,
    1202,  1203,  1206,  1207,  1210,  1211,  1214,  1215,  1218,  1219,
    1222,  1223,  1226,  1227,  1230,  1231,  1233,  1237,  1239
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     189,     0,    -1,   215,   216,    -1,    91,   187,     4,    -1,
      86,   187,     4,    -1,   111,   187,     5,   216,     6,    -1,
     219,   187,     7,   222,     8,     5,   217,     6,    -1,   219,
     198,   187,     7,   222,     8,     5,   217,     6,    -1,   219,
     198,   193,     7,   222,     8,     5,   217,     6,    -1,   194,
       4,    -1,   218,   163,   198,   187,     4,    -1,    87,   192,
      -1,   198,   187,     9,   214,     4,    -1,   198,   187,     4,
      -1,   219,   198,   187,     7,   222,     8,     4,    -1,   182,
      -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,    14,
      -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,
      -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    31,    -1,    32,    -1,    89,   198,   193,
     185,    -1,    85,    -1,   127,    -1,    93,    -1,    72,    -1,
      76,    -1,    65,    -1,    94,   193,    -1,   140,    -1,    77,
      -1,    59,    21,   185,    22,    -1,    75,    -1,   187,    -1,
     198,    33,   185,    34,    -1,     5,   221,     4,     6,    -1,
     198,   187,     4,    -1,   198,     4,    -1,   220,   187,    -1,
     220,   198,   187,    -1,   133,   214,     4,    -1,   214,     4,
      -1,     5,   217,     6,    -1,    90,     7,   214,     8,     5,
     217,     6,    -1,    90,     7,   214,     8,     5,   217,     6,
      84,     5,   217,     6,    -1,   132,     7,   214,     8,     5,
     217,     6,    -1,   177,     7,   214,     8,     5,   217,     6,
      -1,   170,     7,   214,     8,     5,   217,     6,    -1,    88,
       7,   223,     4,   214,     4,   223,     8,     5,   217,     6,
      -1,    88,    83,     7,   187,    92,   214,     8,     5,   217,
       6,    -1,    88,    60,     7,   187,    92,   214,     8,     5,
     217,     6,    -1,    73,     4,    -1,    78,     4,    -1,    74,
       4,    -1,   198,   187,     9,   214,     4,    -1,   198,   187,
       4,    -1,   187,    -1,   187,    35,   202,    -1,   186,    -1,
     185,    -1,   183,    -1,   184,    -1,   126,    -1,   202,    -1,
       7,   214,     8,    -1,   202,     7,     8,    -1,   202,     7,
     223,     8,    -1,   202,    11,    -1,   202,    12,    -1,    56,
       7,   214,    36,   214,     8,    -1,   160,     7,   214,    36,
     214,     8,    -1,   108,     7,   214,    36,   214,     8,    -1,
     167,     7,   214,    36,   214,     8,    -1,   137,     7,   214,
      36,   214,     8,    -1,   174,     7,   214,    36,   214,     8,
      -1,   150,     7,   214,    36,   214,     8,    -1,    64,     7,
     214,    36,   214,     8,    -1,   125,     7,   214,    36,   214,
       8,    -1,   181,     7,   214,    36,   214,     8,    -1,   144,
       7,   214,    36,   214,     8,    -1,    98,     7,   214,    36,
     214,     8,    -1,    69,     7,   214,    36,   214,     8,    -1,
     121,     7,   214,     8,    -1,   115,     7,   214,     8,    -1,
      49,     7,   214,    36,   214,     8,    -1,   153,     7,   214,
      36,   214,     8,    -1,   101,     7,   214,    36,   214,     8,
      -1,   164,     7,   214,    36,   214,     8,    -1,   134,     7,
     214,    36,   214,     8,    -1,   171,     7,   214,    36,   214,
       8,    -1,   147,     7,   214,    36,   214,     8,    -1,    61,
       7,   214,    36,   214,     8,    -1,   122,     7,   214,    36,
     214,     8,    -1,   178,     7,   214,    36,   214,     8,    -1,
     141,     7,   214,    36,   214,     8,    -1,    95,     7,   214,
      36,   214,     8,    -1,    66,     7,   214,    36,   214,     8,
      -1,   118,     7,   214,     8,    -1,   112,     7,   214,     8,
      -1,    51,     7,   214,    36,   214,     8,    -1,   155,     7,
     214,    36,   214,     8,    -1,   103,     7,   214,    36,   214,
       8,    -1,   165,     7,   214,    36,   214,     8,    -1,   135,
       7,   214,    36,   214,     8,    -1,   172,     7,   214,    36,
     214,     8,    -1,   148,     7,   214,    36,   214,     8,    -1,
      62,     7,   214,    36,   214,     8,    -1,   123,     7,   214,
      36,   214,     8,    -1,   179,     7,   214,    36,   214,     8,
      -1,   142,     7,   214,    36,   214,     8,    -1,    96,     7,
     214,    36,   214,     8,    -1,    67,     7,   214,    36,   214,
       8,    -1,   119,     7,   214,     8,    -1,   113,     7,   214,
       8,    -1,    54,     7,   214,    36,   214,     8,    -1,   158,
       7,   214,    36,   214,     8,    -1,   106,     7,   214,    36,
     214,     8,    -1,   166,     7,   214,    36,   214,     8,    -1,
     136,     7,   214,    36,   214,     8,    -1,   173,     7,   214,
      36,   214,     8,    -1,   149,     7,   214,    36,   214,     8,
      -1,    63,     7,   214,    36,   214,     8,    -1,   124,     7,
     214,    36,   214,     8,    -1,   180,     7,   214,    36,   214,
       8,    -1,   143,     7,   214,    36,   214,     8,    -1,    97,
       7,   214,    36,   214,     8,    -1,    68,     7,   214,    36,
     214,     8,    -1,   120,     7,   214,     8,    -1,   114,     7,
     214,     8,    -1,    57,     7,   214,    36,   214,     8,    -1,
     161,     7,   214,    36,   214,     8,    -1,   109,     7,   214,
      36,   214,     8,    -1,   168,     7,   214,    36,   214,     8,
      -1,   138,     7,   214,    36,   214,     8,    -1,   175,     7,
     214,    36,   214,     8,    -1,   151,     7,   214,    36,   214,
       8,    -1,   145,     7,   214,    36,   214,     8,    -1,    99,
       7,   214,    36,   214,     8,    -1,    70,     7,   214,    36,
     214,     8,    -1,   116,     7,   214,     8,    -1,    58,     7,
     214,    36,   214,     8,    -1,   162,     7,   214,    36,   214,
       8,    -1,   110,     7,   214,    36,   214,     8,    -1,   169,
       7,   214,    36,   214,     8,    -1,   139,     7,   214,    36,
     214,     8,    -1,   176,     7,   214,    36,   214,     8,    -1,
     152,     7,   214,    36,   214,     8,    -1,   146,     7,   214,
      36,   214,     8,    -1,   100,     7,   214,    36,   214,     8,
      -1,    71,     7,   214,    36,   214,     8,    -1,   117,     7,
     214,     8,    -1,    50,     7,   214,    36,   214,     8,    -1,
     154,     7,   214,    36,   214,     8,    -1,   102,     7,   214,
      36,   214,     8,    -1,    79,     7,   214,    36,   214,     8,
      -1,   128,     7,   214,    36,   214,     8,    -1,    52,     7,
     214,    36,   214,     8,    -1,   156,     7,   214,    36,   214,
       8,    -1,   104,     7,   214,    36,   214,     8,    -1,    80,
       7,   214,    36,   214,     8,    -1,   129,     7,   214,    36,
     214,     8,    -1,    55,     7,   214,    36,   214,     8,    -1,
     159,     7,   214,    36,   214,     8,    -1,   107,     7,   214,
      36,   214,     8,    -1,    82,     7,   214,    36,   214,     8,
      -1,   131,     7,   214,    36,   214,     8,    -1,    53,     7,
     214,    36,   214,     8,    -1,   157,     7,   214,    36,   214,
       8,    -1,   105,     7,   214,    36,   214,     8,    -1,    81,
       7,   214,    36,   214,     8,    -1,   130,     7,   214,    36,
     214,     8,    -1,   203,    -1,    10,   204,    -1,    11,   202,
      -1,    12,   202,    -1,    18,   204,    -1,    13,   204,    -1,
      17,   204,    -1,   182,   204,    -1,   204,    -1,   206,    14,
     205,    -1,   206,    15,   205,    -1,   206,    16,   205,    -1,
     205,    -1,   207,    17,   206,    -1,   207,    18,   206,    -1,
     206,    -1,   208,    19,   207,    -1,   208,    20,   207,    -1,
     208,   182,   207,    -1,   207,    -1,   208,    21,   208,    -1,
     208,    22,   208,    -1,   208,    23,   208,    -1,   208,    24,
     208,    -1,   208,    -1,   209,    25,   209,    -1,   209,    26,
     209,    -1,   209,    -1,   211,    27,   210,    -1,   211,    28,
     210,    -1,   211,    29,   210,    -1,   210,    -1,   211,    30,
     211,    -1,   211,    31,   211,    -1,   211,    32,   211,    -1,
     211,    -1,   212,    37,   212,    38,   212,    -1,   212,   193,
     212,   193,   212,    -1,   212,    -1,   202,     9,   214,    -1,
     202,    39,   214,    -1,   202,    40,   214,    -1,   202,    41,
     214,    -1,   202,    42,   214,    -1,   202,    43,   214,    -1,
     202,    44,   214,    -1,   202,    45,   214,    -1,   202,    46,
     214,    -1,   202,    47,   214,    -1,   202,    48,   214,    -1,
     213,    -1,    -1,   215,   190,    -1,    -1,   216,   191,    -1,
      -1,   217,   201,    -1,    -1,   218,   197,    -1,    -1,   219,
     195,    -1,    -1,   220,   196,    -1,    -1,   221,   199,    -1,
      -1,   200,    -1,   200,    36,   222,    -1,   214,    -1,   214,
      36,   223,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   737,   737,   739,   740,   742,   743,   744,   745,   746,
     747,   748,   749,   750,   752,   754,   755,   756,   757,   758,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   775,   776,   777,   779,
     781,   782,   783,   784,   785,   786,   787,   788,   790,   792,
     794,   795,   796,   797,   799,   800,   802,   803,   805,   806,
     807,   808,   809,   810,   811,   812,   813,   814,   815,   816,
     817,   818,   819,   820,   822,   823,   825,   826,   827,   828,
     829,   830,   831,   833,   834,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,   851,   852,   853,   854,   855,   856,   857,   858,   859,
     860,   861,   862,   863,   864,   865,   866,   867,   868,   869,
     870,   871,   872,   873,   874,   875,   876,   877,   878,   879,
     880,   881,   882,   883,   884,   885,   886,   887,   888,   889,
     890,   891,   892,   893,   894,   895,   896,   897,   898,   899,
     900,   901,   902,   903,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   918,   919,
     920,   921,   922,   923,   924,   925,   926,   927,   928,   929,
     930,   931,   932,   933,   934,   935,   936,   937,   938,   939,
     941,   942,   943,   944,   945,   946,   947,   948,   950,   951,
     952,   953,   955,   956,   957,   959,   960,   961,   962,   964,
     965,   966,   967,   968,   970,   971,   972,   974,   975,   976,
     977,   979,   980,   981,   982,   984,   985,   986,   988,   989,
     990,   991,   992,   993,   994,   995,   996,   997,   998,   999,
    1001,  1002,  1004,  1005,  1007,  1008,  1010,  1011,  1013,  1014,
    1016,  1017,  1019,  1020,  1022,  1023,  1024,  1026,  1027
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
  "_SYMB_178", "_SYMB_179", "_SYMB_180", "_INTEGER_", "_DOUBLE_",
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
     435,   436,   437,   438,   439,   440,   441,   442
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   188,   189,   190,   190,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   192,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   194,
     195,   195,   195,   195,   195,   195,   195,   195,   196,   197,
     198,   198,   198,   198,   199,   199,   200,   200,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   202,   202,   203,   203,   203,   203,
     203,   203,   203,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     205,   205,   205,   205,   205,   205,   205,   205,   206,   206,
     206,   206,   207,   207,   207,   208,   208,   208,   208,   209,
     209,   209,   209,   209,   210,   210,   210,   211,   211,   211,
     211,   212,   212,   212,   212,   213,   213,   213,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     215,   215,   216,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   222,   223,   223
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     3,     5,     8,     9,     9,     2,
       5,     2,     5,     3,     7,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     4,
       1,     1,     4,     4,     3,     2,     2,     3,     3,     2,
       3,     7,    11,     7,     7,     7,    11,    10,    10,     2,
       2,     2,     5,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     2,     2,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       4,     4,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     4,     4,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       4,     4,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     4,     4,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     4,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     4,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     1,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     3,     1,     5,     5,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     240,     0,   242,     1,     0,     0,   241,   248,     0,     0,
     252,    50,   248,     0,     0,    51,   243,     0,     0,     0,
       0,     4,     3,     0,    11,     0,     0,     0,     9,     0,
       0,     0,     0,   247,    45,    43,    44,    40,    42,     0,
      41,    47,    51,   249,     0,     0,     0,   253,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    15,     0,   242,     0,    13,     0,     0,     0,
      46,   250,     0,     0,    53,    55,     0,     0,    39,   248,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    77,    76,    74,    81,   189,   197,
     201,   204,   208,   213,   216,   220,   224,   227,   239,     0,
       0,     0,   255,     0,     0,   250,   250,    54,   250,     5,
       0,    81,   190,   191,   192,   194,   195,   193,     0,     0,
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
     196,     0,     0,     0,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    49,
      10,   250,    48,    51,   251,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,    83,   257,     0,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   198,   199,
     200,   202,   203,   205,   206,   209,   210,   211,   212,   207,
     214,   215,   217,   218,   219,   221,   222,   223,     0,     0,
     256,    57,   244,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,   131,   146,   101,
     157,   168,   115,   130,   145,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,   244,   244,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,   225,
     226,   244,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,   245,     0,     0,     0,   102,   169,
     117,   174,   184,   132,   179,    87,   147,   158,   109,   124,
     139,    94,   114,   129,   144,    99,   156,   167,   172,   177,
     187,   182,   113,   128,   143,    98,   155,   166,   104,   171,
     119,   176,   186,   134,   181,    89,   149,   160,   110,   125,
     140,    95,   173,   178,   188,   183,   106,   121,   136,    91,
     151,   162,   112,   127,   142,    97,   154,   165,   108,   123,
     138,    93,   153,   164,   103,   170,   118,   175,   185,   133,
     180,    88,   148,   159,   105,   120,   135,    90,   150,   161,
     107,   122,   137,    92,   152,   163,   111,   126,   141,    96,
       0,    69,    71,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,     7,     8,    60,     0,     0,     0,
       0,     0,    58,     0,     0,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   244,   244,
     244,   244,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,    63,    65,    64,     0,   244,   244,
       0,   244,     0,     0,   244,     0,    68,    67,     0,    66,
      62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     6,    16,    24,    73,    17,    43,   384,    33,
     753,    47,   222,   754,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   755,     2,     7,   642,
      19,    20,   223,    23,   224,   496
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -585
static const yytype_int16 yypact[] =
{
    -585,    13,   -48,  -585,  -158,  -134,  -585,   503,    51,    54,
    -585,  -585,  -585,   318,  -103,  -585,  -585,    93,   -32,   -55,
     263,  -585,  -585,   312,  -585,   313,   681,    98,  -585,   -81,
      47,    84,   318,  -585,  -585,  -585,  -585,  -585,  -585,   972,
    -585,  -585,    99,  -585,   398,   101,   121,  -585,   123,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,   -76,  -585,    76,  -585,  3155,   -73,   126,
    -585,   103,   106,   107,  -585,  -585,   111,   110,  -585,   558,
    -585,  3155,  3311,   -69,   -69,  3311,  3311,  3311,   112,   113,
     114,   115,   116,   117,   119,   122,   124,   125,   128,   129,
     130,   131,   132,   134,   135,   136,   137,   138,   304,   305,
     307,   322,   324,   325,   326,   327,   329,   330,   333,   334,
     335,   336,   337,   338,   339,   342,   343,   344,   346,   347,
     348,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,  -585,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   372,   373,   374,   375,   376,   377,   379,   384,
     388,   389,   390,   392,   393,   394,   395,   397,   425,   426,
     427,   428,   429,   430,   431,   432,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   444,   445,   447,   448,   449,
     450,  3311,  -585,  -585,  -585,  -585,   105,    35,  -585,  -585,
    -585,    12,    45,   127,    66,  -585,     4,   738,  -585,   315,
     299,   401,    92,   317,   494,   103,   103,  -585,   103,  -585,
     499,    38,  -585,  -585,  -585,  -585,  -585,  -585,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    -585,   -69,  2974,  3155,  -585,  -585,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  -585,  -585,
    -585,   103,  -585,     1,  -585,   314,   321,   557,   560,   561,
    -585,    97,   422,   534,   535,   536,   537,   538,   540,   541,
     543,   545,   546,   547,   548,   550,   551,   552,   553,   555,
     559,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   579,   580,   582,
     583,   585,   586,   588,   589,   612,   613,   614,   615,   616,
     617,   590,   591,   592,   593,   594,   595,   596,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   610,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   627,
     628,   629,   631,   632,   634,   635,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   653,  -585,  -585,   679,   708,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,    12,    12,    45,    45,   133,   133,   133,   133,    45,
    -585,  -585,  -585,  -585,  -585,    40,    40,    40,    96,   972,
    -585,  -585,  -585,   712,   713,   715,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  3155,  -585,
    3155,  3155,   780,  -585,  -585,  -585,   714,   716,   717,   718,
     719,   720,   721,   722,   723,   724,   725,   726,   727,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   739,   763,
     764,   765,   766,   768,   770,   771,   774,   781,   786,   787,
     788,   793,   794,   795,   796,   797,   798,   799,   800,   803,
     804,   805,   806,   807,   809,   810,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   831,   832,   837,   844,
     848,   849,   856,   857,   858,   859,   861,   863,   864,   865,
     866,   883,   899,   935,   964,   969,   970,   971,   997,   998,
     999,  1000,  1001,  1002,  1003,  1014,  1015,  1020,  -585,  -585,
    -585,   742,  -585,   784,   967,  1031,    10,  1032,  1033,  3155,
    1039,  1040,   -27,   319,  -585,  1044,   963,  1146,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    1329,  -585,  -585,  -585,  3155,  1042,  1043,  3155,  3155,  1048,
    3155,  3155,    48,  -585,  -585,  -585,  -585,  1050,   461,   462,
    1047,  1049,  -585,  1066,  1082,  -585,  3155,  3155,  1011,  1034,
    1051,  1150,  1155,  1156,  1158,  1161,  3155,  3155,  -585,  -585,
    -585,  -585,  -585,  3155,  1159,  1160,  1512,  1695,  1878,  2061,
    1162,  1164,  1166,   636,  -585,  -585,  -585,  1167,  -585,  -585,
    1168,  -585,  2244,  2427,  -585,  2610,  -585,  -585,  2793,  -585,
    -585
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -585,  -585,  -585,  -585,  -585,    46,  -585,  -585,  -585,  -585,
      41,  -585,  -585,  -585,   -74,  -585,   -85,  -317,  -288,  -337,
    -277,  -267,  -276,  -275,  -361,  -585,   -77,  -585,   578,  -584,
    -585,   711,  -585,  -585,  -223,  -573
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -255
static const yytype_int16 yytable[] =
{
     219,    29,   387,   388,    31,   389,   -51,   232,   341,   -56,
     235,   236,   237,     3,   230,   528,   529,   854,   231,   233,
     234,   231,   231,   231,   513,   514,   356,   357,   358,     8,
     519,   370,   371,   372,   373,   374,   375,   -56,     4,   508,
     509,   510,   342,     5,   343,   342,   344,   345,    18,   344,
     345,    76,   875,     9,    26,    21,    77,   876,    22,   756,
     757,    44,   359,   360,    46,   738,    48,   370,   371,   372,
     855,   511,   512,    79,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,    27,    80,   515,   516,   517,   518,
      83,   368,   369,   856,   522,   523,   524,    28,   525,   526,
     527,   520,   521,    74,    75,    78,    81,    84,    32,    88,
      90,  -254,   220,   225,   226,   227,   340,   228,   206,   238,
     239,   240,   241,   242,   243,    85,   244,   231,   381,   245,
      18,   246,   247,   536,   640,   248,   249,   250,   251,   252,
     341,   253,   254,   255,   256,   257,   361,   362,   363,   364,
     365,   366,   361,   362,    29,    30,    29,   850,   530,    29,
     -51,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   377,   385,   495,   497,   493,    10,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   739,
     740,   867,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   896,   897,   898,   899,    86,   367,
      87,   258,   259,   221,   260,   367,    45,    10,    10,   378,
     900,   379,    10,    10,   912,   913,   532,   915,    34,   261,
     918,   262,   263,   264,   265,    35,   266,   267,    11,    36,
     268,   269,   270,   271,   272,   273,   274,    29,    37,   275,
     276,   277,    29,   278,   279,   280,    38,    39,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,    34,   301,
     302,   303,   304,   305,   306,    35,   307,    11,    11,    36,
      40,   308,    11,    11,   382,   309,   310,   311,    37,   312,
     313,   314,   315,    41,   316,   380,    38,    39,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    29,   317,   318,   319,   320,   321,   322,   323,   324,
      40,   325,   326,   327,   328,   329,   330,   331,   332,   333,
      42,   334,   335,    41,   336,   337,   338,   339,   537,   646,
     647,   648,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,   683,   684,   685,    15,
      15,   531,   386,    -2,   383,    15,   862,   390,    10,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,   709,   710,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   724,   725,   726,
     727,   728,   729,   730,   731,   732,   733,   734,   735,   736,
     737,   495,  -246,    10,   229,   533,   231,   231,   534,   535,
     538,   539,   540,   541,   542,   641,   543,   544,    11,   545,
      72,   546,   547,   548,   549,    82,   550,   551,   552,   553,
      12,   554,    13,   576,   577,   555,   578,   579,   556,   557,
     558,   559,   560,   561,   562,   563,   564,   565,   566,   567,
     568,   569,   570,   571,    14,   572,   573,  -246,   574,   575,
     580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
     590,   591,   592,    11,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,    12,   604,    13,   878,   879,
       0,     0,    89,     0,   605,   606,   607,   608,   609,   610,
     611,   612,   613,   614,   615,   616,  -246,   617,   618,    14,
     619,   620,   859,   621,   622,   623,   624,   625,   626,   627,
     628,   629,   630,   631,   632,   633,   634,   635,   636,   637,
      15,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    29,   638,   639,   643,   644,   645,
     910,  -246,   758,    25,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,    15,  -252,   780,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,   781,   782,   783,   784,   376,   785,   495,   786,   787,
     870,   871,   788,   873,   874,   741,   742,    91,   851,   789,
      92,    93,    94,    95,   790,   791,   792,    96,    97,   884,
     885,   793,   794,   795,   796,   797,   798,   799,   800,   894,
     895,   801,   802,   803,   804,   805,   495,   806,   807,   808,
     809,   810,   811,   812,   813,   814,   815,   816,   817,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   818,
     819,   108,   109,   110,   111,   820,   112,   113,   114,   115,
     116,   117,   821,   743,   744,    11,   822,   823,   745,   118,
     119,   120,   121,    72,   824,   825,   826,   827,   746,   828,
     747,   829,   830,   831,   832,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   833,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   834,   153,   154,
     155,   156,   748,   749,   157,   158,   159,   160,   161,   162,
      72,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   835,   185,   186,   187,   188,   189,   190,
     750,   191,   192,   193,   194,   195,   196,   751,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   752,   741,   864,
      91,   852,   836,    92,    93,    94,    95,   837,   838,   839,
      96,    97,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,   840,   841,   842,   843,   844,
     845,   846,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   847,   848,   108,   109,   110,   111,   849,   112,
     113,   114,   115,   116,   117,   853,   743,   744,    11,   857,
     858,   745,   118,   119,   120,   121,   860,   861,   863,   868,
     869,   746,   872,   747,   877,   880,   888,   881,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   882,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     883,   153,   154,   155,   156,   748,   749,   157,   158,   159,
     160,   161,   162,   886,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   887,   185,   186,   187,
     188,   189,   190,   750,   191,   192,   193,   194,   195,   196,
     751,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     752,   741,   865,    91,    72,   889,    92,    93,    94,    95,
     890,   891,   892,    96,    97,   893,     0,   901,   902,   908,
     907,   909,   911,   914,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,     0,   108,   109,   110,
     111,     0,   112,   113,   114,   115,   116,   117,     0,   743,
     744,    11,     0,     0,   745,   118,   119,   120,   121,     0,
       0,     0,     0,     0,   746,     0,   747,     0,     0,     0,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,   155,   156,   748,   749,
     157,   158,   159,   160,   161,   162,     0,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,     0,
     185,   186,   187,   188,   189,   190,   750,   191,   192,   193,
     194,   195,   196,   751,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   752,   741,   866,    91,     0,     0,    92,
      93,    94,    95,     0,     0,     0,    96,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,     0,     0,
     108,   109,   110,   111,     0,   112,   113,   114,   115,   116,
     117,     0,   743,   744,    11,     0,     0,   745,   118,   119,
     120,   121,     0,     0,     0,     0,     0,   746,     0,   747,
       0,     0,     0,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,     0,   153,   154,   155,
     156,   748,   749,   157,   158,   159,   160,   161,   162,     0,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,     0,   185,   186,   187,   188,   189,   190,   750,
     191,   192,   193,   194,   195,   196,   751,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   752,   741,   903,    91,
       0,     0,    92,    93,    94,    95,     0,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,     0,     0,   108,   109,   110,   111,     0,   112,   113,
     114,   115,   116,   117,     0,   743,   744,    11,     0,     0,
     745,   118,   119,   120,   121,     0,     0,     0,     0,     0,
     746,     0,   747,     0,     0,     0,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,     0,
     153,   154,   155,   156,   748,   749,   157,   158,   159,   160,
     161,   162,     0,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,     0,   185,   186,   187,   188,
     189,   190,   750,   191,   192,   193,   194,   195,   196,   751,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   752,
     741,   904,    91,     0,     0,    92,    93,    94,    95,     0,
       0,     0,    96,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,     0,     0,   108,   109,   110,   111,
       0,   112,   113,   114,   115,   116,   117,     0,   743,   744,
      11,     0,     0,   745,   118,   119,   120,   121,     0,     0,
       0,     0,     0,   746,     0,   747,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,   156,   748,   749,   157,
     158,   159,   160,   161,   162,     0,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,     0,   185,
     186,   187,   188,   189,   190,   750,   191,   192,   193,   194,
     195,   196,   751,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   752,   741,   905,    91,     0,     0,    92,    93,
      94,    95,     0,     0,     0,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,     0,     0,   108,
     109,   110,   111,     0,   112,   113,   114,   115,   116,   117,
       0,   743,   744,    11,     0,     0,   745,   118,   119,   120,
     121,     0,     0,     0,     0,     0,   746,     0,   747,     0,
       0,     0,     0,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,     0,   153,   154,   155,   156,
     748,   749,   157,   158,   159,   160,   161,   162,     0,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,     0,   185,   186,   187,   188,   189,   190,   750,   191,
     192,   193,   194,   195,   196,   751,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   752,   741,   906,    91,     0,
       0,    92,    93,    94,    95,     0,     0,     0,    96,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,     0,   108,   109,   110,   111,     0,   112,   113,   114,
     115,   116,   117,     0,   743,   744,    11,     0,     0,   745,
     118,   119,   120,   121,     0,     0,     0,     0,     0,   746,
       0,   747,     0,     0,     0,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,   748,   749,   157,   158,   159,   160,   161,
     162,     0,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,     0,   185,   186,   187,   188,   189,
     190,   750,   191,   192,   193,   194,   195,   196,   751,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   752,   741,
     916,    91,     0,     0,    92,    93,    94,    95,     0,     0,
       0,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,     0,     0,   108,   109,   110,   111,     0,
     112,   113,   114,   115,   116,   117,     0,   743,   744,    11,
       0,     0,   745,   118,   119,   120,   121,     0,     0,     0,
       0,     0,   746,     0,   747,     0,     0,     0,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     0,   153,   154,   155,   156,   748,   749,   157,   158,
     159,   160,   161,   162,     0,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,     0,   185,   186,
     187,   188,   189,   190,   750,   191,   192,   193,   194,   195,
     196,   751,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   752,   741,   917,    91,     0,     0,    92,    93,    94,
      95,     0,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,     0,     0,   108,   109,
     110,   111,     0,   112,   113,   114,   115,   116,   117,     0,
     743,   744,    11,     0,     0,   745,   118,   119,   120,   121,
       0,     0,     0,     0,     0,   746,     0,   747,     0,     0,
       0,     0,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,     0,   153,   154,   155,   156,   748,
     749,   157,   158,   159,   160,   161,   162,     0,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
       0,   185,   186,   187,   188,   189,   190,   750,   191,   192,
     193,   194,   195,   196,   751,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   752,   741,   919,    91,     0,     0,
      92,    93,    94,    95,     0,     0,     0,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,     0,
       0,   108,   109,   110,   111,     0,   112,   113,   114,   115,
     116,   117,     0,   743,   744,    11,     0,     0,   745,   118,
     119,   120,   121,     0,     0,     0,     0,     0,   746,     0,
     747,     0,     0,     0,     0,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     0,   153,   154,
     155,   156,   748,   749,   157,   158,   159,   160,   161,   162,
       0,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,     0,   185,   186,   187,   188,   189,   190,
     750,   191,   192,   193,   194,   195,   196,   751,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   752,   741,   920,
      91,     0,     0,    92,    93,    94,    95,     0,     0,     0,
      96,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,     0,     0,   108,   109,   110,   111,     0,   112,
     113,   114,   115,   116,   117,     0,   743,   744,    11,     0,
       0,   745,   118,   119,   120,   121,     0,     0,     0,     0,
       0,   746,     0,   747,     0,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
       0,   153,   154,   155,   156,   748,   749,   157,   158,   159,
     160,   161,   162,     0,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,     0,   185,   186,   187,
     188,   189,   190,   750,   191,   192,   193,   194,   195,   196,
     751,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     752,    91,   494,     0,    92,    93,    94,    95,     0,     0,
       0,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,     0,     0,   108,   109,   110,   111,     0,
     112,   113,   114,   115,   116,   117,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     0,   153,   154,   155,   156,     0,     0,   157,   158,
     159,   160,   161,   162,     0,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,     0,   185,   186,
     187,   188,   189,   190,     0,   191,   192,   193,   194,   195,
     196,     0,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,    91,     0,     0,    92,    93,    94,    95,     0,
       0,     0,    96,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,     0,     0,   108,   109,   110,   111,
       0,   112,   113,   114,   115,   116,   117,     0,     0,     0,
       0,     0,     0,     0,   118,   119,   120,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,   156,     0,     0,   157,
     158,   159,   160,   161,   162,     0,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,    91,   185,
     186,   187,   188,   189,   190,     0,   191,   192,   193,   194,
     195,   196,     0,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,     0,   108,   109,   110,   111,     0,   112,   113,   114,
     115,   116,   117,     0,     0,     0,     0,     0,     0,     0,
     118,   119,   120,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,     0,     0,   157,   158,   159,   160,   161,
     162,     0,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,     0,   185,   186,   187,   188,   189,
     190,     0,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   199,   200,     0,   202,   203,   204,   205,   206
};

static const yytype_int16 yycheck[] =
{
      77,    33,   225,   226,    59,   228,    33,    92,    35,     8,
      95,    96,    97,     0,    91,   376,   377,     7,    92,    93,
      94,    95,    96,    97,   361,   362,    14,    15,    16,   187,
     367,    27,    28,    29,    30,    31,    32,    36,    86,   356,
     357,   358,     7,    91,     9,     7,    11,    12,     7,    11,
      12,     4,     4,   187,    13,     4,     9,     9,     4,   643,
     644,    20,    17,    18,    23,   638,    25,    27,    28,    29,
      60,   359,   360,    32,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,   187,    39,   363,   364,   365,   366,
      44,    25,    26,    83,   370,   371,   372,     4,   373,   374,
     375,   368,   369,     5,   185,    21,     7,     6,   163,   185,
      34,     8,   185,     7,     7,     4,   201,     7,   187,     7,
       7,     7,     7,     7,     7,     4,     7,   201,    36,     7,
      89,     7,     7,    36,    38,     7,     7,     7,     7,     7,
      35,     7,     7,     7,     7,     7,    19,    20,    21,    22,
      23,    24,    19,    20,    33,   187,    33,   741,   381,    33,
     187,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   217,   223,   342,   343,   341,     5,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   640,
     641,   854,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   888,   889,   890,   891,   187,   182,
     187,     7,     7,   187,     7,   182,     4,     5,     5,     4,
     893,    22,     5,     5,   908,   909,     5,   911,    65,     7,
     914,     7,     7,     7,     7,    72,     7,     7,    75,    76,
       7,     7,     7,     7,     7,     7,     7,    33,    85,     7,
       7,     7,    33,     7,     7,     7,    93,    94,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,    65,     7,
       7,     7,     7,     7,     7,    72,     7,    75,    75,    76,
     127,     7,    75,    75,    77,     7,     7,     7,    85,     7,
       7,     7,     7,   140,     7,     4,    93,    94,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,     7,     7,     7,     7,     7,     7,     7,     7,
     127,     7,     7,     7,     7,     7,     7,     7,     7,     7,
     187,     7,     7,   140,     7,     7,     7,     7,    36,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   187,
     187,   187,     8,     0,   187,   187,   187,     8,     5,   586,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     627,   628,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,    59,     5,     6,     8,   640,   641,     8,     8,
      36,    36,    36,    36,    36,   529,    36,    36,    75,    36,
     182,    36,    36,    36,    36,   187,    36,    36,    36,    36,
      87,    36,    89,     8,     8,    36,     8,     8,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,   111,    36,    36,    59,    36,    36,
       8,     8,     8,     8,     8,     8,    36,    36,    36,    36,
      36,    36,    36,    75,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    87,    36,    89,   187,   187,
      -1,    -1,    74,    -1,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,   163,    36,    36,   111,
      36,    36,   749,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
     187,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    36,     8,     5,     5,     4,
      84,   163,     8,    12,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,   187,     4,     8,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     8,     8,     8,     8,    37,     8,   854,     8,     8,
     857,   858,     8,   860,   861,     5,     6,     7,     4,     8,
      10,    11,    12,    13,     8,     8,     8,    17,    18,   876,
     877,     8,     8,     8,     8,     8,     8,     8,     8,   886,
     887,     8,     8,     8,     8,     8,   893,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     8,
       8,    61,    62,    63,    64,     8,    66,    67,    68,    69,
      70,    71,     8,    73,    74,    75,     8,     8,    78,    79,
      80,    81,    82,   182,     8,     8,     8,     8,    88,     8,
      90,     8,     8,     8,     8,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     8,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     8,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     182,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,     8,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,     5,     6,
       7,     4,     8,    10,    11,    12,    13,     8,     8,     8,
      17,    18,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     8,     8,     8,     8,     8,
       8,     8,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,     8,     8,    61,    62,    63,    64,     8,    66,
      67,    68,    69,    70,    71,     4,    73,    74,    75,     7,
       7,    78,    79,    80,    81,    82,     7,     7,     4,     7,
       7,    88,     4,    90,     4,     8,     5,     8,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     8,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       8,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,    92,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    92,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,     5,     6,     7,   182,     5,    10,    11,    12,    13,
       5,     5,     4,    17,    18,     4,    -1,     8,     8,     5,
       8,     5,     5,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    70,    71,    -1,    73,
      74,    75,    -1,    -1,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    90,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      71,    -1,    73,    74,    75,    -1,    -1,    78,    79,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,    90,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,    -1,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    -1,    73,    74,    75,    -1,    -1,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    90,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,    -1,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    70,    71,    -1,    73,    74,
      75,    -1,    -1,    78,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    90,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    -1,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,    -1,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    70,    71,
      -1,    73,    74,    75,    -1,    -1,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    88,    -1,    90,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,    -1,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    70,    71,    -1,    73,    74,    75,    -1,    -1,    78,
      79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    90,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,    -1,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    70,    71,    -1,    73,    74,    75,
      -1,    -1,    78,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    90,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    70,    71,    -1,
      73,    74,    75,    -1,    -1,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    90,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
      -1,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      70,    71,    -1,    73,    74,    75,    -1,    -1,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      90,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    70,    71,    -1,    73,    74,    75,    -1,
      -1,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    90,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,     7,     8,    -1,    10,    11,    12,    13,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,   167,   168,   169,    -1,   171,   172,   173,   174,   175,
     176,    -1,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,     7,    -1,    -1,    10,    11,    12,    13,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    -1,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,     7,   164,
     165,   166,   167,   168,   169,    -1,   171,   172,   173,   174,
     175,   176,    -1,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,   128,
     129,   130,   131,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,    -1,   164,   165,   166,   167,   168,
     169,    -1,   171,   172,   173,   174,   175,   176,    -1,   178,
     179,   180,   181,    -1,   183,   184,   185,   186,   187
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   189,   215,     0,    86,    91,   190,   216,   187,   187,
       5,    75,    87,    89,   111,   187,   191,   194,   198,   218,
     219,     4,     4,   221,   192,   219,   198,   187,     4,    33,
     187,    59,   163,   197,    65,    72,    76,    85,    93,    94,
     127,   140,   187,   195,   198,     4,   198,   199,   198,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   182,   193,     5,   185,     4,     9,    21,   198,
     193,     7,   187,   193,     6,     4,   187,   187,   185,   216,
      34,     7,    10,    11,    12,    13,    17,    18,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    61,    62,
      63,    64,    66,    67,    68,    69,    70,    71,    79,    80,
      81,    82,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   128,   129,   130,   131,   134,   135,   136,
     137,   138,   139,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   164,   165,   166,   167,   168,
     169,   171,   172,   173,   174,   175,   176,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     185,   187,   200,   220,   222,     7,     7,     4,     7,     6,
     214,   202,   204,   202,   202,   204,   204,   204,     7,     7,
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
     204,    35,     7,     9,    11,    12,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   182,    25,    26,
      27,    28,    29,    30,    31,    32,    37,   193,     4,    22,
       4,    36,    77,   187,   196,   198,     8,   222,   222,   222,
       8,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   202,     8,   214,   223,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   205,   205,
     205,   206,   206,   207,   207,   208,   208,   208,   208,   207,
     209,   209,   210,   210,   210,   211,   211,   211,   212,   212,
     222,   187,     5,     8,     8,     8,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,     8,
      38,   193,   217,     5,     5,     4,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   223,   212,
     212,     5,     6,    73,    74,    78,    88,    90,   132,   133,
     170,   177,   187,   198,   201,   214,   217,   217,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
     217,     4,     4,     4,     7,    60,    83,     7,     7,   214,
       7,     7,   187,     4,     6,     6,     6,   223,     7,     7,
     214,   214,     4,   214,   214,     4,     9,     4,   187,   187,
       8,     8,     8,     8,   214,   214,    92,    92,     5,     5,
       5,     5,     4,     4,   214,   214,   217,   217,   217,   217,
     223,     8,     8,     6,     6,     6,     6,     8,     5,     5,
      84,     5,   217,   217,     5,   217,     6,     6,   217,     6,
       6
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
#line 737 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.code_) = new Main(reverseListTLDeclaration((yyvsp[(1) - (2)].listtldeclaration_)), reverseListDeclaration((yyvsp[(2) - (2)].listdeclaration_))); YY_RESULT_Code_= (yyval.code_); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 739 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.tldeclaration_) = new DImport((yyvsp[(2) - (3)].string_));  ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 740 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.tldeclaration_) = new DExpose((yyvsp[(2) - (3)].string_));  ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 742 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DNamespace((yyvsp[(2) - (5)].string_), reverseListDeclaration((yyvsp[(4) - (5)].listdeclaration_)));  ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 743 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DDefaultFunction(reverseListFunctionSpecifier((yyvsp[(1) - (8)].listfunctionspecifier_)), (yyvsp[(2) - (8)].string_), (yyvsp[(4) - (8)].listparameterdeclaration_), reverseListStatement((yyvsp[(7) - (8)].liststatement_)));  ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 744 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DFunction(reverseListFunctionSpecifier((yyvsp[(1) - (9)].listfunctionspecifier_)), (yyvsp[(2) - (9)].type_), (yyvsp[(3) - (9)].string_), (yyvsp[(5) - (9)].listparameterdeclaration_), reverseListStatement((yyvsp[(8) - (9)].liststatement_)));  ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 745 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DOperator(reverseListFunctionSpecifier((yyvsp[(1) - (9)].listfunctionspecifier_)), (yyvsp[(2) - (9)].type_), (yyvsp[(3) - (9)].operatorname_), (yyvsp[(5) - (9)].listparameterdeclaration_), reverseListStatement((yyvsp[(8) - (9)].liststatement_)));  ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 746 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DOperatorInfo((yyvsp[(1) - (2)].operatortrait_));  ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 747 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DTypeDecl(reverseListTypeSpecifier((yyvsp[(1) - (5)].listtypespecifier_)), (yyvsp[(3) - (5)].type_), (yyvsp[(4) - (5)].string_));  ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 748 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DExtern((yyvsp[(2) - (2)].prototype_));  ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 749 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DIVariable((yyvsp[(1) - (5)].type_), (yyvsp[(2) - (5)].string_), (yyvsp[(4) - (5)].expression_));  ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 750 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.declaration_) = new DVariable((yyvsp[(1) - (3)].type_), (yyvsp[(2) - (3)].string_));  ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 752 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.prototype_) = new PFunction(reverseListFunctionSpecifier((yyvsp[(1) - (7)].listfunctionspecifier_)), (yyvsp[(2) - (7)].type_), (yyvsp[(3) - (7)].string_), (yyvsp[(5) - (7)].listparameterdeclaration_));  ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 754 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONOp((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 755 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLnot();  ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 756 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONPreInc();  ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 757 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONPreDec();  ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 758 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONBnot();  ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 759 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONMul();  ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 760 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONDiv();  ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 761 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONMod();  ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 762 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONAdd();  ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 763 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONSub();  ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 764 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLSh();  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 765 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONRSh();  ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 766 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLT();  ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 767 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONGT();  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 768 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLE();  ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 769 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONGE();  ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 770 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONE();  ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 771 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONNE();  ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 772 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONBand();  ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 773 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONBor();  ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 774 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONBxor();  ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 775 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLand();  ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 776 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLor();  ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 777 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatorname_) = new ONLxor();  ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 779 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.operatortrait_) = new OTIdentity((yyvsp[(2) - (4)].type_), (yyvsp[(3) - (4)].operatorname_), (yyvsp[(4) - (4)].int_));  ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 781 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSEntryPoint();  ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 782 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSPure();  ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 783 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSInline();  ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 784 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSAssociative();  ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 785 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSCommutative();  ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 786 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSAntiCommutative();  ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 787 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSInverse((yyvsp[(2) - (2)].operatorname_));  ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 788 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.functionspecifier_) = new FSSelfInverse();  ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 790 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.variablespecifier_) = new VSConst();  ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 792 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.typespecifier_) = new TSAlign((yyvsp[(3) - (4)].int_));  ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 794 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.type_) = new TByte();  ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 795 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.type_) = new TCustom((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 796 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.type_) = new TFixedArray((yyvsp[(1) - (4)].type_), (yyvsp[(3) - (4)].int_));  ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 797 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.type_) = new TStruct(reverseListStructMemberDeclaration((yyvsp[(2) - (4)].liststructmemberdeclaration_)));  ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 799 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.structmemberdeclaration_) = new SMDMemberDeclaration((yyvsp[(1) - (3)].type_), (yyvsp[(2) - (3)].string_));  ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 800 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.structmemberdeclaration_) = new SMDAnonMemberDeclaration((yyvsp[(1) - (2)].type_));  ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 802 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.parameterdeclaration_) = new PDAutoParameter(reverseListVariableSpecifier((yyvsp[(1) - (2)].listvariablespecifier_)), (yyvsp[(2) - (2)].string_));  ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 803 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.parameterdeclaration_) = new PDTypedParameter(reverseListVariableSpecifier((yyvsp[(1) - (3)].listvariablespecifier_)), (yyvsp[(2) - (3)].type_), (yyvsp[(3) - (3)].string_));  ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 805 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SReturn((yyvsp[(2) - (3)].expression_));  ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 806 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SExpression((yyvsp[(1) - (2)].expression_));  ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 807 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SScope(reverseListStatement((yyvsp[(2) - (3)].liststatement_)));  ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 808 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SIf((yyvsp[(3) - (7)].expression_), reverseListStatement((yyvsp[(6) - (7)].liststatement_)));  ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 809 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SIfElse((yyvsp[(3) - (11)].expression_), reverseListStatement((yyvsp[(6) - (11)].liststatement_)), reverseListStatement((yyvsp[(10) - (11)].liststatement_)));  ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 810 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SLoop((yyvsp[(3) - (7)].expression_), reverseListStatement((yyvsp[(6) - (7)].liststatement_)));  ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 811 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SWhile((yyvsp[(3) - (7)].expression_), reverseListStatement((yyvsp[(6) - (7)].liststatement_)));  ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 812 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SUntil((yyvsp[(3) - (7)].expression_), reverseListStatement((yyvsp[(6) - (7)].liststatement_)));  ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 813 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SFor((yyvsp[(3) - (11)].listexpression_), (yyvsp[(5) - (11)].expression_), (yyvsp[(7) - (11)].listexpression_), reverseListStatement((yyvsp[(10) - (11)].liststatement_)));  ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 814 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SForEach((yyvsp[(4) - (10)].string_), (yyvsp[(6) - (10)].expression_), reverseListStatement((yyvsp[(9) - (10)].liststatement_)));  ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 815 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SForAll((yyvsp[(4) - (10)].string_), (yyvsp[(6) - (10)].expression_), reverseListStatement((yyvsp[(9) - (10)].liststatement_)));  ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 816 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SBreak();  ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 817 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SContinue();  ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 818 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SBreakpoint();  ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 819 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SIVariable((yyvsp[(1) - (5)].type_), (yyvsp[(2) - (5)].string_), (yyvsp[(4) - (5)].expression_));  ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 820 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.statement_) = new SVariable((yyvsp[(1) - (3)].type_), (yyvsp[(2) - (3)].string_));  ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 822 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.rvalue_) = new RVIdent((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 823 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.rvalue_) = new RVQualified((yyvsp[(1) - (3)].string_), (yyvsp[(3) - (3)].rvalue_));  ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 825 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EDouble((yyvsp[(1) - (1)].double_));  ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 826 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EInteger((yyvsp[(1) - (1)].int_));  ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 827 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EString((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 828 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EChar((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 829 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EPi();  ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 830 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ERValue((yyvsp[(1) - (1)].rvalue_));  ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 831 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(2) - (3)].expression_);  ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 833 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ESimpleCall((yyvsp[(1) - (3)].rvalue_));  ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 834 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ECall((yyvsp[(1) - (4)].rvalue_), (yyvsp[(3) - (4)].listexpression_));  ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 835 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EPostInc((yyvsp[(1) - (2)].rvalue_));  ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 836 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EPostDec((yyvsp[(1) - (2)].rvalue_));  ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 837 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAddB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 838 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSubB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 839 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMulB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 840 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdivB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 841 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSdivB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 842 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUremB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 843 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSremB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 844 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAndB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 845 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinOrB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 846 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinXorB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 847 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinShlB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 848 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinLshrB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 849 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAshrB((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 850 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNotB((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 851 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNegB((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 852 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 853 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 854 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 855 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 856 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSdiv2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 857 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 858 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSrem2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 859 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAnd2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 860 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinOr2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 861 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinXor2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 862 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinShl2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 863 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinLshr2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 864 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAshr2B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 865 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNot2B((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 866 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNeg2B((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 867 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 868 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 869 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 870 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 871 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSdiv4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 872 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 873 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSrem4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 874 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAnd4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 875 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinOr4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 876 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinXor4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 877 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinShl4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 878 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinLshr4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 879 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAshr4B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 880 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNot4B((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 881 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNeg4B((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 882 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 883 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 884 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 885 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 886 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSdiv8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 887 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 888 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSrem8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 889 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAnd8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 890 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinOr8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 891 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinXor8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 892 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinShl8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 893 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinLshr8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 894 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAshr8B((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 895 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNot8B((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 896 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNeg8B((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 897 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAddB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 898 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSubB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 899 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMulB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 900 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdivB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 901 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSdivB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 902 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUremB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 903 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSremB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 904 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinShlB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 905 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinLshrB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 906 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAshrB4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 907 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNegB4V((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 908 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAddB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 909 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSubB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 910 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMulB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 911 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdivB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 912 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSdivB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 913 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUremB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 914 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSremB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 915 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinShlB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 916 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinLshrB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 917 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAshrB8V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 918 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinNegB8V((yyvsp[(3) - (4)].expression_));  ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 919 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd2F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 920 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub2F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 921 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul2F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 922 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv2F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 923 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem2F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 924 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd4F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 925 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub4F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 926 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul4F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 927 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv4F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 928 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem4F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 929 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd8F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 930 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub8F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 931 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul8F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 932 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv8F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 933 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem8F((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 934 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinAdd4F4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 935 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinSub4F4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 936 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinMul4F4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 937 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUdiv4F4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 938 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EIntrinUrem4F4V((yyvsp[(3) - (6)].expression_), (yyvsp[(5) - (6)].expression_));  ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 939 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 941 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELnot((yyvsp[(2) - (2)].expression_));  ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 942 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EPreInc((yyvsp[(2) - (2)].rvalue_));  ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 943 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EPreDec((yyvsp[(2) - (2)].rvalue_));  ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 944 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ENeg((yyvsp[(2) - (2)].expression_));  ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 945 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EBnot((yyvsp[(2) - (2)].expression_));  ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 946 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EPos((yyvsp[(2) - (2)].expression_));  ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 947 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EUnaryOperator((yyvsp[(1) - (2)].string_), (yyvsp[(2) - (2)].expression_));  ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 948 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 950 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EMul((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 951 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EDiv((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 952 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EMod((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 953 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 955 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EAdd((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 956 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ESub((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 957 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 959 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELSh((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 960 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ERSh((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 961 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EBinaryOperator((yyvsp[(1) - (3)].expression_), (yyvsp[(2) - (3)].string_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 962 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 964 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELT((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 965 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EGT((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 966 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELE((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 967 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EGE((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 968 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 970 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EE((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 971 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ENE((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 972 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 974 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EBand((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 975 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EBor((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 976 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EBxor((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 977 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 979 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELand((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 980 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELor((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 981 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELxor((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 982 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 984 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EConditional((yyvsp[(1) - (5)].expression_), (yyvsp[(3) - (5)].expression_), (yyvsp[(5) - (5)].expression_));  ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 985 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ETernaryOperator((yyvsp[(1) - (5)].expression_), (yyvsp[(2) - (5)].operatorname_), (yyvsp[(3) - (5)].expression_), (yyvsp[(4) - (5)].operatorname_), (yyvsp[(5) - (5)].expression_));  ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 986 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 988 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 989 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EAddAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 990 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ESubAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 991 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EMulAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 992 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EDivAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 993 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EModAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 994 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EAndAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 995 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EOrAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 996 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new EXorAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 997 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ELShAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 998 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = new ERShAssign((yyvsp[(1) - (3)].rvalue_), (yyvsp[(3) - (3)].expression_));  ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 999 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.expression_) = (yyvsp[(1) - (1)].expression_);  ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1001 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listtldeclaration_) = 0;  ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1002 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listtldeclaration_) = new ListTLDeclaration((yyvsp[(2) - (2)].tldeclaration_), (yyvsp[(1) - (2)].listtldeclaration_));  ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1004 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listdeclaration_) = 0;  ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1005 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listdeclaration_) = new ListDeclaration((yyvsp[(2) - (2)].declaration_), (yyvsp[(1) - (2)].listdeclaration_));  ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1007 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.liststatement_) = 0;  ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1008 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.liststatement_) = new ListStatement((yyvsp[(2) - (2)].statement_), (yyvsp[(1) - (2)].liststatement_));  ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1010 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listtypespecifier_) = 0;  ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1011 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listtypespecifier_) = new ListTypeSpecifier((yyvsp[(2) - (2)].typespecifier_), (yyvsp[(1) - (2)].listtypespecifier_));  ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1013 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listfunctionspecifier_) = 0;  ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1014 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listfunctionspecifier_) = new ListFunctionSpecifier((yyvsp[(2) - (2)].functionspecifier_), (yyvsp[(1) - (2)].listfunctionspecifier_));  ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1016 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listvariablespecifier_) = 0;  ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1017 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listvariablespecifier_) = new ListVariableSpecifier((yyvsp[(2) - (2)].variablespecifier_), (yyvsp[(1) - (2)].listvariablespecifier_));  ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1019 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.liststructmemberdeclaration_) = 0;  ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1020 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.liststructmemberdeclaration_) = new ListStructMemberDeclaration((yyvsp[(2) - (2)].structmemberdeclaration_), (yyvsp[(1) - (2)].liststructmemberdeclaration_));  ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1022 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listparameterdeclaration_) = 0;  ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1023 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listparameterdeclaration_) = new ListParameterDeclaration((yyvsp[(1) - (1)].parameterdeclaration_));  ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1024 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listparameterdeclaration_) = new ListParameterDeclaration((yyvsp[(1) - (3)].parameterdeclaration_), (yyvsp[(3) - (3)].listparameterdeclaration_));  ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1026 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listexpression_) = new ListExpression((yyvsp[(1) - (1)].expression_));  ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1027 "E:\\extra_cp\\cp\\cp1\\cp1\\.y"
    { (yyval.listexpression_) = new ListExpression((yyvsp[(1) - (3)].expression_), (yyvsp[(3) - (3)].listexpression_));  ;}
    break;



/* Line 1455 of yacc.c  */
#line 5131 "parse.cpp"
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



