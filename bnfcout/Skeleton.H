#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.H"

class Skeleton : public Visitor
{
 public:

  void visitCode(Code* code); /* abstract class */
  void visitMain(Main* main);
  void visitTLDeclaration(TLDeclaration* tldeclaration); /* abstract class */
  void visitDImport(DImport* dimport);
  void visitDExpose(DExpose* dexpose);
  void visitDeclaration(Declaration* declaration); /* abstract class */
  void visitDNamespace(DNamespace* dnamespace);
  void visitDDefaultFunction(DDefaultFunction* ddefaultfunction);
  void visitDFunction(DFunction* dfunction);
  void visitDOperator(DOperator* doperator);
  void visitDOperatorInfo(DOperatorInfo* doperatorinfo);
  void visitDTypeDecl(DTypeDecl* dtypedecl);
  void visitDTypeConv(DTypeConv* dtypeconv);
  void visitDExtern(DExtern* dextern);
  void visitDIVariable(DIVariable* divariable);
  void visitDVariable(DVariable* dvariable);
  void visitPrototype(Prototype* prototype); /* abstract class */
  void visitPFunction(PFunction* pfunction);
  void visitOperatorName(OperatorName* operatorname); /* abstract class */
  void visitONLnot(ONLnot* onlnot);
  void visitONPreInc(ONPreInc* onpreinc);
  void visitONPreDec(ONPreDec* onpredec);
  void visitONBnot(ONBnot* onbnot);
  void visitONMul(ONMul* onmul);
  void visitONExp(ONExp* onexp);
  void visitONDiv(ONDiv* ondiv);
  void visitONRDiv(ONRDiv* onrdiv);
  void visitONMod(ONMod* onmod);
  void visitONAdd(ONAdd* onadd);
  void visitONSub(ONSub* onsub);
  void visitONLSh(ONLSh* onlsh);
  void visitONRSh(ONRSh* onrsh);
  void visitONLT(ONLT* onlt);
  void visitONGT(ONGT* ongt);
  void visitONLE(ONLE* onle);
  void visitONGE(ONGE* onge);
  void visitONE(ONE* one);
  void visitONNE(ONNE* onne);
  void visitONBand(ONBand* onband);
  void visitONBor(ONBor* onbor);
  void visitONBxor(ONBxor* onbxor);
  void visitONLand(ONLand* onland);
  void visitONLor(ONLor* onlor);
  void visitONLxor(ONLxor* onlxor);
  void visitONRight(ONRight* onright);
  void visitONLeft(ONLeft* onleft);
  void visitOperatorTrait(OperatorTrait* operatortrait); /* abstract class */
  void visitOTIdentity(OTIdentity* otidentity);
  void visitFunctionSpecifier(FunctionSpecifier* functionspecifier); /* abstract class */
  void visitFSEntryPoint(FSEntryPoint* fsentrypoint);
  void visitFSPure(FSPure* fspure);
  void visitFSInline(FSInline* fsinline);
  void visitFSAssociative(FSAssociative* fsassociative);
  void visitFSCommutative(FSCommutative* fscommutative);
  void visitFSAntiCommutative(FSAntiCommutative* fsanticommutative);
  void visitFSInverse(FSInverse* fsinverse);
  void visitFSSelfInverse(FSSelfInverse* fsselfinverse);
  void visitConversionSpecifier(ConversionSpecifier* conversionspecifier); /* abstract class */
  void visitCSUp(CSUp* csup);
  void visitCSDown(CSDown* csdown);
  void visitCSImplicit(CSImplicit* csimplicit);
  void visitVariableSpecifier(VariableSpecifier* variablespecifier); /* abstract class */
  void visitVSConst(VSConst* vsconst);
  void visitTypeSpecifier(TypeSpecifier* typespecifier); /* abstract class */
  void visitTSAlign(TSAlign* tsalign);
  void visitTSGeneric(TSGeneric* tsgeneric);
  void visitTSInteger(TSInteger* tsinteger);
  void visitTSReal(TSReal* tsreal);
  void visitGenericParam(GenericParam* genericparam); /* abstract class */
  void visitTSGParam(TSGParam* tsgparam);
  void visitType(Type* type); /* abstract class */
  void visitTAddress(TAddress* taddress);
  void visitTByte(TByte* tbyte);
  void visitTCustom(TCustom* tcustom);
  void visitTFixedArray(TFixedArray* tfixedarray);
  void visitTGenericArray(TGenericArray* tgenericarray);
  void visitTStruct(TStruct* tstruct);
  void visitTType(TType* ttype);
  void visitStructMemberDeclaration(StructMemberDeclaration* structmemberdeclaration); /* abstract class */
  void visitSMDMemberDeclaration(SMDMemberDeclaration* smdmemberdeclaration);
  void visitParameterDeclaration(ParameterDeclaration* parameterdeclaration); /* abstract class */
  void visitPDAutoParameter(PDAutoParameter* pdautoparameter);
  void visitPDTypedParameter(PDTypedParameter* pdtypedparameter);
  void visitStatement(Statement* statement); /* abstract class */
  void visitSReturn(SReturn* sreturn);
  void visitSExpression(SExpression* sexpression);
  void visitSScope(SScope* sscope);
  void visitSIf(SIf* sif);
  void visitSIfElse(SIfElse* sifelse);
  void visitSLoop(SLoop* sloop);
  void visitSWhile(SWhile* swhile);
  void visitSUntil(SUntil* suntil);
  void visitSFor(SFor* sfor);
  void visitSForEach(SForEach* sforeach);
  void visitSForAll(SForAll* sforall);
  void visitSBreak(SBreak* sbreak);
  void visitSContinue(SContinue* scontinue);
  void visitSBreakpoint(SBreakpoint* sbreakpoint);
  void visitSIVariable(SIVariable* sivariable);
  void visitSVariable(SVariable* svariable);
  void visitRValue(RValue* rvalue); /* abstract class */
  void visitRVIdent(RVIdent* rvident);
  void visitRVQualified(RVQualified* rvqualified);
  void visitExpression(Expression* expression); /* abstract class */
  void visitEDouble(EDouble* edouble);
  void visitEInteger(EInteger* einteger);
  void visitEString(EString* estring);
  void visitEChar(EChar* echar);
  void visitEPi(EPi* epi);
  void visitERValue(ERValue* ervalue);
  void visitEArray(EArray* earray);
  void visitEList(EList* elist);
  void visitEAComp(EAComp* eacomp);
  void visitELComp(ELComp* elcomp);
  void visitEIndex(EIndex* eindex);
  void visitESimpleCall(ESimpleCall* esimplecall);
  void visitECall(ECall* ecall);
  void visitEPostInc(EPostInc* epostinc);
  void visitEPostDec(EPostDec* epostdec);
  void visitEAddress(EAddress* eaddress);
  void visitEIntrinSExt(EIntrinSExt* eintrinsext);
  void visitEIntrinZExt(EIntrinZExt* eintrinzext);
  void visitEIntrinAddB(EIntrinAddB* eintrinaddb);
  void visitEIntrinSubB(EIntrinSubB* eintrinsubb);
  void visitEIntrinMulB(EIntrinMulB* eintrinmulb);
  void visitEIntrinUdivB(EIntrinUdivB* eintrinudivb);
  void visitEIntrinSdivB(EIntrinSdivB* eintrinsdivb);
  void visitEIntrinUremB(EIntrinUremB* eintrinuremb);
  void visitEIntrinSremB(EIntrinSremB* eintrinsremb);
  void visitEIntrinAndB(EIntrinAndB* eintrinandb);
  void visitEIntrinOrB(EIntrinOrB* eintrinorb);
  void visitEIntrinXorB(EIntrinXorB* eintrinxorb);
  void visitEIntrinShlB(EIntrinShlB* eintrinshlb);
  void visitEIntrinLshrB(EIntrinLshrB* eintrinlshrb);
  void visitEIntrinAshrB(EIntrinAshrB* eintrinashrb);
  void visitEIntrinNotB(EIntrinNotB* eintrinnotb);
  void visitEIntrinNegB(EIntrinNegB* eintrinnegb);
  void visitEIntrinCEqB(EIntrinCEqB* eintrinceqb);
  void visitEIntrinCNeB(EIntrinCNeB* eintrincneb);
  void visitEIntrinCLtB(EIntrinCLtB* eintrincltb);
  void visitEIntrinCGtB(EIntrinCGtB* eintrincgtb);
  void visitEIntrinCLeB(EIntrinCLeB* eintrincleb);
  void visitEIntrinCGeB(EIntrinCGeB* eintrincgeb);
  void visitEIntrinAdd2B(EIntrinAdd2B* eintrinadd2b);
  void visitEIntrinSub2B(EIntrinSub2B* eintrinsub2b);
  void visitEIntrinMul2B(EIntrinMul2B* eintrinmul2b);
  void visitEIntrinUdiv2B(EIntrinUdiv2B* eintrinudiv2b);
  void visitEIntrinSdiv2B(EIntrinSdiv2B* eintrinsdiv2b);
  void visitEIntrinUrem2B(EIntrinUrem2B* eintrinurem2b);
  void visitEIntrinSrem2B(EIntrinSrem2B* eintrinsrem2b);
  void visitEIntrinAnd2B(EIntrinAnd2B* eintrinand2b);
  void visitEIntrinOr2B(EIntrinOr2B* eintrinor2b);
  void visitEIntrinXor2B(EIntrinXor2B* eintrinxor2b);
  void visitEIntrinShl2B(EIntrinShl2B* eintrinshl2b);
  void visitEIntrinLshr2B(EIntrinLshr2B* eintrinlshr2b);
  void visitEIntrinAshr2B(EIntrinAshr2B* eintrinashr2b);
  void visitEIntrinNot2B(EIntrinNot2B* eintrinnot2b);
  void visitEIntrinNeg2B(EIntrinNeg2B* eintrinneg2b);
  void visitEIntrinCEq2B(EIntrinCEq2B* eintrinceq2b);
  void visitEIntrinCNe2B(EIntrinCNe2B* eintrincne2b);
  void visitEIntrinCLt2B(EIntrinCLt2B* eintrinclt2b);
  void visitEIntrinCGt2B(EIntrinCGt2B* eintrincgt2b);
  void visitEIntrinCLe2B(EIntrinCLe2B* eintrincle2b);
  void visitEIntrinCGe2B(EIntrinCGe2B* eintrincge2b);
  void visitEIntrinAdd4B(EIntrinAdd4B* eintrinadd4b);
  void visitEIntrinSub4B(EIntrinSub4B* eintrinsub4b);
  void visitEIntrinMul4B(EIntrinMul4B* eintrinmul4b);
  void visitEIntrinUdiv4B(EIntrinUdiv4B* eintrinudiv4b);
  void visitEIntrinSdiv4B(EIntrinSdiv4B* eintrinsdiv4b);
  void visitEIntrinUrem4B(EIntrinUrem4B* eintrinurem4b);
  void visitEIntrinSrem4B(EIntrinSrem4B* eintrinsrem4b);
  void visitEIntrinAnd4B(EIntrinAnd4B* eintrinand4b);
  void visitEIntrinOr4B(EIntrinOr4B* eintrinor4b);
  void visitEIntrinXor4B(EIntrinXor4B* eintrinxor4b);
  void visitEIntrinShl4B(EIntrinShl4B* eintrinshl4b);
  void visitEIntrinLshr4B(EIntrinLshr4B* eintrinlshr4b);
  void visitEIntrinAshr4B(EIntrinAshr4B* eintrinashr4b);
  void visitEIntrinNot4B(EIntrinNot4B* eintrinnot4b);
  void visitEIntrinNeg4B(EIntrinNeg4B* eintrinneg4b);
  void visitEIntrinCEq4B(EIntrinCEq4B* eintrinceq4b);
  void visitEIntrinCNe4B(EIntrinCNe4B* eintrincne4b);
  void visitEIntrinCLt4B(EIntrinCLt4B* eintrinclt4b);
  void visitEIntrinCGt4B(EIntrinCGt4B* eintrincgt4b);
  void visitEIntrinCLe4B(EIntrinCLe4B* eintrincle4b);
  void visitEIntrinCGe4B(EIntrinCGe4B* eintrincge4b);
  void visitEIntrinAdd8B(EIntrinAdd8B* eintrinadd8b);
  void visitEIntrinSub8B(EIntrinSub8B* eintrinsub8b);
  void visitEIntrinMul8B(EIntrinMul8B* eintrinmul8b);
  void visitEIntrinUdiv8B(EIntrinUdiv8B* eintrinudiv8b);
  void visitEIntrinSdiv8B(EIntrinSdiv8B* eintrinsdiv8b);
  void visitEIntrinUrem8B(EIntrinUrem8B* eintrinurem8b);
  void visitEIntrinSrem8B(EIntrinSrem8B* eintrinsrem8b);
  void visitEIntrinAnd8B(EIntrinAnd8B* eintrinand8b);
  void visitEIntrinOr8B(EIntrinOr8B* eintrinor8b);
  void visitEIntrinXor8B(EIntrinXor8B* eintrinxor8b);
  void visitEIntrinShl8B(EIntrinShl8B* eintrinshl8b);
  void visitEIntrinLshr8B(EIntrinLshr8B* eintrinlshr8b);
  void visitEIntrinAshr8B(EIntrinAshr8B* eintrinashr8b);
  void visitEIntrinNot8B(EIntrinNot8B* eintrinnot8b);
  void visitEIntrinNeg8B(EIntrinNeg8B* eintrinneg8b);
  void visitEIntrinCEq8B(EIntrinCEq8B* eintrinceq8b);
  void visitEIntrinCNe8B(EIntrinCNe8B* eintrincne8b);
  void visitEIntrinCLt8B(EIntrinCLt8B* eintrinclt8b);
  void visitEIntrinCGt8B(EIntrinCGt8B* eintrincgt8b);
  void visitEIntrinCLe8B(EIntrinCLe8B* eintrincle8b);
  void visitEIntrinCGe8B(EIntrinCGe8B* eintrincge8b);
  void visitEIntrinAddB4V(EIntrinAddB4V* eintrinaddb4v);
  void visitEIntrinSubB4V(EIntrinSubB4V* eintrinsubb4v);
  void visitEIntrinMulB4V(EIntrinMulB4V* eintrinmulb4v);
  void visitEIntrinUdivB4V(EIntrinUdivB4V* eintrinudivb4v);
  void visitEIntrinSdivB4V(EIntrinSdivB4V* eintrinsdivb4v);
  void visitEIntrinUremB4V(EIntrinUremB4V* eintrinuremb4v);
  void visitEIntrinSremB4V(EIntrinSremB4V* eintrinsremb4v);
  void visitEIntrinShlB4V(EIntrinShlB4V* eintrinshlb4v);
  void visitEIntrinLshrB4V(EIntrinLshrB4V* eintrinlshrb4v);
  void visitEIntrinAshrB4V(EIntrinAshrB4V* eintrinashrb4v);
  void visitEIntrinNegB4V(EIntrinNegB4V* eintrinnegb4v);
  void visitEIntrinAddB8V(EIntrinAddB8V* eintrinaddb8v);
  void visitEIntrinSubB8V(EIntrinSubB8V* eintrinsubb8v);
  void visitEIntrinMulB8V(EIntrinMulB8V* eintrinmulb8v);
  void visitEIntrinUdivB8V(EIntrinUdivB8V* eintrinudivb8v);
  void visitEIntrinSdivB8V(EIntrinSdivB8V* eintrinsdivb8v);
  void visitEIntrinUremB8V(EIntrinUremB8V* eintrinuremb8v);
  void visitEIntrinSremB8V(EIntrinSremB8V* eintrinsremb8v);
  void visitEIntrinShlB8V(EIntrinShlB8V* eintrinshlb8v);
  void visitEIntrinLshrB8V(EIntrinLshrB8V* eintrinlshrb8v);
  void visitEIntrinAshrB8V(EIntrinAshrB8V* eintrinashrb8v);
  void visitEIntrinNegB8V(EIntrinNegB8V* eintrinnegb8v);
  void visitEIntrinAdd2F(EIntrinAdd2F* eintrinadd2f);
  void visitEIntrinSub2F(EIntrinSub2F* eintrinsub2f);
  void visitEIntrinMul2F(EIntrinMul2F* eintrinmul2f);
  void visitEIntrinUdiv2F(EIntrinUdiv2F* eintrinudiv2f);
  void visitEIntrinUrem2F(EIntrinUrem2F* eintrinurem2f);
  void visitEIntrinAdd4F(EIntrinAdd4F* eintrinadd4f);
  void visitEIntrinSub4F(EIntrinSub4F* eintrinsub4f);
  void visitEIntrinMul4F(EIntrinMul4F* eintrinmul4f);
  void visitEIntrinUdiv4F(EIntrinUdiv4F* eintrinudiv4f);
  void visitEIntrinUrem4F(EIntrinUrem4F* eintrinurem4f);
  void visitEIntrinAdd8F(EIntrinAdd8F* eintrinadd8f);
  void visitEIntrinSub8F(EIntrinSub8F* eintrinsub8f);
  void visitEIntrinMul8F(EIntrinMul8F* eintrinmul8f);
  void visitEIntrinUdiv8F(EIntrinUdiv8F* eintrinudiv8f);
  void visitEIntrinUrem8F(EIntrinUrem8F* eintrinurem8f);
  void visitEIntrinAdd4F4V(EIntrinAdd4F4V* eintrinadd4f4v);
  void visitEIntrinSub4F4V(EIntrinSub4F4V* eintrinsub4f4v);
  void visitEIntrinMul4F4V(EIntrinMul4F4V* eintrinmul4f4v);
  void visitEIntrinUdiv4F4V(EIntrinUdiv4F4V* eintrinudiv4f4v);
  void visitEIntrinUrem4F4V(EIntrinUrem4F4V* eintrinurem4f4v);
  void visitELnot(ELnot* elnot);
  void visitEPreInc(EPreInc* epreinc);
  void visitEPreDec(EPreDec* epredec);
  void visitENeg(ENeg* eneg);
  void visitEBnot(EBnot* ebnot);
  void visitEPos(EPos* epos);
  void visitEMul(EMul* emul);
  void visitEDiv(EDiv* ediv);
  void visitEMod(EMod* emod);
  void visitEAdd(EAdd* eadd);
  void visitESub(ESub* esub);
  void visitELSh(ELSh* elsh);
  void visitERSh(ERSh* ersh);
  void visitELT(ELT* elt);
  void visitEGT(EGT* egt);
  void visitELE(ELE* ele);
  void visitEGE(EGE* ege);
  void visitEE(EE* ee);
  void visitENE(ENE* ene);
  void visitEBand(EBand* eband);
  void visitEBor(EBor* ebor);
  void visitEBxor(EBxor* ebxor);
  void visitELand(ELand* eland);
  void visitELor(ELor* elor);
  void visitELxor(ELxor* elxor);
  void visitEConditional(EConditional* econditional);
  void visitEAssign(EAssign* eassign);
  void visitEAddAssign(EAddAssign* eaddassign);
  void visitESubAssign(ESubAssign* esubassign);
  void visitEMulAssign(EMulAssign* emulassign);
  void visitEDivAssign(EDivAssign* edivassign);
  void visitEModAssign(EModAssign* emodassign);
  void visitEAndAssign(EAndAssign* eandassign);
  void visitEOrAssign(EOrAssign* eorassign);
  void visitEXorAssign(EXorAssign* exorassign);
  void visitELShAssign(ELShAssign* elshassign);
  void visitERShAssign(ERShAssign* ershassign);
  void visitListTLDeclaration(ListTLDeclaration* listtldeclaration);  void visitListDeclaration(ListDeclaration* listdeclaration);  void visitListStatement(ListStatement* liststatement);  void visitListTypeSpecifier(ListTypeSpecifier* listtypespecifier);  void visitListConversionSpecifier(ListConversionSpecifier* listconversionspecifier);  void visitListFunctionSpecifier(ListFunctionSpecifier* listfunctionspecifier);  void visitListVariableSpecifier(ListVariableSpecifier* listvariablespecifier);  void visitListStructMemberDeclaration(ListStructMemberDeclaration* liststructmemberdeclaration);  void visitListGenericParam(ListGenericParam* listgenericparam);  void visitListParameterDeclaration(ListParameterDeclaration* listparameterdeclaration);  void visitListExpression(ListExpression* listexpression);
  void visitCstring(CString p);  void visitCchar(CChar p);  void visitOperator(Operator p);
  void visitIdent(String s);
  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
};

#endif

