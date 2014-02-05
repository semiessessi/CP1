#ifndef PARSER_HEADER_FILE
#define PARSER_HEADER_FILE

class Code;
class TLDeclaration;
class Declaration;
class Prototype;
class OperatorName;
class OperatorTrait;
class FunctionSpecifier;
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
class ListFunctionSpecifier;
class ListVariableSpecifier;
class ListStructMemberDeclaration;
class ListGenericParam;
class ListParameterDeclaration;
class ListExpression;

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
  ListFunctionSpecifier* listfunctionspecifier_;
  ListVariableSpecifier* listvariablespecifier_;
  ListStructMemberDeclaration* liststructmemberdeclaration_;
  ListGenericParam* listgenericparam_;
  ListParameterDeclaration* listparameterdeclaration_;
  ListExpression* listexpression_;
} YYSTYPE;

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
#define _SYMB_118 377
#define _SYMB_119 378
#define _SYMB_120 379
#define _SYMB_121 380
#define _SYMB_122 381
#define _SYMB_123 382
#define _SYMB_124 383
#define _SYMB_125 384
#define _SYMB_126 385
#define _SYMB_127 386
#define _SYMB_128 387
#define _SYMB_129 388
#define _SYMB_130 389
#define _SYMB_131 390
#define _SYMB_132 391
#define _SYMB_133 392
#define _SYMB_134 393
#define _SYMB_135 394
#define _SYMB_136 395
#define _SYMB_137 396
#define _SYMB_138 397
#define _SYMB_139 398
#define _SYMB_140 399
#define _SYMB_141 400
#define _SYMB_142 401
#define _SYMB_143 402
#define _SYMB_144 403
#define _SYMB_145 404
#define _SYMB_146 405
#define _SYMB_147 406
#define _SYMB_148 407
#define _SYMB_149 408
#define _SYMB_150 409
#define _SYMB_151 410
#define _SYMB_152 411
#define _SYMB_153 412
#define _SYMB_154 413
#define _SYMB_155 414
#define _SYMB_156 415
#define _SYMB_157 416
#define _SYMB_158 417
#define _SYMB_159 418
#define _SYMB_160 419
#define _SYMB_161 420
#define _SYMB_162 421
#define _SYMB_163 422
#define _SYMB_164 423
#define _SYMB_165 424
#define _SYMB_166 425
#define _SYMB_167 426
#define _SYMB_168 427
#define _SYMB_169 428
#define _SYMB_170 429
#define _SYMB_171 430
#define _SYMB_172 431
#define _SYMB_173 432
#define _SYMB_174 433
#define _SYMB_175 434
#define _SYMB_176 435
#define _SYMB_177 436
#define _SYMB_178 437
#define _SYMB_179 438
#define _SYMB_180 439
#define _SYMB_181 440
#define _SYMB_182 441
#define _SYMB_183 442
#define _SYMB_184 443
#define _SYMB_185 444
#define _SYMB_186 445
#define _SYMB_187 446
#define _SYMB_188 447
#define _SYMB_189 448
#define _SYMB_190 449
#define _SYMB_191 450
#define _SYMB_192 451
#define _SYMB_193 452
#define _SYMB_194 453
#define _SYMB_195 454
#define _SYMB_196 455
#define _SYMB_197 456
#define _SYMB_198 457
#define _SYMB_199 458
#define _SYMB_200 459
#define _SYMB_201 460
#define _SYMB_202 461
#define _SYMB_203 462
#define _SYMB_204 463
#define _SYMB_205 464
#define _SYMB_206 465
#define _SYMB_207 466
#define _INTEGER_ 467
#define _DOUBLE_ 468
#define _IDENT_ 469

extern YYSTYPE yylval;
Code* pCode(FILE *inp);


#endif
