#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.H"


class Skeleton : public Visitor
{
public:
  void visitCode(Code* p);
  void visitTLDeclaration(TLDeclaration* p);
  void visitDeclaration(Declaration* p);
  void visitPrototype(Prototype* p);
  void visitOperatorName(OperatorName* p);
  void visitOperatorTrait(OperatorTrait* p);
  void visitFunctionSpecifier(FunctionSpecifier* p);
  void visitConversionSpecifier(ConversionSpecifier* p);
  void visitVariableSpecifier(VariableSpecifier* p);
  void visitTypeSpecifier(TypeSpecifier* p);
  void visitGenericParam(GenericParam* p);
  void visitType(Type* p);
  void visitStructMemberDeclaration(StructMemberDeclaration* p);
  void visitParameterDeclaration(ParameterDeclaration* p);
  void visitStatement(Statement* p);
  void visitRValue(RValue* p);
  void visitExpression(Expression* p);
  void visitMain(Main* p);
  void visitDImport(DImport* p);
  void visitDExpose(DExpose* p);
  void visitDNamespace(DNamespace* p);
  void visitDDefaultFunction(DDefaultFunction* p);
  void visitDFunction(DFunction* p);
  void visitDOperator(DOperator* p);
  void visitDOperatorInfo(DOperatorInfo* p);
  void visitDTypeDecl(DTypeDecl* p);
  void visitDTypeConv(DTypeConv* p);
  void visitDExtern(DExtern* p);
  void visitDIVariable(DIVariable* p);
  void visitDVariable(DVariable* p);
  void visitPFunction(PFunction* p);
  void visitONLnot(ONLnot* p);
  void visitONPreInc(ONPreInc* p);
  void visitONPreDec(ONPreDec* p);
  void visitONBnot(ONBnot* p);
  void visitONMul(ONMul* p);
  void visitONExp(ONExp* p);
  void visitONDiv(ONDiv* p);
  void visitONRDiv(ONRDiv* p);
  void visitONMod(ONMod* p);
  void visitONAdd(ONAdd* p);
  void visitONSub(ONSub* p);
  void visitONLSh(ONLSh* p);
  void visitONRSh(ONRSh* p);
  void visitONLT(ONLT* p);
  void visitONGT(ONGT* p);
  void visitONLE(ONLE* p);
  void visitONGE(ONGE* p);
  void visitONE(ONE* p);
  void visitONNE(ONNE* p);
  void visitONBand(ONBand* p);
  void visitONBor(ONBor* p);
  void visitONBxor(ONBxor* p);
  void visitONLand(ONLand* p);
  void visitONLor(ONLor* p);
  void visitONLxor(ONLxor* p);
  void visitONRight(ONRight* p);
  void visitONLeft(ONLeft* p);
  void visitOTIdentity(OTIdentity* p);
  void visitFSEntryPoint(FSEntryPoint* p);
  void visitFSPure(FSPure* p);
  void visitFSConst(FSConst* p);
  void visitFSInline(FSInline* p);
  void visitFSAssociative(FSAssociative* p);
  void visitFSCommutative(FSCommutative* p);
  void visitFSAntiCommutative(FSAntiCommutative* p);
  void visitFSInverse(FSInverse* p);
  void visitFSSelfInverse(FSSelfInverse* p);
  void visitCSUp(CSUp* p);
  void visitCSDown(CSDown* p);
  void visitCSImplicit(CSImplicit* p);
  void visitVSConst(VSConst* p);
  void visitTSAlign(TSAlign* p);
  void visitTSGeneric(TSGeneric* p);
  void visitTSInteger(TSInteger* p);
  void visitTSReal(TSReal* p);
  void visitTSGParam(TSGParam* p);
  void visitTAddress(TAddress* p);
  void visitTByte(TByte* p);
  void visitTCustom(TCustom* p);
  void visitTFixedArray(TFixedArray* p);
  void visitTGenericArray(TGenericArray* p);
  void visitTList(TList* p);
  void visitTInfiniteList(TInfiniteList* p);
  void visitTStruct(TStruct* p);
  void visitTFunction(TFunction* p);
  void visitTType(TType* p);
  void visitSMDMemberDeclaration(SMDMemberDeclaration* p);
  void visitPDAutoParameter(PDAutoParameter* p);
  void visitPDTypedParameter(PDTypedParameter* p);
  void visitSReturn(SReturn* p);
  void visitSExpression(SExpression* p);
  void visitSScope(SScope* p);
  void visitSIf(SIf* p);
  void visitSIfElse(SIfElse* p);
  void visitSLoop(SLoop* p);
  void visitSWhile(SWhile* p);
  void visitSUntil(SUntil* p);
  void visitSFor(SFor* p);
  void visitSForEach(SForEach* p);
  void visitSForAll(SForAll* p);
  void visitSBreak(SBreak* p);
  void visitSContinue(SContinue* p);
  void visitSBreakpoint(SBreakpoint* p);
  void visitSIVariable(SIVariable* p);
  void visitSVariable(SVariable* p);
  void visitRVIdent(RVIdent* p);
  void visitRVQualified(RVQualified* p);
  void visitEDouble(EDouble* p);
  void visitEInteger(EInteger* p);
  void visitEString(EString* p);
  void visitEChar(EChar* p);
  void visitEPi(EPi* p);
  void visitERValue(ERValue* p);
  void visitEArray(EArray* p);
  void visitEList(EList* p);
  void visitEAComp(EAComp* p);
  void visitELComp(ELComp* p);
  void visitEIndex(EIndex* p);
  void visitESimpleCall(ESimpleCall* p);
  void visitECall(ECall* p);
  void visitEPostInc(EPostInc* p);
  void visitEPostDec(EPostDec* p);
  void visitEAddress(EAddress* p);
  void visitELeft(ELeft* p);
  void visitERight(ERight* p);
  void visitEIntrinSExt(EIntrinSExt* p);
  void visitEIntrinZExt(EIntrinZExt* p);
  void visitEIntrinCast(EIntrinCast* p);
  void visitEIntrinConvert(EIntrinConvert* p);
  void visitEIntrinAddI(EIntrinAddI* p);
  void visitEIntrinSubI(EIntrinSubI* p);
  void visitEIntrinMulI(EIntrinMulI* p);
  void visitEIntrinUdivI(EIntrinUdivI* p);
  void visitEIntrinSdivI(EIntrinSdivI* p);
  void visitEIntrinUremI(EIntrinUremI* p);
  void visitEIntrinSremI(EIntrinSremI* p);
  void visitEIntrinAndI(EIntrinAndI* p);
  void visitEIntrinOrI(EIntrinOrI* p);
  void visitEIntrinXorI(EIntrinXorI* p);
  void visitEIntrinShlI(EIntrinShlI* p);
  void visitEIntrinLshrI(EIntrinLshrI* p);
  void visitEIntrinAshrI(EIntrinAshrI* p);
  void visitEIntrinNotI(EIntrinNotI* p);
  void visitEIntrinNegI(EIntrinNegI* p);
  void visitEIntrinCEqI(EIntrinCEqI* p);
  void visitEIntrinCNeI(EIntrinCNeI* p);
  void visitEIntrinCLtI(EIntrinCLtI* p);
  void visitEIntrinCGtI(EIntrinCGtI* p);
  void visitEIntrinCLeI(EIntrinCLeI* p);
  void visitEIntrinCGeI(EIntrinCGeI* p);
  void visitELnot(ELnot* p);
  void visitEPreInc(EPreInc* p);
  void visitEPreDec(EPreDec* p);
  void visitENeg(ENeg* p);
  void visitEBnot(EBnot* p);
  void visitEPos(EPos* p);
  void visitEMul(EMul* p);
  void visitEMulA(EMulA* p);
  void visitEDiv(EDiv* p);
  void visitEMod(EMod* p);
  void visitEAdd(EAdd* p);
  void visitESub(ESub* p);
  void visitEAddA(EAddA* p);
  void visitESubA(ESubA* p);
  void visitELSh(ELSh* p);
  void visitERSh(ERSh* p);
  void visitELT(ELT* p);
  void visitEGT(EGT* p);
  void visitELE(ELE* p);
  void visitEGE(EGE* p);
  void visitEE(EE* p);
  void visitENE(ENE* p);
  void visitEBand(EBand* p);
  void visitEBor(EBor* p);
  void visitEBxor(EBxor* p);
  void visitELand(ELand* p);
  void visitELor(ELor* p);
  void visitELxor(ELxor* p);
  void visitEConditional(EConditional* p);
  void visitEAssign(EAssign* p);
  void visitEAddAssign(EAddAssign* p);
  void visitESubAssign(ESubAssign* p);
  void visitEMulAssign(EMulAssign* p);
  void visitEDivAssign(EDivAssign* p);
  void visitEModAssign(EModAssign* p);
  void visitEAndAssign(EAndAssign* p);
  void visitEOrAssign(EOrAssign* p);
  void visitEXorAssign(EXorAssign* p);
  void visitELShAssign(ELShAssign* p);
  void visitERShAssign(ERShAssign* p);
  void visitListTLDeclaration(ListTLDeclaration* p);
  void visitListDeclaration(ListDeclaration* p);
  void visitListStatement(ListStatement* p);
  void visitListTypeSpecifier(ListTypeSpecifier* p);
  void visitListConversionSpecifier(ListConversionSpecifier* p);
  void visitListFunctionSpecifier(ListFunctionSpecifier* p);
  void visitListVariableSpecifier(ListVariableSpecifier* p);
  void visitListStructMemberDeclaration(ListStructMemberDeclaration* p);
  void visitListGenericParam(ListGenericParam* p);
  void visitListParameterDeclaration(ListParameterDeclaration* p);
  void visitListExpression(ListExpression* p);
  void visitListType(ListType* p);

  void visitCString(CString x);
  void visitCChar(CChar x);
  void visitOperator(Operator x);
  void visitInteger(Integer x);
  void visitChar(Char x);
  void visitDouble(Double x);
  void visitString(String x);
  void visitIdent(Ident x);

};


#endif
