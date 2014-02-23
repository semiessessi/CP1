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
  void visitFSConst(FSConst* fsconst);
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
  void visitEIntrinCast(EIntrinCast* eintrincast);
  void visitEIntrinConvert(EIntrinConvert* eintrinconvert);
  void visitEIntrinAddI(EIntrinAddI* eintrinaddi);
  void visitEIntrinSubI(EIntrinSubI* eintrinsubi);
  void visitEIntrinMulI(EIntrinMulI* eintrinmuli);
  void visitEIntrinUdivI(EIntrinUdivI* eintrinudivi);
  void visitEIntrinSdivI(EIntrinSdivI* eintrinsdivi);
  void visitEIntrinUremI(EIntrinUremI* eintrinuremi);
  void visitEIntrinSremI(EIntrinSremI* eintrinsremi);
  void visitEIntrinAndI(EIntrinAndI* eintrinandi);
  void visitEIntrinOrI(EIntrinOrI* eintrinori);
  void visitEIntrinXorI(EIntrinXorI* eintrinxori);
  void visitEIntrinShlI(EIntrinShlI* eintrinshli);
  void visitEIntrinLshrI(EIntrinLshrI* eintrinlshri);
  void visitEIntrinAshrI(EIntrinAshrI* eintrinashri);
  void visitEIntrinNotI(EIntrinNotI* eintrinnoti);
  void visitEIntrinNegI(EIntrinNegI* eintrinnegi);
  void visitEIntrinCEqI(EIntrinCEqI* eintrinceqi);
  void visitEIntrinCNeI(EIntrinCNeI* eintrincnei);
  void visitEIntrinCLtI(EIntrinCLtI* eintrinclti);
  void visitEIntrinCGtI(EIntrinCGtI* eintrincgti);
  void visitEIntrinCLeI(EIntrinCLeI* eintrinclei);
  void visitEIntrinCGeI(EIntrinCGeI* eintrincgei);
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

