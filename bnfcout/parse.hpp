
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison GLR parsers in C
   
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
     _INTEGER_ = 377,
     _DOUBLE_ = 378,
     _IDENT_ = 379
   };
#endif


#ifndef YYSTYPE
typedef union YYSTYPE
{

/* Line 2638 of glr.c  */
#line 590 "C:\\Users\\Semi\\Documents\\cp1\\cp1\\cp1\\.y"

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
  ConversionSpecifier* conversionspecifier_;
  VariableSpecifier* variablespecifier_;
  TypeSpecifier* typespecifier_;
  GenericParam* genericparam_;
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
  ListConversionSpecifier* listconversionspecifier_;
  ListFunctionSpecifier* listfunctionspecifier_;
  ListVariableSpecifier* listvariablespecifier_;
  ListStructMemberDeclaration* liststructmemberdeclaration_;
  ListGenericParam* listgenericparam_;
  ListParameterDeclaration* listparameterdeclaration_;
  ListExpression* listexpression_;
  ListType* listtype_;




/* Line 2638 of glr.c  */
#line 213 "parse.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{

  int first_line;
  int first_column;
  int last_line;
  int last_column;

} YYLTYPE;
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



extern YYSTYPE yylval;

extern YYLTYPE yylloc;


