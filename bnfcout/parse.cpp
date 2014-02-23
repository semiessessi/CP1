
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

ConversionSpecifier* YY_RESULT_ConversionSpecifier_ = 0;
ConversionSpecifier* pConversionSpecifier(FILE *inp)
{
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

GenericParam* YY_RESULT_GenericParam_ = 0;
GenericParam* pGenericParam(FILE *inp)
{
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

ListConversionSpecifier* YY_RESULT_ListConversionSpecifier_ = 0;
ListConversionSpecifier* pListConversionSpecifier(FILE *inp)
{
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

ListGenericParam* YY_RESULT_ListGenericParam_ = 0;
ListGenericParam* pListGenericParam(FILE *inp)
{
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
ListConversionSpecifier* reverseListConversionSpecifier(ListConversionSpecifier *l)
{
  ListConversionSpecifier *prev = 0;
  ListConversionSpecifier *tmp = 0;
  while (l)
  {
    tmp = l->listconversionspecifier_;
    l->listconversionspecifier_ = prev;
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
ListGenericParam* reverseListGenericParam(ListGenericParam *l)
{
  ListGenericParam *prev = 0;
  ListGenericParam *tmp = 0;
  while (l)
  {
    tmp = l->listgenericparam_;
    l->listgenericparam_ = prev;
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



/* Line 172 of glr.c  */
#line 620 "parse.cpp"



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
#line 655 "parse.cpp"

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
#define YYLAST   2721

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  122
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  200
/* YYNRULES -- Number of states.  */
#define YYNSTATES  573
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 11
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   376

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
     115,   116,   117,   118,   119,   120,   121
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
     191,   193,   196,   198,   200,   202,   207,   211,   216,   218,
     222,   225,   229,   233,   236,   240,   248,   260,   268,   276,
     284,   296,   307,   318,   321,   324,   327,   334,   339,   341,
     345,   347,   349,   351,   353,   355,   357,   361,   365,   369,
     375,   381,   386,   390,   395,   398,   401,   404,   412,   420,
     430,   440,   450,   460,   470,   480,   490,   500,   510,   520,
     530,   540,   550,   558,   566,   576,   586,   596,   606,   616,
     626,   628,   631,   634,   637,   640,   643,   646,   648,   652,
     656,   660,   662,   666,   670,   672,   676,   680,   682,   686,
     690,   694,   698,   700,   704,   708,   710,   714,   718,   722,
     724,   728,   732,   736,   738,   744,   746,   750,   754,   758,
     762,   766,   770,   774,   778,   782,   786,   790,   792,   793,
     796,   797,   800,   801,   804,   805,   808,   809,   812,   813,
     816,   817,   820,   821,   824,   826,   830,   831,   833,   837,
     839
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
     123,     0,    -1,   151,   152,    -1,    85,   121,     4,    -1,
      78,   121,     4,    -1,    92,   121,     5,   152,     6,    -1,
     156,   121,     7,   160,     8,     5,   153,     6,    -1,   156,
     134,   121,     7,   160,     8,     5,   153,     6,    -1,   156,
     134,   127,     7,   160,     8,     5,   153,     6,    -1,   128,
       4,    -1,   154,   107,   134,   121,     4,    -1,   134,   155,
      73,     7,    71,   134,   121,     8,     5,   153,     6,    -1,
      79,   126,    -1,   157,   134,   121,     9,   150,     4,    -1,
     157,   134,   121,     4,    -1,   156,   134,   121,     7,   160,
       8,     4,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,
      -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    82,   134,   127,
     150,    -1,    77,    -1,    97,    -1,    71,    -1,    87,    -1,
      60,    -1,    70,    -1,    58,    -1,    89,   127,    -1,   102,
      -1,   110,    -1,    74,    -1,    84,    -1,    71,    -1,    55,
      23,   119,    24,    -1,    81,    23,   159,    24,    -1,    88,
      -1,    98,    -1,   134,   121,    -1,    54,    -1,    63,    -1,
     121,    -1,   134,    37,   119,    38,    -1,   134,    37,    38,
      -1,     5,   158,     4,     6,    -1,   107,    -1,   134,   121,
       4,    -1,   157,   121,    -1,   157,   134,   121,    -1,   100,
     150,     4,    -1,   150,     4,    -1,     5,   153,     6,    -1,
      83,     7,   150,     8,     5,   153,     6,    -1,    83,     7,
     150,     8,     5,   153,     6,    76,     5,   153,     6,    -1,
      99,     7,   150,     8,     5,   153,     6,    -1,   113,     7,
     150,     8,     5,   153,     6,    -1,   109,     7,   150,     8,
       5,   153,     6,    -1,    80,     7,   161,     4,   150,     4,
     161,     8,     5,   153,     6,    -1,    80,    75,     7,   121,
      86,   150,     8,     5,   153,     6,    -1,    80,    56,     7,
     121,    86,   150,     8,     5,   153,     6,    -1,    61,     4,
      -1,    72,     4,    -1,    62,     4,    -1,   157,   134,   121,
       9,   150,     4,    -1,   157,   134,   121,     4,    -1,   121,
      -1,   121,    39,   138,    -1,   120,    -1,   119,    -1,   116,
      -1,   117,    -1,    96,    -1,   138,    -1,     7,   150,     8,
      -1,     5,   161,     6,    -1,    37,   161,    38,    -1,     5,
     150,   112,   161,     6,    -1,    37,   150,   112,   161,    38,
      -1,   150,    37,   150,    38,    -1,   138,     7,     8,    -1,
     138,     7,   161,     8,    -1,   138,    11,    -1,   138,    12,
      -1,    29,   139,    -1,   104,    23,   134,    24,     7,   150,
       8,    -1,   115,    23,   134,    24,     7,   150,     8,    -1,
      53,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
     106,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
      91,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
     108,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
     101,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
     111,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
     105,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
      57,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
      95,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
     114,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
     103,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
      90,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
      59,    23,   134,    24,     7,   150,    40,   150,     8,    -1,
      94,    23,   134,    24,     7,   150,     8,    -1,    93,    23,
     134,    24,     7,   150,     8,    -1,    64,    23,   134,    24,
       7,   150,    40,   150,     8,    -1,    69,    23,   134,    24,
       7,   150,    40,   150,     8,    -1,    68,    23,   134,    24,
       7,   150,    40,   150,     8,    -1,    66,    23,   134,    24,
       7,   150,    40,   150,     8,    -1,    67,    23,   134,    24,
       7,   150,    40,   150,     8,    -1,    65,    23,   134,    24,
       7,   150,    40,   150,     8,    -1,   139,    -1,    10,   140,
      -1,    11,   138,    -1,    12,   138,    -1,    20,   140,    -1,
      13,   140,    -1,    19,   140,    -1,   140,    -1,   142,    14,
     141,    -1,   142,    16,   141,    -1,   142,    18,   141,    -1,
     141,    -1,   143,    19,   142,    -1,   143,    20,   142,    -1,
     142,    -1,   144,    21,   143,    -1,   144,    22,   143,    -1,
     143,    -1,   144,    23,   144,    -1,   144,    24,   144,    -1,
     144,    25,   144,    -1,   144,    26,   144,    -1,   144,    -1,
     145,    27,   145,    -1,   145,    28,   145,    -1,   145,    -1,
     147,    29,   146,    -1,   147,    30,   146,    -1,   147,    31,
     146,    -1,   146,    -1,   147,    32,   147,    -1,   147,    33,
     147,    -1,   147,    34,   147,    -1,   147,    -1,   148,    41,
     148,    42,   148,    -1,   148,    -1,   138,     9,   150,    -1,
     138,    43,   150,    -1,   138,    44,   150,    -1,   138,    45,
     150,    -1,   138,    46,   150,    -1,   138,    47,   150,    -1,
     138,    48,   150,    -1,   138,    49,   150,    -1,   138,    50,
     150,    -1,   138,    51,   150,    -1,   138,    52,   150,    -1,
     149,    -1,    -1,   151,   124,    -1,    -1,   152,   125,    -1,
      -1,   153,   137,    -1,    -1,   154,   132,    -1,    -1,   155,
     130,    -1,    -1,   156,   129,    -1,    -1,   157,   131,    -1,
      -1,   158,   135,    -1,   133,    -1,   133,    40,   159,    -1,
      -1,   136,    -1,   136,    40,   160,    -1,   150,    -1,   150,
      40,   161,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   763,   763,   765,   766,   768,   769,   770,   771,   772,
     773,   774,   775,   776,   777,   779,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,   806,   807,   809,   811,   812,   813,   814,   815,   816,
     817,   818,   819,   821,   822,   823,   825,   827,   828,   829,
     830,   832,   834,   835,   836,   837,   838,   839,   840,   842,
     844,   845,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   857,   858,   859,   860,   861,   862,   864,   865,
     867,   868,   869,   870,   871,   872,   873,   875,   876,   877,
     878,   879,   880,   881,   882,   883,   884,   885,   886,   887,
     888,   889,   890,   891,   892,   893,   894,   895,   896,   897,
     898,   899,   900,   901,   902,   903,   904,   905,   906,   907,
     908,   910,   911,   912,   913,   914,   915,   916,   918,   919,
     920,   921,   923,   924,   925,   927,   928,   929,   931,   932,
     933,   934,   935,   937,   938,   939,   941,   942,   943,   944,
     946,   947,   948,   949,   951,   952,   954,   955,   956,   957,
     958,   959,   960,   961,   962,   963,   964,   965,   967,   968,
     970,   971,   973,   974,   976,   977,   979,   980,   982,   983,
     985,   986,   988,   989,   991,   992,   994,   995,   996,   998,
     999
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
  "_SYMB_113", "_SYMB_114", "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept",
  "Code", "TLDeclaration", "Declaration", "Prototype", "OperatorName",
  "OperatorTrait", "FunctionSpecifier", "ConversionSpecifier",
  "VariableSpecifier", "TypeSpecifier", "GenericParam", "Type",
  "StructMemberDeclaration", "ParameterDeclaration", "Statement", "RValue",
  "Expression11", "Expression10", "Expression9", "Expression8",
  "Expression7", "Expression6", "Expression5", "Expression4",
  "Expression3", "Expression2", "Expression1", "Expression",
  "ListTLDeclaration", "ListDeclaration", "ListStatement",
  "ListTypeSpecifier", "ListConversionSpecifier", "ListFunctionSpecifier",
  "ListVariableSpecifier", "ListStructMemberDeclaration",
  "ListGenericParam", "ListParameterDeclaration", "ListExpression", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   122,   123,   124,   124,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   130,   130,   130,   131,   132,   132,   132,
     132,   133,   134,   134,   134,   134,   134,   134,   134,   135,
     136,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   138,   138,
     139,   139,   139,   139,   139,   139,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   141,   141,   141,   141,   141,   141,   141,   142,   142,
     142,   142,   143,   143,   143,   144,   144,   144,   145,   145,
     145,   145,   145,   146,   146,   146,   147,   147,   147,   147,
     148,   148,   148,   148,   149,   149,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   156,
     157,   157,   158,   158,   159,   159,   160,   160,   160,   161,
     161
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
       1,     2,     1,     1,     1,     4,     3,     4,     1,     3,
       2,     3,     3,     2,     3,     7,    11,     7,     7,     7,
      11,    10,    10,     2,     2,     2,     6,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     5,
       5,     4,     3,     4,     2,     2,     2,     7,     7,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     7,     7,     9,     9,     9,     9,     9,     9,
       1,     2,     2,     2,     2,     2,     2,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     3,     1,     5,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     1,     3,     0,     1,     3,     1,
       3
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
       0
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
       0
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error.  */
static const unsigned char yydefact[] =
{
     178,     0,   180,     1,     0,     0,   179,   188,     0,     0,
     192,    62,    63,   188,     0,     0,    68,    64,   181,     0,
     186,     0,     0,     0,     4,     3,     0,    12,     0,     0,
       0,     9,     0,     0,     0,     0,    59,    60,     0,   185,
      50,    48,    49,    46,    44,    47,     0,    45,    52,    64,
     189,     0,    56,   191,     0,     0,     0,   193,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     0,   180,    66,     0,
       0,    54,    55,    53,   187,     0,     0,     0,    51,   190,
       0,     0,     0,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    91,    90,    88,    95,   130,   137,   141,   144,
     147,   152,   155,   159,   163,   165,   177,    43,   188,    65,
       0,     0,   194,     0,     0,     0,   197,     0,     0,   190,
     190,    14,     0,    69,   190,   199,     0,     0,   131,     0,
     132,   133,   135,   136,   134,    95,   106,   199,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     0,
      57,     0,    61,    58,    10,   190,    64,     0,     0,     0,
       0,     0,     0,     0,     0,    97,    96,     0,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,   102,   199,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   138,   139,   140,
     142,   143,   145,   146,   148,   149,   150,   151,   153,   154,
     156,   157,   158,   160,   161,   162,   165,     0,     0,   195,
     198,    71,   182,     0,     0,    13,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,   101,     0,   190,   182,   182,
      15,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   164,     0,   182,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   183,
       0,     0,   190,   190,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   182,   190,    83,
      85,    84,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   123,   122,     0,     0,     0,
     107,     0,     0,     0,     0,     0,   108,   190,    74,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     0,
       0,     0,     0,     0,     0,    87,     0,   109,   116,   121,
     124,   129,   127,   128,   126,   125,   120,   111,   117,   113,
     119,   115,   110,   112,   114,   118,     0,     0,     0,   182,
     182,   182,   182,     0,     0,     0,     0,   190,   190,   190,
     190,    86,     0,     0,     0,    75,    77,    79,    78,     0,
     182,   182,     0,   182,   190,   190,   182,   190,    82,    81,
     190,    80,    76
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     6,    18,    27,    86,    19,    50,    94,    53,
      39,   162,    20,    57,   166,   409,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   179,     2,
       7,   367,    21,    33,    22,   411,    26,   164,   168,   176
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -332
static const short int yypact[] =
{
    -332,    75,   -24,  -332,  -116,   -68,  -332,     1,    19,    83,
    -332,  -332,  -332,  -332,    53,   -19,  -332,  -332,  -332,   126,
     105,   160,  2253,     8,  -332,  -332,     3,  -332,  2293,  2433,
     148,  -332,   -29,   -41,   134,   141,  -332,  -332,    53,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  2685,  -332,  -332,   161,
    -332,  2405,  -332,  -332,   -23,   166,   -20,  -332,    -2,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  2068,  -332,  -332,   174,
     169,  -332,  -332,  -332,  -332,    99,    53,    -1,  -332,   215,
     237,   261,    40,  -332,   345,   358,  2068,  2068,  2068,   258,
     258,  2068,  2068,  2068,    63,  2068,   361,   367,   425,   442,
     447,   459,   491,   499,   509,   519,   556,   558,   560,   580,
    -332,   612,   616,   621,   622,   626,   636,   649,   650,   662,
    -332,  -332,  -332,  -332,   415,   227,  -332,  -332,  -332,   245,
     315,   899,   473,  -332,   900,   435,  -332,   373,   259,  -332,
     477,   539,   625,     2,   656,   688,   659,    41,   692,   215,
     215,  -332,  2068,  -332,   215,    -9,   710,    39,  2457,   373,
    -332,  -332,  2481,  2509,  2533,  -332,  -332,    37,   682,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,   258,  1951,  2068,  -332,  -332,  2068,  2068,  2068,
    2068,  2068,  2068,  2068,  2068,  2068,  2068,  2068,  2068,  2068,
    2068,  2068,  2068,  2068,  2068,  2068,  2068,  2068,  2068,  2068,
    2068,  2068,  2068,  2068,  2068,  2068,  2068,  2068,  -332,    53,
    -332,    53,  -332,  -332,  -332,   215,    57,     4,   714,   716,
     719,    11,   726,  2068,  2068,  -332,  -332,  2068,  -332,    26,
      44,    54,   121,   128,   132,   294,   299,   318,   387,   397,
     401,   402,   408,   409,   420,   423,   429,   431,   432,   448,
     449,   451,  -332,  -332,   179,   727,   706,   709,   711,   724,
     725,   729,   734,   737,   739,   745,   752,  2557,  2581,  2605,
    2629,  2653,  2002,  2119,   371,   564,   681,   798,   386,   541,
     474,   591,   657,   708,   774,   825,   486,   306,     5,  -332,
    -332,  -332,  -332,   748,   751,  -332,   786,  -332,   792,   761,
     795,   802,   805,   806,   807,   809,   810,   826,   829,   830,
     834,   837,   844,   845,   853,   856,   858,   860,   861,   862,
     863,   866,   871,  -332,  2068,  -332,   875,   430,  -332,  -332,
    -332,  -332,  -332,  2068,  2068,  2068,  2068,  2068,  2068,  2068,
    2068,  2068,  2068,  2068,  2068,  2068,  2068,  2068,  2068,  2068,
    2068,  2068,  2068,  2068,  2068,  2068,    68,   874,  2185,  -332,
     884,   887,   889,    38,   892,   905,  2068,   906,   907,  -332,
      23,     8,   547,   664,   321,   327,   369,   434,   440,   453,
     472,   500,   524,   525,   540,    80,   110,   562,   570,   589,
     133,   594,   596,   617,   641,   642,   136,  -332,   781,  -332,
    -332,  -332,  2068,   908,   909,  2068,  2068,    36,  2068,  2068,
    -332,    22,  -332,  -332,  2068,  2068,  2068,  2068,  2068,  2068,
    2068,  2068,  2068,  2068,  2068,  -332,  -332,  2068,  2068,  2068,
    -332,  2068,  2068,  2068,  2068,  2068,  -332,   898,  -332,   902,
     815,   816,   138,   205,  -332,   206,   209,   324,   212,   213,
     214,   216,   217,   218,   219,   220,   223,   225,   229,   232,
     274,   278,   302,   308,   309,   311,   313,  -332,  2068,   821,
     833,   921,   923,   933,   934,  -332,  2068,  -332,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,    47,  2068,  2068,  -332,
    -332,  -332,  -332,    48,  2068,   316,   317,  1015,  1132,  1249,
    1366,  -332,   932,   936,   937,   867,  -332,  -332,  -332,   939,
    -332,  -332,   940,  -332,  1483,  1600,  -332,  1717,  -332,  -332,
    1834,  -332,  -332
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -332,  -332,  -332,  -332,  -332,   286,  -332,  -332,  -332,  -332,
    -332,  -332,    -4,  -332,  -332,  -332,   -98,   832,   172,   468,
     198,   323,   282,   379,   510,   552,  -243,  -332,   -86,  -332,
     865,  -331,  -332,  -332,   935,    -3,  -332,   696,  -144,  -113
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -197
static const short int yytable[] =
{
     157,    -2,   188,   326,    23,     8,    10,    55,    10,    88,
      29,   180,   181,    10,    32,   335,   185,    32,    51,    54,
     175,   177,    56,    24,    58,   259,   260,   450,   247,   187,
     262,   263,    90,    91,    97,    32,    32,   412,   413,    32,
     484,    32,    32,    92,   171,   442,    10,   266,   247,   172,
     340,   544,   551,     9,     4,    11,  -184,    11,    10,    32,
     247,     5,    11,    32,    12,   -70,    12,   438,   341,    93,
     107,    12,  -188,   247,   247,     3,   247,   263,   342,    52,
      13,    32,  -184,    14,   247,   247,   261,    25,   465,  -184,
      89,    32,   163,    15,   443,    11,   167,   -70,   102,  -184,
     295,   104,    30,   264,    12,  -164,   477,    11,    16,   246,
      16,   330,    52,   444,   292,    16,    12,   247,   466,   105,
     165,   396,    17,   252,    17,   331,   366,   294,   296,    17,
      31,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   470,    32,   487,   476,   343,   511,   247,    16,   267,
     337,   338,   344,    87,   339,    23,   345,    95,    32,   130,
      16,   327,   256,   257,    96,    32,   167,   167,    99,    32,
     247,   167,   103,   247,    17,   247,   160,   294,   294,   140,
     141,   294,   142,   143,   144,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   547,   548,
     549,   550,   159,   512,   513,    34,   247,   514,   161,   263,
     517,   518,   519,  -196,   520,   521,   522,   523,   524,   564,
     565,   525,   567,   526,   213,   570,   214,   527,   215,   216,
     528,    35,   247,   247,   169,   328,   247,   163,    36,   247,
     247,   247,   167,   247,   247,   247,   247,   247,    37,   227,
     247,   228,   247,   229,    10,   248,   247,    38,   170,   247,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     178,   410,   529,   182,   183,   184,   530,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     531,   247,   175,    11,  -184,   247,   532,   533,   346,   534,
     447,   535,    12,   347,   553,   554,   410,   410,   515,   479,
    -188,    32,    98,   516,   230,   231,    32,   101,    13,   247,
    -184,    14,   348,   247,   365,   247,   247,  -184,   247,   173,
     247,    15,   410,   247,   247,    32,   294,  -184,   247,   482,
     483,   454,   485,   486,   247,   174,    16,   455,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   144,
      17,   499,   500,   501,   189,   502,   503,   504,   505,   506,
     190,   410,   232,   233,   234,   235,   236,   237,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,   247,   451,  -148,   456,
     247,   349,  -148,   238,   239,  -153,  -153,  -153,  -153,  -153,
    -153,   350,   536,  -153,    32,   351,   352,  -153,   310,   311,
     543,   552,   353,   354,    32,   398,   399,   107,    32,    32,
     108,   109,   110,   111,   355,    32,    32,   356,   191,   112,
     113,   545,   546,   357,   212,   358,   359,    32,   294,   114,
      32,   410,   410,   410,   410,   192,    32,   115,    32,    32,
     193,   247,   360,   361,   457,   362,   246,   247,   410,   410,
     458,   410,   194,   116,   410,    32,    32,   117,    32,   118,
     247,   400,   401,   459,   119,   120,   121,   122,   123,   124,
     238,   239,   402,  -156,  -156,  -156,  -156,  -156,  -156,   247,
     403,  -156,   460,   404,   195,  -156,   314,   315,   316,   317,
     125,   126,   196,   127,   128,   129,   130,   246,   364,   405,
     406,   131,   197,   132,   133,   134,   135,   247,   136,   407,
     461,   137,   198,   408,   138,   139,   140,   141,   249,   142,
     143,   144,   398,   452,   107,   312,   313,   108,   109,   110,
     111,   247,   247,   250,   462,   463,   112,   113,   238,   239,
    -154,  -154,  -154,  -154,  -154,  -154,   114,   247,  -154,   199,
     464,   200,  -154,   201,   115,   232,   233,   234,   235,   236,
     237,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,   247,
     116,  -149,   467,   202,   117,  -149,   118,   247,   400,   401,
     468,   119,   120,   121,   122,   123,   124,   318,   319,   402,
    -157,  -157,  -157,  -157,  -157,  -157,   247,   403,  -157,   469,
     404,   247,  -157,   247,   471,   203,   472,   125,   126,   204,
     127,   128,   129,   130,   205,   206,   405,   406,   131,   207,
     132,   133,   134,   135,   247,   136,   407,   473,   137,   208,
     408,   138,   139,   140,   141,   251,   142,   143,   144,   398,
     453,   107,   209,   210,   108,   109,   110,   111,   247,   247,
     253,   474,   475,   112,   113,   211,  -158,  -158,  -158,  -158,
    -158,  -158,   254,   114,  -158,   307,   308,   309,  -158,   255,
     258,   115,   232,   233,   234,   235,   236,   237,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,   265,   116,  -150,   332,
     268,   117,  -150,   118,   333,   400,   401,   334,   119,   120,
     121,   122,   123,   124,   336,   363,   402,   240,   241,   242,
     243,   244,   245,   247,   403,  -160,   247,   404,   247,  -160,
     320,   321,   322,   368,   125,   126,   369,   127,   128,   129,
     130,   247,   247,   405,   406,   131,   247,   132,   133,   134,
     135,   247,   136,   407,   247,   137,   247,   408,   138,   139,
     140,   141,   247,   142,   143,   144,   398,   478,   107,   247,
     370,   108,   109,   110,   111,   323,   324,   325,   371,   372,
     112,   113,   373,   240,   241,   242,   243,   244,   245,   374,
     114,  -161,   375,   376,   377,  -161,   378,   379,   115,   232,
     233,   234,   235,   236,   237,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,   380,   116,  -151,   381,   382,   117,  -151,
     118,   383,   400,   401,   384,   119,   120,   121,   122,   123,
     124,   385,   386,   402,   240,   241,   242,   243,   244,   245,
     387,   403,  -162,   388,   404,   389,  -162,   390,   391,   392,
     393,   125,   126,   394,   127,   128,   129,   130,   395,   437,
     405,   406,   131,   397,   132,   133,   134,   135,   439,   136,
     407,   440,   137,   441,   408,   138,   139,   140,   141,   445,
     142,   143,   144,   398,   507,   107,   508,   537,   108,   109,
     110,   111,   446,   448,   449,   480,   481,   112,   113,   538,
     232,   233,   234,   235,   236,   237,   539,   114,   540,   240,
     241,   242,   243,   244,   245,   115,   509,   510,   541,   542,
     559,   560,   561,   562,   563,   566,   186,   329,    28,     0,
       0,   116,   158,     0,     0,   117,     0,   118,     0,   400,
     401,     0,   119,   120,   121,   122,   123,   124,     0,     0,
     402,     0,     0,     0,     0,     0,     0,     0,   403,     0,
       0,   404,     0,     0,     0,     0,     0,     0,   125,   126,
       0,   127,   128,   129,   130,     0,     0,   405,   406,   131,
       0,   132,   133,   134,   135,     0,   136,   407,     0,   137,
       0,   408,   138,   139,   140,   141,     0,   142,   143,   144,
     398,   555,   107,     0,     0,   108,   109,   110,   111,     0,
       0,     0,     0,     0,   112,   113,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,   117,     0,   118,     0,   400,   401,     0,   119,
     120,   121,   122,   123,   124,     0,     0,   402,     0,     0,
       0,     0,     0,     0,     0,   403,     0,     0,   404,     0,
       0,     0,     0,     0,     0,   125,   126,     0,   127,   128,
     129,   130,     0,     0,   405,   406,   131,     0,   132,   133,
     134,   135,     0,   136,   407,     0,   137,     0,   408,   138,
     139,   140,   141,     0,   142,   143,   144,   398,   556,   107,
       0,     0,   108,   109,   110,   111,     0,     0,     0,     0,
       0,   112,   113,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,     0,     0,     0,   117,
       0,   118,     0,   400,   401,     0,   119,   120,   121,   122,
     123,   124,     0,     0,   402,     0,     0,     0,     0,     0,
       0,     0,   403,     0,     0,   404,     0,     0,     0,     0,
       0,     0,   125,   126,     0,   127,   128,   129,   130,     0,
       0,   405,   406,   131,     0,   132,   133,   134,   135,     0,
     136,   407,     0,   137,     0,   408,   138,   139,   140,   141,
       0,   142,   143,   144,   398,   557,   107,     0,     0,   108,
     109,   110,   111,     0,     0,     0,     0,     0,   112,   113,
       0,     0,     0,     0,     0,     0,     0,     0,   114,     0,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,   117,     0,   118,     0,
     400,   401,     0,   119,   120,   121,   122,   123,   124,     0,
       0,   402,     0,     0,     0,     0,     0,     0,     0,   403,
       0,     0,   404,     0,     0,     0,     0,     0,     0,   125,
     126,     0,   127,   128,   129,   130,     0,     0,   405,   406,
     131,     0,   132,   133,   134,   135,     0,   136,   407,     0,
     137,     0,   408,   138,   139,   140,   141,     0,   142,   143,
     144,   398,   558,   107,     0,     0,   108,   109,   110,   111,
       0,     0,     0,     0,     0,   112,   113,     0,     0,     0,
       0,     0,     0,     0,     0,   114,     0,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,   117,     0,   118,     0,   400,   401,     0,
     119,   120,   121,   122,   123,   124,     0,     0,   402,     0,
       0,     0,     0,     0,     0,     0,   403,     0,     0,   404,
       0,     0,     0,     0,     0,     0,   125,   126,     0,   127,
     128,   129,   130,     0,     0,   405,   406,   131,     0,   132,
     133,   134,   135,     0,   136,   407,     0,   137,     0,   408,
     138,   139,   140,   141,     0,   142,   143,   144,   398,   568,
     107,     0,     0,   108,   109,   110,   111,     0,     0,     0,
       0,     0,   112,   113,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
     117,     0,   118,     0,   400,   401,     0,   119,   120,   121,
     122,   123,   124,     0,     0,   402,     0,     0,     0,     0,
       0,     0,     0,   403,     0,     0,   404,     0,     0,     0,
       0,     0,     0,   125,   126,     0,   127,   128,   129,   130,
       0,     0,   405,   406,   131,     0,   132,   133,   134,   135,
       0,   136,   407,     0,   137,     0,   408,   138,   139,   140,
     141,     0,   142,   143,   144,   398,   569,   107,     0,     0,
     108,   109,   110,   111,     0,     0,     0,     0,     0,   112,
     113,     0,     0,     0,     0,     0,     0,     0,     0,   114,
       0,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,   117,     0,   118,
       0,   400,   401,     0,   119,   120,   121,   122,   123,   124,
       0,     0,   402,     0,     0,     0,     0,     0,     0,     0,
     403,     0,     0,   404,     0,     0,     0,     0,     0,     0,
     125,   126,     0,   127,   128,   129,   130,     0,     0,   405,
     406,   131,     0,   132,   133,   134,   135,     0,   136,   407,
       0,   137,     0,   408,   138,   139,   140,   141,     0,   142,
     143,   144,   398,   571,   107,     0,     0,   108,   109,   110,
     111,     0,     0,     0,     0,     0,   112,   113,     0,     0,
       0,     0,     0,     0,     0,     0,   114,     0,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,     0,   117,     0,   118,     0,   400,   401,
       0,   119,   120,   121,   122,   123,   124,     0,     0,   402,
       0,     0,     0,     0,     0,     0,     0,   403,     0,     0,
     404,     0,     0,     0,     0,     0,     0,   125,   126,     0,
     127,   128,   129,   130,     0,     0,   405,   406,   131,     0,
     132,   133,   134,   135,     0,   136,   407,     0,   137,     0,
     408,   138,   139,   140,   141,     0,   142,   143,   144,   398,
     572,   107,     0,     0,   108,   109,   110,   111,     0,     0,
       0,     0,     0,   112,   113,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,   117,     0,   118,     0,   400,   401,     0,   119,   120,
     121,   122,   123,   124,     0,     0,   402,     0,     0,     0,
       0,     0,     0,     0,   403,     0,     0,   404,     0,     0,
       0,     0,     0,     0,   125,   126,     0,   127,   128,   129,
     130,     0,     0,   405,   406,   131,     0,   132,   133,   134,
     135,     0,   136,   407,     0,   137,     0,   408,   138,   139,
     140,   141,     0,   142,   143,   144,   106,     0,   107,   293,
       0,   108,   109,   110,   111,     0,     0,     0,     0,     0,
     112,   113,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   116,     0,     0,     0,   117,     0,
     118,     0,     0,     0,     0,   119,   120,   121,   122,   123,
     124,   230,   231,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,     0,     0,  -145,
       0,   125,   126,  -145,   127,   128,   129,   130,     0,     0,
       0,     0,   131,     0,   132,   133,   134,   135,     0,   136,
       0,     0,   137,     0,     0,   138,   139,   140,   141,     0,
     142,   143,   144,   106,     0,   107,     0,     0,   108,   109,
     110,   111,     0,     0,     0,     0,     0,   112,   113,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,   117,     0,   118,     0,     0,
       0,     0,   119,   120,   121,   122,   123,   124,   230,   231,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,     0,     0,  -146,     0,   125,   126,
    -146,   127,   128,   129,   130,     0,     0,     0,     0,   131,
       0,   132,   133,   134,   135,     0,   136,     0,     0,   137,
       0,     0,   138,   139,   140,   141,     0,   142,   143,   144,
     106,     0,   107,     0,     0,   108,   109,   110,   111,     0,
       0,     0,     0,     0,   112,   113,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,   117,     0,   118,     0,     0,     0,     0,   119,
     120,   121,   122,   123,   124,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,   126,     0,   127,   128,
     129,   130,     0,     0,     0,     0,   131,     0,   132,   133,
     134,   135,     0,   136,     0,     0,   137,     0,    10,   138,
     139,   140,   141,     0,   142,   143,   144,    11,     0,     0,
       0,    40,     0,    41,     0,     0,    12,     0,     0,     0,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,    46,     0,     0,     0,     0,    11,     0,     0,
      47,    40,     0,    41,     0,    48,    12,     0,     0,     0,
      16,     0,     0,    42,    43,     0,     0,     0,     0,     0,
      44,     0,     0,     0,    49,     0,     0,     0,     0,     0,
      45,     0,    46,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,    48,     0,     0,     0,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    32,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      32,  -131,     0,  -131,     0,  -131,  -131,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,
    -131,  -131,     0,     0,  -131,  -135,     0,  -135,  -131,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,     0,     0,  -135,     0,
       0,     0,  -135,  -136,     0,  -136,   100,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,     0,     0,  -136,  -134,     0,  -134,
    -136,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,     0,     0,
    -134,  -138,     0,  -138,  -134,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,     0,     0,  -138,  -139,     0,  -139,  -138,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,     0,     0,  -139,  -140,
       0,  -140,  -139,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
       0,     0,  -140,   227,     0,   228,  -140,   229,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,     0,     0,  -142,   227,     0,   228,
    -142,   229,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,     0,     0,
    -143,     0,     0,     0,  -143,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned short int yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   665,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   489,   491,
     493,   495,   497,   499,   501,   503,     0,     0,   505,     0,
       0,     0,   507,     0,     0,   569,   571,   573,   575,   577,
     579,     0,     0,   581,     0,     0,     0,   583,     0,     0,
       0,     0,     0,     0,     0,   661,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   601,   603,   605,   607,   609,   611,     0,
       0,   613,     0,     0,     0,   615,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   663,   745,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     585,   587,   589,   591,   593,   595,     0,     0,   597,     0,
       0,     0,   599,     0,     0,     0,     0,     0,     0,     0,
       0,   509,   511,   513,   515,   517,   519,   521,   523,     0,
       0,   525,     0,     0,     0,   527,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     617,   619,   621,   623,   625,   627,     0,     0,   629,     0,
       0,     0,   631,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   747,   749,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   633,   635,   637,   639,
     641,   643,     0,     0,   645,     0,     0,     0,   647,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   529,   531,
     533,   535,   537,   539,   541,   543,     0,     0,   545,     0,
       0,     0,   547,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   205,     0,   649,   207,     0,   209,   651,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   211,   213,     0,     0,     0,   215,     0,     0,     0,
       0,   217,     0,     0,   219,     0,   221,     0,     0,     0,
       0,     0,   223,     0,     0,   751,   753,     0,     0,   225,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   653,     0,     0,     0,   655,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   549,   551,   553,   555,   557,
     559,   561,   563,     0,     0,   565,     0,     0,     0,   567,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   657,     0,     0,     0,   659,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   755,   757,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,   759,
     761,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   763,   765,     0,     0,
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
       0,     0,     0,   767,   769,     0,     0,     0,     0,     0,
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
     771,   773,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,   775,   777,     0,
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
       0,     0,     0,     0,   779,   781,     0,     0,     0,     0,
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
       0,   783,   785,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,   787,   789,
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
       0,     0,     0,     0,     0,   791,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   425,   427,   429,   431,   433,   435,   437,
     439,   441,   443,   445,   447,   449,   451,     0,     0,   453,
       0,     0,     0,   455,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     457,   459,   461,   463,   465,   467,   469,   471,   473,   475,
     477,   479,   481,   483,     0,     0,   485,     0,     0,     0,
     487,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     667,     0,   669,     0,     0,   671,   673,   675,   677,     0,
       0,     0,     0,     0,   679,   681,     0,     0,     0,     0,
       0,     0,     0,     0,   683,     0,     0,     0,     0,     0,
       0,     0,   685,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   687,     0,
       0,     0,   689,     0,   691,     0,     0,     0,     0,   693,
     695,   697,   699,   701,   703,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   705,   707,     0,   709,   711,
     713,   715,     0,     0,     0,     0,   717,     0,   719,   721,
     723,   725,     0,   727,     0,     0,   729,     0,     0,   731,
     733,   735,   737,     0,   739,   741,   743,     0,     0,     0,
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
       0,    37,     0,    39,     0,    41,    43,    45,    47,    49,
      51,    53,    55,    57,    59,    61,    63,    65,    67,    69,
      71,    73,     0,     0,    75,    79,     0,    81,    77,    83,
      85,    87,    89,    91,    93,    95,    97,    99,   101,   103,
     105,   107,   109,   111,   113,   115,     0,     0,   117,     0,
       0,     0,   119,   121,     0,   123,     0,   125,   127,   129,
     131,   133,   135,   137,   139,   141,   143,   145,   147,   149,
     151,   153,   155,   157,     0,     0,   159,   163,     0,   165,
     161,   167,   169,   171,   173,   175,   177,   179,   181,   183,
     185,   187,   189,   191,   193,   195,   197,   199,     0,     0,
     201,   227,     0,   229,   203,   231,   233,   235,   237,   239,
     241,   243,   245,   247,   249,   251,   253,   255,   257,   259,
     261,   263,     0,     0,   265,   269,     0,   271,   267,   273,
     275,   277,   279,   281,   283,   285,   287,   289,   291,   293,
     295,   297,   299,   301,   303,   305,     0,     0,   307,   311,
       0,   313,   309,   315,   317,   319,   321,   323,   325,   327,
     329,   331,   333,   335,   337,   339,   341,   343,   345,   347,
       0,     0,   349,     0,     0,     0,   351,     0,   353,   355,
     357,   359,   361,   363,   365,   367,   369,   371,   373,   375,
     377,   379,   381,   383,     0,     0,   385,     0,     0,     0,
     387,     0,   389,   391,   393,   395,   397,   399,   401,   403,
     405,   407,   409,   411,   413,   415,   417,   419,     0,     0,
     421,     0,     0,     0,   423,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   188,   190,     0,   188,   190,     0,   188,   190,     0,
     190,     0,   184,   188,   190,     0,   188,   190,     0,   188,
     190,     0,   188,   190,     0,   188,   190,     0,   190,     0,
     184,   188,   190,     0,   188,   190,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   166,     0,   167,     0,   168,
       0,   169,     0,   170,     0,   171,     0,   172,     0,   173,
       0,   174,     0,   175,     0,   176,     0,   141,     0,   141,
       0,   141,     0,   141,     0,   141,     0,   141,     0,   141,
       0,   141,     0,   141,     0,   141,     0,   141,     0,   141,
       0,   141,     0,   141,     0,   141,     0,   141,     0,   141,
       0,   141,     0,   141,     0,   141,     0,   141,     0,   141,
       0,   141,     0,   141,     0,   141,     0,   141,     0,   141,
       0,   141,     0,   141,     0,   141,     0,   141,     0,   141,
       0,   141,     0,   141,     0,   141,     0,   141,     0,   141,
       0,   141,     0,   141,     0,   141,     0,   141,     0,   141,
       0,   141,     0,   141,     0,   141,     0,   141,     0,   141,
       0,   141,     0,   141,     0,   141,     0,   141,     0,   141,
       0,   141,     0,   141,     0,   141,     0,   141,     0,   141,
       0,   141,     0,   141,     0,   141,     0,   141,     0,   141,
       0,   141,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   144,     0,   144,     0,   144,
       0,   144,     0,   144,     0,   147,     0,   147,     0,   147,
       0,   147,     0,   147,     0,   147,     0,   147,     0,   147,
       0,   147,     0,   147,     0,   147,     0,   147,     0,   147,
       0,   147,     0,   147,     0,   147,     0,   147,     0,   147,
       0,   147,     0,   147,     0,   147,     0,   147,     0,   147,
       0,   147,     0,   147,     0,   147,     0,   147,     0,   147,
       0,   147,     0,   147,     0,   147,     0,   147,     0,   152,
       0,   152,     0,   152,     0,   152,     0,   152,     0,   152,
       0,   152,     0,   152,     0,   152,     0,   152,     0,   152,
       0,   152,     0,   152,     0,   152,     0,   152,     0,   152,
       0,   152,     0,   152,     0,   152,     0,   152,     0,   152,
       0,   152,     0,   152,     0,   152,     0,   152,     0,   152,
       0,   152,     0,   152,     0,   152,     0,   152,     0,   152,
       0,   152,     0,   152,     0,   152,     0,   152,     0,   152,
       0,   152,     0,   152,     0,   152,     0,   152,     0,   155,
       0,   155,     0,   155,     0,   155,     0,   155,     0,   155,
       0,   155,     0,   155,     0,   155,     0,   155,     0,   155,
       0,   155,     0,   155,     0,   155,     0,   155,     0,   155,
       0,   159,     0,   159,     0,   159,     0,   159,     0,   159,
       0,   159,     0,   159,     0,   159,     0,   159,     0,   159,
       0,   159,     0,   159,     0,   159,     0,   159,     0,   159,
       0,   159,     0,   159,     0,   159,     0,   159,     0,   159,
       0,   159,     0,   159,     0,   159,     0,   159,     0,   163,
       0,   163,     0,   163,     0,   163,     0,   163,     0,   163,
       0,   190,     0,   190,     0,   165,     0,   182,     0,   182,
       0,   182,     0,   182,     0,   182,     0,   182,     0,   182,
       0,   182,     0,   182,     0,   182,     0,   182,     0,   182,
       0,   182,     0,   182,     0,   182,     0,   182,     0,   182,
       0,   182,     0,   182,     0,   182,     0,   182,     0,   182,
       0,   182,     0,   182,     0,   182,     0,   182,     0,   182,
       0,   182,     0,   182,     0,   182,     0,   182,     0,   182,
       0,   182,     0,   182,     0,   182,     0,   182,     0,   182,
       0,   182,     0,   182,     0,   190,     0,   190,     0,   190,
       0,   190,     0,   190,     0,   190,     0,   190,     0,   190,
       0,   190,     0,   190,     0,   190,     0,   190,     0,   190,
       0,   190,     0,   190,     0,   190,     0,   190,     0,   190,
       0,   190,     0,   190,     0,   190,     0,   190,     0,   190,
       0,   190,     0
};

static const short int yycheck[] =
{
      86,     0,   115,   246,     7,   121,     5,     4,     5,    38,
      14,   109,   110,     5,    37,     4,   114,    37,    22,    23,
     106,   107,    26,     4,    28,   169,   170,     4,    37,   115,
     174,    40,    73,    74,    38,    37,    37,   368,   369,    37,
       4,    37,    37,    84,     4,     7,     5,     8,    37,     9,
      24,     4,     4,   121,    78,    54,    55,    54,     5,    37,
      37,    85,    54,    37,    63,     8,    63,   398,    24,   110,
       7,    63,    71,    37,    37,     0,    37,    40,    24,    71,
      79,    37,    81,    82,    37,    37,   172,     4,     8,    88,
     119,    37,    96,    92,    56,    54,    99,    40,   121,    98,
     213,   121,   121,   112,    63,    37,   437,    54,   107,    41,
     107,   255,    71,    75,   212,   107,    63,    37,     8,   121,
     121,   364,   121,   121,   121,   121,   121,   213,   214,   121,
       4,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,     8,    37,   121,     8,    24,     8,    37,   107,   112,
     263,   264,    24,     5,   267,   158,    24,    23,    37,    96,
     107,   247,   121,   167,    23,    37,   169,   170,     7,    37,
      37,   174,     6,    37,   121,    37,     7,   263,   264,   116,
     117,   267,   119,   120,   121,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   539,   540,
     541,   542,    38,     8,     8,    55,    37,     8,   119,    40,
       8,     8,     8,     8,     8,     8,     8,     8,     8,   560,
     561,     8,   563,     8,     7,   566,     9,     8,    11,    12,
       8,    81,    37,    37,     7,   249,    37,   251,    88,    37,
      37,    37,   255,    37,    37,    37,    37,    37,    98,    14,
      37,    16,    37,    18,     5,     6,    37,   107,     7,    37,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
     108,   367,     8,   111,   112,   113,     8,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       8,    37,   398,    54,    55,    37,     8,     8,    24,     8,
     406,     8,    63,    24,     8,     8,   412,   413,     4,   442,
      71,    37,    46,     9,    19,    20,    37,    51,    79,    37,
      81,    82,    24,    37,    38,    37,    37,    88,    37,     4,
      37,    92,   438,    37,    37,    37,   442,    98,    37,   445,
     446,    40,   448,   449,    37,     7,   107,    40,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   121,
     121,   467,   468,   469,    23,   471,   472,   473,   474,   475,
      23,   477,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    37,   411,    37,    40,
      37,    24,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    24,   508,    37,    37,    24,    24,    41,   230,   231,
     516,   544,    24,    24,    37,     5,     6,     7,    37,    37,
      10,    11,    12,    13,    24,    37,    37,    24,    23,    19,
      20,   537,   538,    24,    39,    24,    24,    37,   544,    29,
      37,   547,   548,   549,   550,    23,    37,    37,    37,    37,
      23,    37,    24,    24,    40,    24,    41,    37,   564,   565,
      40,   567,    23,    53,   570,    37,    37,    57,    37,    59,
      37,    61,    62,    40,    64,    65,    66,    67,    68,    69,
      27,    28,    72,    29,    30,    31,    32,    33,    34,    37,
      80,    37,    40,    83,    23,    41,   234,   235,   236,   237,
      90,    91,    23,    93,    94,    95,    96,    41,    42,    99,
     100,   101,    23,   103,   104,   105,   106,    37,   108,   109,
      40,   111,    23,   113,   114,   115,   116,   117,    71,   119,
     120,   121,     5,     6,     7,   232,   233,    10,    11,    12,
      13,    37,    37,    24,    40,    40,    19,    20,    27,    28,
      29,    30,    31,    32,    33,    34,    29,    37,    37,    23,
      40,    23,    41,    23,    37,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    37,
      53,    37,    40,    23,    57,    41,    59,    37,    61,    62,
      40,    64,    65,    66,    67,    68,    69,   238,   239,    72,
      29,    30,    31,    32,    33,    34,    37,    80,    37,    40,
      83,    37,    41,    37,    40,    23,    40,    90,    91,    23,
      93,    94,    95,    96,    23,    23,    99,   100,   101,    23,
     103,   104,   105,   106,    37,   108,   109,    40,   111,    23,
     113,   114,   115,   116,   117,    40,   119,   120,   121,     5,
       6,     7,    23,    23,    10,    11,    12,    13,    37,    37,
      24,    40,    40,    19,    20,    23,    29,    30,    31,    32,
      33,    34,     4,    29,    37,   227,   228,   229,    41,    40,
       8,    37,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     6,    53,    37,     5,
      38,    57,    41,    59,     8,    61,    62,     8,    64,    65,
      66,    67,    68,    69,     8,     8,    72,    29,    30,    31,
      32,    33,    34,    37,    80,    37,    37,    83,    37,    41,
     240,   241,   242,     5,    90,    91,     5,    93,    94,    95,
      96,    37,    37,    99,   100,   101,    37,   103,   104,   105,
     106,    37,   108,   109,    37,   111,    37,   113,   114,   115,
     116,   117,    37,   119,   120,   121,     5,     6,     7,    37,
       4,    10,    11,    12,    13,   243,   244,   245,     6,    38,
      19,    20,     7,    29,    30,    31,    32,    33,    34,     7,
      29,    37,     7,     7,     7,    41,     7,     7,    37,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     7,    53,    37,     7,     7,    57,    41,
      59,     7,    61,    62,     7,    64,    65,    66,    67,    68,
      69,     7,     7,    72,    29,    30,    31,    32,    33,    34,
       7,    80,    37,     7,    83,     7,    41,     7,     7,     7,
       7,    90,    91,     7,    93,    94,    95,    96,     7,     5,
      99,   100,   101,     8,   103,   104,   105,   106,     4,   108,
     109,     4,   111,     4,   113,   114,   115,   116,   117,     7,
     119,   120,   121,     5,     6,     7,     4,    86,    10,    11,
      12,    13,     7,     7,     7,     7,     7,    19,    20,    86,
      21,    22,    23,    24,    25,    26,     5,    29,     5,    29,
      30,    31,    32,    33,    34,    37,   121,   121,     5,     5,
       8,     5,     5,    76,     5,     5,   114,   251,    13,    -1,
      -1,    53,    87,    -1,    -1,    57,    -1,    59,    -1,    61,
      62,    -1,    64,    65,    66,    67,    68,    69,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      -1,    93,    94,    95,    96,    -1,    -1,    99,   100,   101,
      -1,   103,   104,   105,   106,    -1,   108,   109,    -1,   111,
      -1,   113,   114,   115,   116,   117,    -1,   119,   120,   121,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    57,    -1,    59,    -1,    61,    62,    -1,    64,
      65,    66,    67,    68,    69,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    93,    94,
      95,    96,    -1,    -1,    99,   100,   101,    -1,   103,   104,
     105,   106,    -1,   108,   109,    -1,   111,    -1,   113,   114,
     115,   116,   117,    -1,   119,   120,   121,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,
      -1,    59,    -1,    61,    62,    -1,    64,    65,    66,    67,
      68,    69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    93,    94,    95,    96,    -1,
      -1,    99,   100,   101,    -1,   103,   104,   105,   106,    -1,
     108,   109,    -1,   111,    -1,   113,   114,   115,   116,   117,
      -1,   119,   120,   121,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    59,    -1,
      61,    62,    -1,    64,    65,    66,    67,    68,    69,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    -1,    93,    94,    95,    96,    -1,    -1,    99,   100,
     101,    -1,   103,   104,   105,   106,    -1,   108,   109,    -1,
     111,    -1,   113,   114,   115,   116,   117,    -1,   119,   120,
     121,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    57,    -1,    59,    -1,    61,    62,    -1,
      64,    65,    66,    67,    68,    69,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    93,
      94,    95,    96,    -1,    -1,    99,   100,   101,    -1,   103,
     104,   105,   106,    -1,   108,   109,    -1,   111,    -1,   113,
     114,   115,   116,   117,    -1,   119,   120,   121,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      57,    -1,    59,    -1,    61,    62,    -1,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    93,    94,    95,    96,
      -1,    -1,    99,   100,   101,    -1,   103,   104,   105,   106,
      -1,   108,   109,    -1,   111,    -1,   113,   114,   115,   116,
     117,    -1,   119,   120,   121,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    59,
      -1,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    93,    94,    95,    96,    -1,    -1,    99,
     100,   101,    -1,   103,   104,   105,   106,    -1,   108,   109,
      -1,   111,    -1,   113,   114,   115,   116,   117,    -1,   119,
     120,   121,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    57,    -1,    59,    -1,    61,    62,
      -1,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      93,    94,    95,    96,    -1,    -1,    99,   100,   101,    -1,
     103,   104,   105,   106,    -1,   108,   109,    -1,   111,    -1,
     113,   114,   115,   116,   117,    -1,   119,   120,   121,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    57,    -1,    59,    -1,    61,    62,    -1,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    -1,    93,    94,    95,
      96,    -1,    -1,    99,   100,   101,    -1,   103,   104,   105,
     106,    -1,   108,   109,    -1,   111,    -1,   113,   114,   115,
     116,   117,    -1,   119,   120,   121,     5,    -1,     7,     8,
      -1,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    -1,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    37,
      -1,    90,    91,    41,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,   101,    -1,   103,   104,   105,   106,    -1,   108,
      -1,    -1,   111,    -1,    -1,   114,   115,   116,   117,    -1,
     119,   120,   121,     5,    -1,     7,    -1,    -1,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    57,    -1,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    37,    -1,    90,    91,
      41,    93,    94,    95,    96,    -1,    -1,    -1,    -1,   101,
      -1,   103,   104,   105,   106,    -1,   108,    -1,    -1,   111,
      -1,    -1,   114,   115,   116,   117,    -1,   119,   120,   121,
       5,    -1,     7,    -1,    -1,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    57,    -1,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    -1,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,   101,    -1,   103,   104,
     105,   106,    -1,   108,    -1,    -1,   111,    -1,     5,   114,
     115,   116,   117,    -1,   119,   120,   121,    54,    -1,    -1,
      -1,    58,    -1,    60,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    89,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      97,    58,    -1,    60,    -1,   102,    63,    -1,    -1,    -1,
     107,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    14,    -1,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    37,    14,    -1,    16,    41,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,    37,    -1,
      -1,    -1,    41,    14,    -1,    16,   121,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    37,    14,    -1,    16,
      41,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      37,    14,    -1,    16,    41,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    37,    14,    -1,    16,    41,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,    37,    14,
      -1,    16,    41,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    37,    14,    -1,    16,    41,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    37,    14,    -1,    16,
      41,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      37,    -1,    -1,    -1,    41,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,   123,   151,     0,    78,    85,   124,   152,   121,   121,
       5,    54,    63,    79,    82,    92,   107,   121,   125,   128,
     134,   154,   156,   157,     4,     4,   158,   126,   156,   134,
     121,     4,    37,   155,    55,    81,    88,    98,   107,   132,
      58,    60,    70,    71,    77,    87,    89,    97,   102,   121,
     129,   134,    71,   131,   134,     4,   134,   135,   134,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,   127,     5,    38,   119,
      73,    74,    84,   110,   130,    23,    23,   134,   127,     7,
     121,   127,   121,     6,   121,   121,     5,     7,    10,    11,
      12,    13,    19,    20,    29,    37,    53,    57,    59,    64,
      65,    66,    67,    68,    69,    90,    91,    93,    94,    95,
      96,   101,   103,   104,   105,   106,   108,   111,   114,   115,
     116,   117,   119,   120,   121,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   152,    38,
       7,   119,   133,   134,   159,   121,   136,   157,   160,     7,
       7,     4,     9,     4,     7,   150,   161,   150,   140,   150,
     138,   138,   140,   140,   140,   138,   139,   150,   161,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    39,     7,     9,    11,    12,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    14,    16,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    41,    37,     6,    71,
      24,    40,   121,    24,     4,    40,   121,   134,     8,   160,
     160,   150,   160,    40,   112,     6,     8,   112,    38,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   138,     8,   150,   161,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   141,   141,   141,
     142,   142,   143,   143,   144,   144,   144,   144,   145,   145,
     146,   146,   146,   147,   147,   147,   148,   150,   134,   159,
     160,   121,     5,     8,     8,     4,     8,   161,   161,   161,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,     8,    42,    38,   121,   153,     5,     5,
       4,     6,    38,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,   148,     8,     5,     6,
      61,    62,    72,    80,    83,    99,   100,   109,   113,   137,
     150,   157,   153,   153,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,     5,   153,     4,
       4,     4,     7,    56,    75,     7,     7,   150,     7,     7,
       4,   134,     6,     6,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,     8,     8,    40,    40,    40,
       8,    40,    40,    40,    40,    40,     8,   153,     6,   161,
       7,     7,   150,   150,     4,   150,   150,   121,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,     6,     4,   121,
     121,     8,     8,     8,     8,     4,     9,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,   150,    86,    86,     5,
       5,     5,     5,   150,     4,   150,   150,   153,   153,   153,
     153,     4,   161,     8,     8,     6,     6,     6,     6,     8,
       5,     5,    76,     5,   153,   153,     5,   153,     6,     6,
     153,     6,     6
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
#line 763 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).code_) = new Main(reverseListTLDeclaration((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listtldeclaration_)), reverseListDeclaration((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.listdeclaration_))); YY_RESULT_Code_= ((*yyvalp).code_); ;}
    break;

  case 3:

/* Line 936 of glr.c  */
#line 765 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).tldeclaration_) = new DImport((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 4:

/* Line 936 of glr.c  */
#line 766 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).tldeclaration_) = new DExpose((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 5:

/* Line 936 of glr.c  */
#line 768 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).declaration_) = new DNamespace((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.string_), reverseListDeclaration((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.listdeclaration_)));  ;}
    break;

  case 6:

/* Line 936 of glr.c  */
#line 769 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).declaration_) = new DDefaultFunction(reverseListFunctionSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.listfunctionspecifier_)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (8))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.listparameterdeclaration_), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 7:

/* Line 936 of glr.c  */
#line 770 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).declaration_) = new DFunction(reverseListFunctionSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.listfunctionspecifier_)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.listparameterdeclaration_), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 8:

/* Line 936 of glr.c  */
#line 771 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).declaration_) = new DOperator(reverseListFunctionSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.listfunctionspecifier_)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.operatorname_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.listparameterdeclaration_), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 9:

/* Line 936 of glr.c  */
#line 772 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).declaration_) = new DOperatorInfo((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.operatortrait_));  ;}
    break;

  case 10:

/* Line 936 of glr.c  */
#line 773 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).declaration_) = new DTypeDecl(reverseListTypeSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.listtypespecifier_)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 11:

/* Line 936 of glr.c  */
#line 774 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).declaration_) = new DTypeConv((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (11))].yystate.yysemantics.yysval.type_), reverseListConversionSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (11))].yystate.yysemantics.yysval.listconversionspecifier_)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (11))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (11))].yystate.yysemantics.yysval.string_), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((10) - (11))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 12:

/* Line 936 of glr.c  */
#line 775 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).declaration_) = new DExtern((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.prototype_));  ;}
    break;

  case 13:

/* Line 936 of glr.c  */
#line 776 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).declaration_) = new DIVariable(reverseListVariableSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.listvariablespecifier_)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 14:

/* Line 936 of glr.c  */
#line 777 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).declaration_) = new DVariable(reverseListVariableSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.listvariablespecifier_)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 15:

/* Line 936 of glr.c  */
#line 779 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).prototype_) = new PFunction(reverseListFunctionSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.listfunctionspecifier_)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.listparameterdeclaration_));  ;}
    break;

  case 16:

/* Line 936 of glr.c  */
#line 781 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONLnot();  ;}
    break;

  case 17:

/* Line 936 of glr.c  */
#line 782 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONPreInc();  ;}
    break;

  case 18:

/* Line 936 of glr.c  */
#line 783 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONPreDec();  ;}
    break;

  case 19:

/* Line 936 of glr.c  */
#line 784 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONBnot();  ;}
    break;

  case 20:

/* Line 936 of glr.c  */
#line 785 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONMul();  ;}
    break;

  case 21:

/* Line 936 of glr.c  */
#line 786 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONExp();  ;}
    break;

  case 22:

/* Line 936 of glr.c  */
#line 787 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONDiv();  ;}
    break;

  case 23:

/* Line 936 of glr.c  */
#line 788 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONRDiv();  ;}
    break;

  case 24:

/* Line 936 of glr.c  */
#line 789 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONMod();  ;}
    break;

  case 25:

/* Line 936 of glr.c  */
#line 790 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONAdd();  ;}
    break;

  case 26:

/* Line 936 of glr.c  */
#line 791 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONSub();  ;}
    break;

  case 27:

/* Line 936 of glr.c  */
#line 792 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONLSh();  ;}
    break;

  case 28:

/* Line 936 of glr.c  */
#line 793 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONRSh();  ;}
    break;

  case 29:

/* Line 936 of glr.c  */
#line 794 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONLT();  ;}
    break;

  case 30:

/* Line 936 of glr.c  */
#line 795 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONGT();  ;}
    break;

  case 31:

/* Line 936 of glr.c  */
#line 796 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONLE();  ;}
    break;

  case 32:

/* Line 936 of glr.c  */
#line 797 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONGE();  ;}
    break;

  case 33:

/* Line 936 of glr.c  */
#line 798 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONE();  ;}
    break;

  case 34:

/* Line 936 of glr.c  */
#line 799 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONNE();  ;}
    break;

  case 35:

/* Line 936 of glr.c  */
#line 800 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONBand();  ;}
    break;

  case 36:

/* Line 936 of glr.c  */
#line 801 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONBor();  ;}
    break;

  case 37:

/* Line 936 of glr.c  */
#line 802 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONBxor();  ;}
    break;

  case 38:

/* Line 936 of glr.c  */
#line 803 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONLand();  ;}
    break;

  case 39:

/* Line 936 of glr.c  */
#line 804 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONLor();  ;}
    break;

  case 40:

/* Line 936 of glr.c  */
#line 805 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONLxor();  ;}
    break;

  case 41:

/* Line 936 of glr.c  */
#line 806 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONRight();  ;}
    break;

  case 42:

/* Line 936 of glr.c  */
#line 807 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatorname_) = new ONLeft();  ;}
    break;

  case 43:

/* Line 936 of glr.c  */
#line 809 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).operatortrait_) = new OTIdentity((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.operatorname_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 44:

/* Line 936 of glr.c  */
#line 811 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).functionspecifier_) = new FSEntryPoint();  ;}
    break;

  case 45:

/* Line 936 of glr.c  */
#line 812 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).functionspecifier_) = new FSPure();  ;}
    break;

  case 46:

/* Line 936 of glr.c  */
#line 813 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).functionspecifier_) = new FSConst();  ;}
    break;

  case 47:

/* Line 936 of glr.c  */
#line 814 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).functionspecifier_) = new FSInline();  ;}
    break;

  case 48:

/* Line 936 of glr.c  */
#line 815 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).functionspecifier_) = new FSAssociative();  ;}
    break;

  case 49:

/* Line 936 of glr.c  */
#line 816 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).functionspecifier_) = new FSCommutative();  ;}
    break;

  case 50:

/* Line 936 of glr.c  */
#line 817 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).functionspecifier_) = new FSAntiCommutative();  ;}
    break;

  case 51:

/* Line 936 of glr.c  */
#line 818 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).functionspecifier_) = new FSInverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.operatorname_));  ;}
    break;

  case 52:

/* Line 936 of glr.c  */
#line 819 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).functionspecifier_) = new FSSelfInverse();  ;}
    break;

  case 53:

/* Line 936 of glr.c  */
#line 821 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).conversionspecifier_) = new CSUp();  ;}
    break;

  case 54:

/* Line 936 of glr.c  */
#line 822 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).conversionspecifier_) = new CSDown();  ;}
    break;

  case 55:

/* Line 936 of glr.c  */
#line 823 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).conversionspecifier_) = new CSImplicit();  ;}
    break;

  case 56:

/* Line 936 of glr.c  */
#line 825 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).variablespecifier_) = new VSConst();  ;}
    break;

  case 57:

/* Line 936 of glr.c  */
#line 827 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).typespecifier_) = new TSAlign((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.int_));  ;}
    break;

  case 58:

/* Line 936 of glr.c  */
#line 828 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).typespecifier_) = new TSGeneric((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.listgenericparam_));  ;}
    break;

  case 59:

/* Line 936 of glr.c  */
#line 829 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).typespecifier_) = new TSInteger();  ;}
    break;

  case 60:

/* Line 936 of glr.c  */
#line 830 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).typespecifier_) = new TSReal();  ;}
    break;

  case 61:

/* Line 936 of glr.c  */
#line 832 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).genericparam_) = new TSGParam((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 62:

/* Line 936 of glr.c  */
#line 834 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).type_) = new TAddress();  ;}
    break;

  case 63:

/* Line 936 of glr.c  */
#line 835 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).type_) = new TByte();  ;}
    break;

  case 64:

/* Line 936 of glr.c  */
#line 836 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).type_) = new TCustom((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 65:

/* Line 936 of glr.c  */
#line 837 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).type_) = new TFixedArray((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.int_));  ;}
    break;

  case 66:

/* Line 936 of glr.c  */
#line 838 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).type_) = new TGenericArray((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.type_));  ;}
    break;

  case 67:

/* Line 936 of glr.c  */
#line 839 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).type_) = new TStruct(reverseListStructMemberDeclaration((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.liststructmemberdeclaration_)));  ;}
    break;

  case 68:

/* Line 936 of glr.c  */
#line 840 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).type_) = new TType();  ;}
    break;

  case 69:

/* Line 936 of glr.c  */
#line 842 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).structmemberdeclaration_) = new SMDMemberDeclaration((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 70:

/* Line 936 of glr.c  */
#line 844 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).parameterdeclaration_) = new PDAutoParameter(reverseListVariableSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listvariablespecifier_)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 71:

/* Line 936 of glr.c  */
#line 845 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).parameterdeclaration_) = new PDTypedParameter(reverseListVariableSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.listvariablespecifier_)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 72:

/* Line 936 of glr.c  */
#line 847 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SReturn((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 73:

/* Line 936 of glr.c  */
#line 848 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SExpression((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 74:

/* Line 936 of glr.c  */
#line 849 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SScope(reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 75:

/* Line 936 of glr.c  */
#line 850 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SIf((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.expression_), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 76:

/* Line 936 of glr.c  */
#line 851 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SIfElse((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (11))].yystate.yysemantics.yysval.expression_), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (11))].yystate.yysemantics.yysval.liststatement_)), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((10) - (11))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 77:

/* Line 936 of glr.c  */
#line 852 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SLoop((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.expression_), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 78:

/* Line 936 of glr.c  */
#line 853 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SWhile((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.expression_), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 79:

/* Line 936 of glr.c  */
#line 854 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SUntil((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.expression_), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 80:

/* Line 936 of glr.c  */
#line 855 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SFor((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (11))].yystate.yysemantics.yysval.listexpression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (11))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (11))].yystate.yysemantics.yysval.listexpression_), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((10) - (11))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 81:

/* Line 936 of glr.c  */
#line 856 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SForEach((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (10))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (10))].yystate.yysemantics.yysval.expression_), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (10))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 82:

/* Line 936 of glr.c  */
#line 857 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SForAll((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (10))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (10))].yystate.yysemantics.yysval.expression_), reverseListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (10))].yystate.yysemantics.yysval.liststatement_)));  ;}
    break;

  case 83:

/* Line 936 of glr.c  */
#line 858 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SBreak();  ;}
    break;

  case 84:

/* Line 936 of glr.c  */
#line 859 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SContinue();  ;}
    break;

  case 85:

/* Line 936 of glr.c  */
#line 860 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SBreakpoint();  ;}
    break;

  case 86:

/* Line 936 of glr.c  */
#line 861 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SIVariable(reverseListVariableSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.listvariablespecifier_)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 87:

/* Line 936 of glr.c  */
#line 862 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).statement_) = new SVariable(reverseListVariableSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.listvariablespecifier_)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 88:

/* Line 936 of glr.c  */
#line 864 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).rvalue_) = new RVIdent((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 89:

/* Line 936 of glr.c  */
#line 865 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).rvalue_) = new RVQualified((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.string_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 90:

/* Line 936 of glr.c  */
#line 867 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EDouble((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.double_));  ;}
    break;

  case 91:

/* Line 936 of glr.c  */
#line 868 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EInteger((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.int_));  ;}
    break;

  case 92:

/* Line 936 of glr.c  */
#line 869 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 93:

/* Line 936 of glr.c  */
#line 870 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EChar((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.string_));  ;}
    break;

  case 94:

/* Line 936 of glr.c  */
#line 871 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EPi();  ;}
    break;

  case 95:

/* Line 936 of glr.c  */
#line 872 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ERValue((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 96:

/* Line 936 of glr.c  */
#line 873 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 97:

/* Line 936 of glr.c  */
#line 875 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EArray((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.listexpression_));  ;}
    break;

  case 98:

/* Line 936 of glr.c  */
#line 876 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EList((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.listexpression_));  ;}
    break;

  case 99:

/* Line 936 of glr.c  */
#line 877 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EAComp((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.listexpression_));  ;}
    break;

  case 100:

/* Line 936 of glr.c  */
#line 878 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ELComp((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.listexpression_));  ;}
    break;

  case 101:

/* Line 936 of glr.c  */
#line 879 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIndex((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 102:

/* Line 936 of glr.c  */
#line 880 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ESimpleCall((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 103:

/* Line 936 of glr.c  */
#line 881 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ECall((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.listexpression_));  ;}
    break;

  case 104:

/* Line 936 of glr.c  */
#line 882 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EPostInc((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 105:

/* Line 936 of glr.c  */
#line 883 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EPostDec((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 106:

/* Line 936 of glr.c  */
#line 884 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EAddress((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 107:

/* Line 936 of glr.c  */
#line 885 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinSExt((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 108:

/* Line 936 of glr.c  */
#line 886 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinZExt((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 109:

/* Line 936 of glr.c  */
#line 887 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinAddI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 110:

/* Line 936 of glr.c  */
#line 888 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinSubI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 111:

/* Line 936 of glr.c  */
#line 889 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinMulI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 112:

/* Line 936 of glr.c  */
#line 890 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinUdivI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 113:

/* Line 936 of glr.c  */
#line 891 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinSdivI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 114:

/* Line 936 of glr.c  */
#line 892 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinUremI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 115:

/* Line 936 of glr.c  */
#line 893 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinSremI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 116:

/* Line 936 of glr.c  */
#line 894 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinAndI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 117:

/* Line 936 of glr.c  */
#line 895 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinOrI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 118:

/* Line 936 of glr.c  */
#line 896 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinXorI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 119:

/* Line 936 of glr.c  */
#line 897 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinShlI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 120:

/* Line 936 of glr.c  */
#line 898 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinLshrI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 121:

/* Line 936 of glr.c  */
#line 899 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinAshrI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 122:

/* Line 936 of glr.c  */
#line 900 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinNotI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 123:

/* Line 936 of glr.c  */
#line 901 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinNegI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 124:

/* Line 936 of glr.c  */
#line 902 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinCEqI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 125:

/* Line 936 of glr.c  */
#line 903 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinCNeI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 126:

/* Line 936 of glr.c  */
#line 904 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinCLtI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 127:

/* Line 936 of glr.c  */
#line 905 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinCGtI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 128:

/* Line 936 of glr.c  */
#line 906 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinCLeI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 129:

/* Line 936 of glr.c  */
#line 907 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EIntrinCGeI((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.type_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 130:

/* Line 936 of glr.c  */
#line 908 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 131:

/* Line 936 of glr.c  */
#line 910 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ELnot((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 132:

/* Line 936 of glr.c  */
#line 911 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EPreInc((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 133:

/* Line 936 of glr.c  */
#line 912 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EPreDec((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.rvalue_));  ;}
    break;

  case 134:

/* Line 936 of glr.c  */
#line 913 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ENeg((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 135:

/* Line 936 of glr.c  */
#line 914 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EBnot((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 136:

/* Line 936 of glr.c  */
#line 915 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EPos((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 137:

/* Line 936 of glr.c  */
#line 916 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 138:

/* Line 936 of glr.c  */
#line 918 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EMul((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 139:

/* Line 936 of glr.c  */
#line 919 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EDiv((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 140:

/* Line 936 of glr.c  */
#line 920 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EMod((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 141:

/* Line 936 of glr.c  */
#line 921 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 142:

/* Line 936 of glr.c  */
#line 923 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EAdd((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 143:

/* Line 936 of glr.c  */
#line 924 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ESub((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 144:

/* Line 936 of glr.c  */
#line 925 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 145:

/* Line 936 of glr.c  */
#line 927 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ELSh((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 146:

/* Line 936 of glr.c  */
#line 928 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ERSh((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 147:

/* Line 936 of glr.c  */
#line 929 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 148:

/* Line 936 of glr.c  */
#line 931 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ELT((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 149:

/* Line 936 of glr.c  */
#line 932 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EGT((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 150:

/* Line 936 of glr.c  */
#line 933 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ELE((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 151:

/* Line 936 of glr.c  */
#line 934 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EGE((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 152:

/* Line 936 of glr.c  */
#line 935 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 153:

/* Line 936 of glr.c  */
#line 937 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EE((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 154:

/* Line 936 of glr.c  */
#line 938 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ENE((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 155:

/* Line 936 of glr.c  */
#line 939 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 156:

/* Line 936 of glr.c  */
#line 941 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EBand((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 157:

/* Line 936 of glr.c  */
#line 942 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EBor((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 158:

/* Line 936 of glr.c  */
#line 943 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EBxor((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 159:

/* Line 936 of glr.c  */
#line 944 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 160:

/* Line 936 of glr.c  */
#line 946 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ELand((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 161:

/* Line 936 of glr.c  */
#line 947 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ELor((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 162:

/* Line 936 of glr.c  */
#line 948 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ELxor((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 163:

/* Line 936 of glr.c  */
#line 949 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 164:

/* Line 936 of glr.c  */
#line 951 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EConditional((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 165:

/* Line 936 of glr.c  */
#line 952 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 166:

/* Line 936 of glr.c  */
#line 954 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 167:

/* Line 936 of glr.c  */
#line 955 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EAddAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 168:

/* Line 936 of glr.c  */
#line 956 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ESubAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 169:

/* Line 936 of glr.c  */
#line 957 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EMulAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 170:

/* Line 936 of glr.c  */
#line 958 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EDivAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 171:

/* Line 936 of glr.c  */
#line 959 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EModAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 172:

/* Line 936 of glr.c  */
#line 960 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EAndAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 173:

/* Line 936 of glr.c  */
#line 961 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EOrAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 174:

/* Line 936 of glr.c  */
#line 962 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new EXorAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 175:

/* Line 936 of glr.c  */
#line 963 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ELShAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 176:

/* Line 936 of glr.c  */
#line 964 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = new ERShAssign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.rvalue_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 177:

/* Line 936 of glr.c  */
#line 965 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).expression_) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_);  ;}
    break;

  case 178:

/* Line 936 of glr.c  */
#line 967 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listtldeclaration_) = 0;  ;}
    break;

  case 179:

/* Line 936 of glr.c  */
#line 968 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listtldeclaration_) = new ListTLDeclaration((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tldeclaration_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listtldeclaration_));  ;}
    break;

  case 180:

/* Line 936 of glr.c  */
#line 970 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listdeclaration_) = 0;  ;}
    break;

  case 181:

/* Line 936 of glr.c  */
#line 971 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listdeclaration_) = new ListDeclaration((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.declaration_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listdeclaration_));  ;}
    break;

  case 182:

/* Line 936 of glr.c  */
#line 973 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).liststatement_) = 0;  ;}
    break;

  case 183:

/* Line 936 of glr.c  */
#line 974 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).liststatement_) = new ListStatement((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.statement_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.liststatement_));  ;}
    break;

  case 184:

/* Line 936 of glr.c  */
#line 976 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listtypespecifier_) = 0;  ;}
    break;

  case 185:

/* Line 936 of glr.c  */
#line 977 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listtypespecifier_) = new ListTypeSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.typespecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listtypespecifier_));  ;}
    break;

  case 186:

/* Line 936 of glr.c  */
#line 979 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listconversionspecifier_) = 0;  ;}
    break;

  case 187:

/* Line 936 of glr.c  */
#line 980 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listconversionspecifier_) = new ListConversionSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.conversionspecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listconversionspecifier_));  ;}
    break;

  case 188:

/* Line 936 of glr.c  */
#line 982 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listfunctionspecifier_) = 0;  ;}
    break;

  case 189:

/* Line 936 of glr.c  */
#line 983 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listfunctionspecifier_) = new ListFunctionSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.functionspecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listfunctionspecifier_));  ;}
    break;

  case 190:

/* Line 936 of glr.c  */
#line 985 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listvariablespecifier_) = 0;  ;}
    break;

  case 191:

/* Line 936 of glr.c  */
#line 986 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listvariablespecifier_) = new ListVariableSpecifier((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.variablespecifier_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.listvariablespecifier_));  ;}
    break;

  case 192:

/* Line 936 of glr.c  */
#line 988 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).liststructmemberdeclaration_) = 0;  ;}
    break;

  case 193:

/* Line 936 of glr.c  */
#line 989 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).liststructmemberdeclaration_) = new ListStructMemberDeclaration((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.structmemberdeclaration_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.liststructmemberdeclaration_));  ;}
    break;

  case 194:

/* Line 936 of glr.c  */
#line 991 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listgenericparam_) = new ListGenericParam((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.genericparam_));  ;}
    break;

  case 195:

/* Line 936 of glr.c  */
#line 992 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listgenericparam_) = new ListGenericParam((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.genericparam_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.listgenericparam_));  ;}
    break;

  case 196:

/* Line 936 of glr.c  */
#line 994 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listparameterdeclaration_) = 0;  ;}
    break;

  case 197:

/* Line 936 of glr.c  */
#line 995 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listparameterdeclaration_) = new ListParameterDeclaration((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.parameterdeclaration_));  ;}
    break;

  case 198:

/* Line 936 of glr.c  */
#line 996 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listparameterdeclaration_) = new ListParameterDeclaration((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.parameterdeclaration_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.listparameterdeclaration_));  ;}
    break;

  case 199:

/* Line 936 of glr.c  */
#line 998 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listexpression_) = new ListExpression((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.expression_));  ;}
    break;

  case 200:

/* Line 936 of glr.c  */
#line 999 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"
    { ((*yyvalp).listexpression_) = new ListExpression((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.expression_), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.listexpression_));  ;}
    break;



/* Line 936 of glr.c  */
#line 4103 "parse.cpp"
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



