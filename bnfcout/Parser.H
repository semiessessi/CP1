#ifndef PARSER_HEADER_FILE
#define PARSER_HEADER_FILE

#include<vector>
#include<string>


class Code;
class TLDeclaration;
class Declaration;
class Prototype;
class OperatorName;
class OperatorTrait;
class FunctionSpecifier;
class ConversionSpecifier;
class VariableSpecifier;
class TypeSpecifier;
class GenericParam;
class Type;
class StructMemberDeclaration;
class ParameterDeclaration;
class Statement;
class RValue;
class Expression;
class ListTLDeclaration;
class ListDeclaration;
class ListStatement;
class ListTypeSpecifier;
class ListConversionSpecifier;
class ListFunctionSpecifier;
class ListVariableSpecifier;
class ListStructMemberDeclaration;
class ListGenericParam;
class ListParameterDeclaration;
class ListExpression;
class ListType;

typedef union
{
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
} YYSTYPE;

Code* pCode(FILE *inp);
Code* pCode(const char *str);



#define _ERROR_ 258
#define _SYMB_0 259
#define _SYMB_1 260
#define _SYMB_2 261
#define _SYMB_3 262
#define _SYMB_4 263
#define _SYMB_5 264
#define _SYMB_6 265
#define _SYMB_7 266
#define _SYMB_8 267
#define _SYMB_9 268
#define _SYMB_10 269
#define _SYMB_11 270
#define _SYMB_12 271
#define _SYMB_13 272
#define _SYMB_14 273
#define _SYMB_15 274
#define _SYMB_16 275
#define _SYMB_17 276
#define _SYMB_18 277
#define _SYMB_19 278
#define _SYMB_20 279
#define _SYMB_21 280
#define _SYMB_22 281
#define _SYMB_23 282
#define _SYMB_24 283
#define _SYMB_25 284
#define _SYMB_26 285
#define _SYMB_27 286
#define _SYMB_28 287
#define _SYMB_29 288
#define _SYMB_30 289
#define _SYMB_31 290
#define _SYMB_32 291
#define _SYMB_33 292
#define _SYMB_34 293
#define _SYMB_35 294
#define _SYMB_36 295
#define _SYMB_37 296
#define _SYMB_38 297
#define _SYMB_39 298
#define _SYMB_40 299
#define _SYMB_41 300
#define _SYMB_42 301
#define _SYMB_43 302
#define _SYMB_44 303
#define _SYMB_45 304
#define _SYMB_46 305
#define _SYMB_47 306
#define _SYMB_48 307
#define _SYMB_49 308
#define _SYMB_50 309
#define _SYMB_51 310
#define _SYMB_52 311
#define _SYMB_53 312
#define _SYMB_54 313
#define _SYMB_55 314
#define _SYMB_56 315
#define _SYMB_57 316
#define _SYMB_58 317
#define _SYMB_59 318
#define _SYMB_60 319
#define _SYMB_61 320
#define _SYMB_62 321
#define _SYMB_63 322
#define _SYMB_64 323
#define _SYMB_65 324
#define _SYMB_66 325
#define _SYMB_67 326
#define _SYMB_68 327
#define _SYMB_69 328
#define _SYMB_70 329
#define _SYMB_71 330
#define _SYMB_72 331
#define _SYMB_73 332
#define _SYMB_74 333
#define _SYMB_75 334
#define _SYMB_76 335
#define _SYMB_77 336
#define _SYMB_78 337
#define _SYMB_79 338
#define _SYMB_80 339
#define _SYMB_81 340
#define _SYMB_82 341
#define _SYMB_83 342
#define _SYMB_84 343
#define _SYMB_85 344
#define _SYMB_86 345
#define _SYMB_87 346
#define _SYMB_88 347
#define _SYMB_89 348
#define _SYMB_90 349
#define _SYMB_91 350
#define _SYMB_92 351
#define _SYMB_93 352
#define _SYMB_94 353
#define _SYMB_95 354
#define _SYMB_96 355
#define _SYMB_97 356
#define _SYMB_98 357
#define _SYMB_99 358
#define _SYMB_100 359
#define _SYMB_101 360
#define _SYMB_102 361
#define _SYMB_103 362
#define _SYMB_104 363
#define _SYMB_105 364
#define _SYMB_106 365
#define _SYMB_107 366
#define _SYMB_108 367
#define _SYMB_109 368
#define _SYMB_110 369
#define _SYMB_111 370
#define _SYMB_112 371
#define _SYMB_113 372
#define _SYMB_114 373
#define _SYMB_115 374
#define _SYMB_116 375
#define _SYMB_117 376
#define _INTEGER_ 377
#define _DOUBLE_ 378
#define _IDENT_ 379

extern YYSTYPE yylval;

#endif
