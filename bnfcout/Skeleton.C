/*** BNFC-Generated Visitor Design Pattern Skeleton. ***/
/* This implements the common visitor design pattern.
   Note that this method uses Visitor-traversal of lists, so
   List->accept() does NOT traverse the list. This allows different
   algorithms to use context information differently. */

#include "Skeleton.H"

void Skeleton::visitCode(Code* code) {} //abstract class

void Skeleton::visitMain(Main* main)
{
  /* Code For Main Goes Here */

  if (main->listtldeclaration_) {main->listtldeclaration_->accept(this);}
  if (main->listdeclaration_) {main->listdeclaration_->accept(this);}
}

void Skeleton::visitTLDeclaration(TLDeclaration* tldeclaration) {} //abstract class

void Skeleton::visitDImport(DImport* dimport)
{
  /* Code For DImport Goes Here */

  visitIdent(dimport->ident_);
}

void Skeleton::visitDExpose(DExpose* dexpose)
{
  /* Code For DExpose Goes Here */

  visitIdent(dexpose->ident_);
}

void Skeleton::visitDeclaration(Declaration* declaration) {} //abstract class

void Skeleton::visitDNamespace(DNamespace* dnamespace)
{
  /* Code For DNamespace Goes Here */

  visitIdent(dnamespace->ident_);
  if (dnamespace->listdeclaration_) {dnamespace->listdeclaration_->accept(this);}
}

void Skeleton::visitDDefaultFunction(DDefaultFunction* ddefaultfunction)
{
  /* Code For DDefaultFunction Goes Here */

  if (ddefaultfunction->listfunctionspecifier_) {ddefaultfunction->listfunctionspecifier_->accept(this);}
  visitIdent(ddefaultfunction->ident_);
  if (ddefaultfunction->listparameterdeclaration_) {ddefaultfunction->listparameterdeclaration_->accept(this);}
  if (ddefaultfunction->liststatement_) {ddefaultfunction->liststatement_->accept(this);}
}

void Skeleton::visitDFunction(DFunction* dfunction)
{
  /* Code For DFunction Goes Here */

  if (dfunction->listfunctionspecifier_) {dfunction->listfunctionspecifier_->accept(this);}
  dfunction->type_->accept(this);
  visitIdent(dfunction->ident_);
  if (dfunction->listparameterdeclaration_) {dfunction->listparameterdeclaration_->accept(this);}
  if (dfunction->liststatement_) {dfunction->liststatement_->accept(this);}
}

void Skeleton::visitDOperator(DOperator* doperator)
{
  /* Code For DOperator Goes Here */

  if (doperator->listfunctionspecifier_) {doperator->listfunctionspecifier_->accept(this);}
  doperator->type_->accept(this);
  doperator->operatorname_->accept(this);
  if (doperator->listparameterdeclaration_) {doperator->listparameterdeclaration_->accept(this);}
  if (doperator->liststatement_) {doperator->liststatement_->accept(this);}
}

void Skeleton::visitDOperatorInfo(DOperatorInfo* doperatorinfo)
{
  /* Code For DOperatorInfo Goes Here */

  doperatorinfo->operatortrait_->accept(this);
}

void Skeleton::visitDTypeDecl(DTypeDecl* dtypedecl)
{
  /* Code For DTypeDecl Goes Here */

  if (dtypedecl->listtypespecifier_) {dtypedecl->listtypespecifier_->accept(this);}
  dtypedecl->type_->accept(this);
  visitIdent(dtypedecl->ident_);
}

void Skeleton::visitDTypeConv(DTypeConv* dtypeconv)
{
  /* Code For DTypeConv Goes Here */

  dtypeconv->type_1->accept(this);
  if (dtypeconv->listconversionspecifier_) {dtypeconv->listconversionspecifier_->accept(this);}
  dtypeconv->type_2->accept(this);
  visitIdent(dtypeconv->ident_);
  if (dtypeconv->liststatement_) {dtypeconv->liststatement_->accept(this);}
}

void Skeleton::visitDExtern(DExtern* dextern)
{
  /* Code For DExtern Goes Here */

  dextern->prototype_->accept(this);
}

void Skeleton::visitDIVariable(DIVariable* divariable)
{
  /* Code For DIVariable Goes Here */

  if (divariable->listvariablespecifier_) {divariable->listvariablespecifier_->accept(this);}
  divariable->type_->accept(this);
  visitIdent(divariable->ident_);
  divariable->expression_->accept(this);
}

void Skeleton::visitDVariable(DVariable* dvariable)
{
  /* Code For DVariable Goes Here */

  if (dvariable->listvariablespecifier_) {dvariable->listvariablespecifier_->accept(this);}
  dvariable->type_->accept(this);
  visitIdent(dvariable->ident_);
}

void Skeleton::visitPrototype(Prototype* prototype) {} //abstract class

void Skeleton::visitPFunction(PFunction* pfunction)
{
  /* Code For PFunction Goes Here */

  if (pfunction->listfunctionspecifier_) {pfunction->listfunctionspecifier_->accept(this);}
  pfunction->type_->accept(this);
  visitIdent(pfunction->ident_);
  if (pfunction->listparameterdeclaration_) {pfunction->listparameterdeclaration_->accept(this);}
}

void Skeleton::visitOperatorName(OperatorName* operatorname) {} //abstract class

void Skeleton::visitONLnot(ONLnot* onlnot)
{
  /* Code For ONLnot Goes Here */

}

void Skeleton::visitONPreInc(ONPreInc* onpreinc)
{
  /* Code For ONPreInc Goes Here */

}

void Skeleton::visitONPreDec(ONPreDec* onpredec)
{
  /* Code For ONPreDec Goes Here */

}

void Skeleton::visitONBnot(ONBnot* onbnot)
{
  /* Code For ONBnot Goes Here */

}

void Skeleton::visitONMul(ONMul* onmul)
{
  /* Code For ONMul Goes Here */

}

void Skeleton::visitONExp(ONExp* onexp)
{
  /* Code For ONExp Goes Here */

}

void Skeleton::visitONDiv(ONDiv* ondiv)
{
  /* Code For ONDiv Goes Here */

}

void Skeleton::visitONRDiv(ONRDiv* onrdiv)
{
  /* Code For ONRDiv Goes Here */

}

void Skeleton::visitONMod(ONMod* onmod)
{
  /* Code For ONMod Goes Here */

}

void Skeleton::visitONAdd(ONAdd* onadd)
{
  /* Code For ONAdd Goes Here */

}

void Skeleton::visitONSub(ONSub* onsub)
{
  /* Code For ONSub Goes Here */

}

void Skeleton::visitONLSh(ONLSh* onlsh)
{
  /* Code For ONLSh Goes Here */

}

void Skeleton::visitONRSh(ONRSh* onrsh)
{
  /* Code For ONRSh Goes Here */

}

void Skeleton::visitONLT(ONLT* onlt)
{
  /* Code For ONLT Goes Here */

}

void Skeleton::visitONGT(ONGT* ongt)
{
  /* Code For ONGT Goes Here */

}

void Skeleton::visitONLE(ONLE* onle)
{
  /* Code For ONLE Goes Here */

}

void Skeleton::visitONGE(ONGE* onge)
{
  /* Code For ONGE Goes Here */

}

void Skeleton::visitONE(ONE* one)
{
  /* Code For ONE Goes Here */

}

void Skeleton::visitONNE(ONNE* onne)
{
  /* Code For ONNE Goes Here */

}

void Skeleton::visitONBand(ONBand* onband)
{
  /* Code For ONBand Goes Here */

}

void Skeleton::visitONBor(ONBor* onbor)
{
  /* Code For ONBor Goes Here */

}

void Skeleton::visitONBxor(ONBxor* onbxor)
{
  /* Code For ONBxor Goes Here */

}

void Skeleton::visitONLand(ONLand* onland)
{
  /* Code For ONLand Goes Here */

}

void Skeleton::visitONLor(ONLor* onlor)
{
  /* Code For ONLor Goes Here */

}

void Skeleton::visitONLxor(ONLxor* onlxor)
{
  /* Code For ONLxor Goes Here */

}

void Skeleton::visitONRight(ONRight* onright)
{
  /* Code For ONRight Goes Here */

}

void Skeleton::visitONLeft(ONLeft* onleft)
{
  /* Code For ONLeft Goes Here */

}

void Skeleton::visitOperatorTrait(OperatorTrait* operatortrait) {} //abstract class

void Skeleton::visitOTIdentity(OTIdentity* otidentity)
{
  /* Code For OTIdentity Goes Here */

  otidentity->type_->accept(this);
  otidentity->operatorname_->accept(this);
  otidentity->expression_->accept(this);
}

void Skeleton::visitFunctionSpecifier(FunctionSpecifier* functionspecifier) {} //abstract class

void Skeleton::visitFSEntryPoint(FSEntryPoint* fsentrypoint)
{
  /* Code For FSEntryPoint Goes Here */

}

void Skeleton::visitFSPure(FSPure* fspure)
{
  /* Code For FSPure Goes Here */

}

void Skeleton::visitFSInline(FSInline* fsinline)
{
  /* Code For FSInline Goes Here */

}

void Skeleton::visitFSAssociative(FSAssociative* fsassociative)
{
  /* Code For FSAssociative Goes Here */

}

void Skeleton::visitFSCommutative(FSCommutative* fscommutative)
{
  /* Code For FSCommutative Goes Here */

}

void Skeleton::visitFSAntiCommutative(FSAntiCommutative* fsanticommutative)
{
  /* Code For FSAntiCommutative Goes Here */

}

void Skeleton::visitFSInverse(FSInverse* fsinverse)
{
  /* Code For FSInverse Goes Here */

  fsinverse->operatorname_->accept(this);
}

void Skeleton::visitFSSelfInverse(FSSelfInverse* fsselfinverse)
{
  /* Code For FSSelfInverse Goes Here */

}

void Skeleton::visitConversionSpecifier(ConversionSpecifier* conversionspecifier) {} //abstract class

void Skeleton::visitCSUp(CSUp* csup)
{
  /* Code For CSUp Goes Here */

}

void Skeleton::visitCSDown(CSDown* csdown)
{
  /* Code For CSDown Goes Here */

}

void Skeleton::visitCSImplicit(CSImplicit* csimplicit)
{
  /* Code For CSImplicit Goes Here */

}

void Skeleton::visitVariableSpecifier(VariableSpecifier* variablespecifier) {} //abstract class

void Skeleton::visitVSConst(VSConst* vsconst)
{
  /* Code For VSConst Goes Here */

}

void Skeleton::visitTypeSpecifier(TypeSpecifier* typespecifier) {} //abstract class

void Skeleton::visitTSAlign(TSAlign* tsalign)
{
  /* Code For TSAlign Goes Here */

  visitInteger(tsalign->integer_);
}

void Skeleton::visitTSGeneric(TSGeneric* tsgeneric)
{
  /* Code For TSGeneric Goes Here */

  if (tsgeneric->listgenericparam_) {tsgeneric->listgenericparam_->accept(this);}
}

void Skeleton::visitTSInteger(TSInteger* tsinteger)
{
  /* Code For TSInteger Goes Here */

}

void Skeleton::visitTSReal(TSReal* tsreal)
{
  /* Code For TSReal Goes Here */

}

void Skeleton::visitGenericParam(GenericParam* genericparam) {} //abstract class

void Skeleton::visitTSGParam(TSGParam* tsgparam)
{
  /* Code For TSGParam Goes Here */

  tsgparam->type_->accept(this);
  visitIdent(tsgparam->ident_);
}

void Skeleton::visitType(Type* type) {} //abstract class

void Skeleton::visitTAddress(TAddress* taddress)
{
  /* Code For TAddress Goes Here */

}

void Skeleton::visitTByte(TByte* tbyte)
{
  /* Code For TByte Goes Here */

}

void Skeleton::visitTCustom(TCustom* tcustom)
{
  /* Code For TCustom Goes Here */

  visitIdent(tcustom->ident_);
}

void Skeleton::visitTFixedArray(TFixedArray* tfixedarray)
{
  /* Code For TFixedArray Goes Here */

  tfixedarray->type_->accept(this);
  visitInteger(tfixedarray->integer_);
}

void Skeleton::visitTGenericArray(TGenericArray* tgenericarray)
{
  /* Code For TGenericArray Goes Here */

  tgenericarray->type_->accept(this);
}

void Skeleton::visitTStruct(TStruct* tstruct)
{
  /* Code For TStruct Goes Here */

  if (tstruct->liststructmemberdeclaration_) {tstruct->liststructmemberdeclaration_->accept(this);}
}

void Skeleton::visitTType(TType* ttype)
{
  /* Code For TType Goes Here */

}

void Skeleton::visitStructMemberDeclaration(StructMemberDeclaration* structmemberdeclaration) {} //abstract class

void Skeleton::visitSMDMemberDeclaration(SMDMemberDeclaration* smdmemberdeclaration)
{
  /* Code For SMDMemberDeclaration Goes Here */

  smdmemberdeclaration->type_->accept(this);
  visitIdent(smdmemberdeclaration->ident_);
}

void Skeleton::visitParameterDeclaration(ParameterDeclaration* parameterdeclaration) {} //abstract class

void Skeleton::visitPDAutoParameter(PDAutoParameter* pdautoparameter)
{
  /* Code For PDAutoParameter Goes Here */

  if (pdautoparameter->listvariablespecifier_) {pdautoparameter->listvariablespecifier_->accept(this);}
  visitIdent(pdautoparameter->ident_);
}

void Skeleton::visitPDTypedParameter(PDTypedParameter* pdtypedparameter)
{
  /* Code For PDTypedParameter Goes Here */

  if (pdtypedparameter->listvariablespecifier_) {pdtypedparameter->listvariablespecifier_->accept(this);}
  pdtypedparameter->type_->accept(this);
  visitIdent(pdtypedparameter->ident_);
}

void Skeleton::visitStatement(Statement* statement) {} //abstract class

void Skeleton::visitSReturn(SReturn* sreturn)
{
  /* Code For SReturn Goes Here */

  sreturn->expression_->accept(this);
}

void Skeleton::visitSExpression(SExpression* sexpression)
{
  /* Code For SExpression Goes Here */

  sexpression->expression_->accept(this);
}

void Skeleton::visitSScope(SScope* sscope)
{
  /* Code For SScope Goes Here */

  if (sscope->liststatement_) {sscope->liststatement_->accept(this);}
}

void Skeleton::visitSIf(SIf* sif)
{
  /* Code For SIf Goes Here */

  sif->expression_->accept(this);
  if (sif->liststatement_) {sif->liststatement_->accept(this);}
}

void Skeleton::visitSIfElse(SIfElse* sifelse)
{
  /* Code For SIfElse Goes Here */

  sifelse->expression_->accept(this);
  if (sifelse->liststatement_1) {sifelse->liststatement_1->accept(this);}
  if (sifelse->liststatement_2) {sifelse->liststatement_2->accept(this);}
}

void Skeleton::visitSLoop(SLoop* sloop)
{
  /* Code For SLoop Goes Here */

  sloop->expression_->accept(this);
  if (sloop->liststatement_) {sloop->liststatement_->accept(this);}
}

void Skeleton::visitSWhile(SWhile* swhile)
{
  /* Code For SWhile Goes Here */

  swhile->expression_->accept(this);
  if (swhile->liststatement_) {swhile->liststatement_->accept(this);}
}

void Skeleton::visitSUntil(SUntil* suntil)
{
  /* Code For SUntil Goes Here */

  suntil->expression_->accept(this);
  if (suntil->liststatement_) {suntil->liststatement_->accept(this);}
}

void Skeleton::visitSFor(SFor* sfor)
{
  /* Code For SFor Goes Here */

  if (sfor->listexpression_1) {sfor->listexpression_1->accept(this);}
  sfor->expression_->accept(this);
  if (sfor->listexpression_2) {sfor->listexpression_2->accept(this);}
  if (sfor->liststatement_) {sfor->liststatement_->accept(this);}
}

void Skeleton::visitSForEach(SForEach* sforeach)
{
  /* Code For SForEach Goes Here */

  visitIdent(sforeach->ident_);
  sforeach->expression_->accept(this);
  if (sforeach->liststatement_) {sforeach->liststatement_->accept(this);}
}

void Skeleton::visitSForAll(SForAll* sforall)
{
  /* Code For SForAll Goes Here */

  visitIdent(sforall->ident_);
  sforall->expression_->accept(this);
  if (sforall->liststatement_) {sforall->liststatement_->accept(this);}
}

void Skeleton::visitSBreak(SBreak* sbreak)
{
  /* Code For SBreak Goes Here */

}

void Skeleton::visitSContinue(SContinue* scontinue)
{
  /* Code For SContinue Goes Here */

}

void Skeleton::visitSBreakpoint(SBreakpoint* sbreakpoint)
{
  /* Code For SBreakpoint Goes Here */

}

void Skeleton::visitSIVariable(SIVariable* sivariable)
{
  /* Code For SIVariable Goes Here */

  if (sivariable->listvariablespecifier_) {sivariable->listvariablespecifier_->accept(this);}
  sivariable->type_->accept(this);
  visitIdent(sivariable->ident_);
  sivariable->expression_->accept(this);
}

void Skeleton::visitSVariable(SVariable* svariable)
{
  /* Code For SVariable Goes Here */

  if (svariable->listvariablespecifier_) {svariable->listvariablespecifier_->accept(this);}
  svariable->type_->accept(this);
  visitIdent(svariable->ident_);
}

void Skeleton::visitRValue(RValue* rvalue) {} //abstract class

void Skeleton::visitRVIdent(RVIdent* rvident)
{
  /* Code For RVIdent Goes Here */

  visitIdent(rvident->ident_);
}

void Skeleton::visitRVQualified(RVQualified* rvqualified)
{
  /* Code For RVQualified Goes Here */

  visitIdent(rvqualified->ident_);
  rvqualified->rvalue_->accept(this);
}

void Skeleton::visitExpression(Expression* expression) {} //abstract class

void Skeleton::visitEDouble(EDouble* edouble)
{
  /* Code For EDouble Goes Here */

  visitDouble(edouble->double_);
}

void Skeleton::visitEInteger(EInteger* einteger)
{
  /* Code For EInteger Goes Here */

  visitInteger(einteger->integer_);
}

void Skeleton::visitEString(EString* estring)
{
  /* Code For EString Goes Here */

  visitCstring(estring->cstring_);
}

void Skeleton::visitEChar(EChar* echar)
{
  /* Code For EChar Goes Here */

  visitCchar(echar->cchar_);
}

void Skeleton::visitEPi(EPi* epi)
{
  /* Code For EPi Goes Here */

}

void Skeleton::visitERValue(ERValue* ervalue)
{
  /* Code For ERValue Goes Here */

  ervalue->rvalue_->accept(this);
}

void Skeleton::visitEArray(EArray* earray)
{
  /* Code For EArray Goes Here */

  if (earray->listexpression_) {earray->listexpression_->accept(this);}
}

void Skeleton::visitEList(EList* elist)
{
  /* Code For EList Goes Here */

  if (elist->listexpression_) {elist->listexpression_->accept(this);}
}

void Skeleton::visitEAComp(EAComp* eacomp)
{
  /* Code For EAComp Goes Here */

  eacomp->expression_->accept(this);
  if (eacomp->listexpression_) {eacomp->listexpression_->accept(this);}
}

void Skeleton::visitELComp(ELComp* elcomp)
{
  /* Code For ELComp Goes Here */

  elcomp->expression_->accept(this);
  if (elcomp->listexpression_) {elcomp->listexpression_->accept(this);}
}

void Skeleton::visitEIndex(EIndex* eindex)
{
  /* Code For EIndex Goes Here */

  eindex->expression_1->accept(this);
  eindex->expression_2->accept(this);
}

void Skeleton::visitESimpleCall(ESimpleCall* esimplecall)
{
  /* Code For ESimpleCall Goes Here */

  esimplecall->rvalue_->accept(this);
}

void Skeleton::visitECall(ECall* ecall)
{
  /* Code For ECall Goes Here */

  ecall->rvalue_->accept(this);
  if (ecall->listexpression_) {ecall->listexpression_->accept(this);}
}

void Skeleton::visitEPostInc(EPostInc* epostinc)
{
  /* Code For EPostInc Goes Here */

  epostinc->rvalue_->accept(this);
}

void Skeleton::visitEPostDec(EPostDec* epostdec)
{
  /* Code For EPostDec Goes Here */

  epostdec->rvalue_->accept(this);
}

void Skeleton::visitEAddress(EAddress* eaddress)
{
  /* Code For EAddress Goes Here */

  eaddress->expression_->accept(this);
}

void Skeleton::visitEIntrinAddB(EIntrinAddB* eintrinaddb)
{
  /* Code For EIntrinAddB Goes Here */

  eintrinaddb->expression_1->accept(this);
  eintrinaddb->expression_2->accept(this);
}

void Skeleton::visitEIntrinSubB(EIntrinSubB* eintrinsubb)
{
  /* Code For EIntrinSubB Goes Here */

  eintrinsubb->expression_1->accept(this);
  eintrinsubb->expression_2->accept(this);
}

void Skeleton::visitEIntrinMulB(EIntrinMulB* eintrinmulb)
{
  /* Code For EIntrinMulB Goes Here */

  eintrinmulb->expression_1->accept(this);
  eintrinmulb->expression_2->accept(this);
}

void Skeleton::visitEIntrinUdivB(EIntrinUdivB* eintrinudivb)
{
  /* Code For EIntrinUdivB Goes Here */

  eintrinudivb->expression_1->accept(this);
  eintrinudivb->expression_2->accept(this);
}

void Skeleton::visitEIntrinSdivB(EIntrinSdivB* eintrinsdivb)
{
  /* Code For EIntrinSdivB Goes Here */

  eintrinsdivb->expression_1->accept(this);
  eintrinsdivb->expression_2->accept(this);
}

void Skeleton::visitEIntrinUremB(EIntrinUremB* eintrinuremb)
{
  /* Code For EIntrinUremB Goes Here */

  eintrinuremb->expression_1->accept(this);
  eintrinuremb->expression_2->accept(this);
}

void Skeleton::visitEIntrinSremB(EIntrinSremB* eintrinsremb)
{
  /* Code For EIntrinSremB Goes Here */

  eintrinsremb->expression_1->accept(this);
  eintrinsremb->expression_2->accept(this);
}

void Skeleton::visitEIntrinAndB(EIntrinAndB* eintrinandb)
{
  /* Code For EIntrinAndB Goes Here */

  eintrinandb->expression_1->accept(this);
  eintrinandb->expression_2->accept(this);
}

void Skeleton::visitEIntrinOrB(EIntrinOrB* eintrinorb)
{
  /* Code For EIntrinOrB Goes Here */

  eintrinorb->expression_1->accept(this);
  eintrinorb->expression_2->accept(this);
}

void Skeleton::visitEIntrinXorB(EIntrinXorB* eintrinxorb)
{
  /* Code For EIntrinXorB Goes Here */

  eintrinxorb->expression_1->accept(this);
  eintrinxorb->expression_2->accept(this);
}

void Skeleton::visitEIntrinShlB(EIntrinShlB* eintrinshlb)
{
  /* Code For EIntrinShlB Goes Here */

  eintrinshlb->expression_1->accept(this);
  eintrinshlb->expression_2->accept(this);
}

void Skeleton::visitEIntrinLshrB(EIntrinLshrB* eintrinlshrb)
{
  /* Code For EIntrinLshrB Goes Here */

  eintrinlshrb->expression_1->accept(this);
  eintrinlshrb->expression_2->accept(this);
}

void Skeleton::visitEIntrinAshrB(EIntrinAshrB* eintrinashrb)
{
  /* Code For EIntrinAshrB Goes Here */

  eintrinashrb->expression_1->accept(this);
  eintrinashrb->expression_2->accept(this);
}

void Skeleton::visitEIntrinNotB(EIntrinNotB* eintrinnotb)
{
  /* Code For EIntrinNotB Goes Here */

  eintrinnotb->expression_->accept(this);
}

void Skeleton::visitEIntrinNegB(EIntrinNegB* eintrinnegb)
{
  /* Code For EIntrinNegB Goes Here */

  eintrinnegb->expression_->accept(this);
}

void Skeleton::visitEIntrinCEqB(EIntrinCEqB* eintrinceqb)
{
  /* Code For EIntrinCEqB Goes Here */

  eintrinceqb->expression_1->accept(this);
  eintrinceqb->expression_2->accept(this);
}

void Skeleton::visitEIntrinCNeB(EIntrinCNeB* eintrincneb)
{
  /* Code For EIntrinCNeB Goes Here */

  eintrincneb->expression_1->accept(this);
  eintrincneb->expression_2->accept(this);
}

void Skeleton::visitEIntrinCLtB(EIntrinCLtB* eintrincltb)
{
  /* Code For EIntrinCLtB Goes Here */

  eintrincltb->expression_1->accept(this);
  eintrincltb->expression_2->accept(this);
}

void Skeleton::visitEIntrinCGtB(EIntrinCGtB* eintrincgtb)
{
  /* Code For EIntrinCGtB Goes Here */

  eintrincgtb->expression_1->accept(this);
  eintrincgtb->expression_2->accept(this);
}

void Skeleton::visitEIntrinCLeB(EIntrinCLeB* eintrincleb)
{
  /* Code For EIntrinCLeB Goes Here */

  eintrincleb->expression_1->accept(this);
  eintrincleb->expression_2->accept(this);
}

void Skeleton::visitEIntrinCGeB(EIntrinCGeB* eintrincgeb)
{
  /* Code For EIntrinCGeB Goes Here */

  eintrincgeb->expression_1->accept(this);
  eintrincgeb->expression_2->accept(this);
}

void Skeleton::visitEIntrinAdd2B(EIntrinAdd2B* eintrinadd2b)
{
  /* Code For EIntrinAdd2B Goes Here */

  eintrinadd2b->expression_1->accept(this);
  eintrinadd2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinSub2B(EIntrinSub2B* eintrinsub2b)
{
  /* Code For EIntrinSub2B Goes Here */

  eintrinsub2b->expression_1->accept(this);
  eintrinsub2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinMul2B(EIntrinMul2B* eintrinmul2b)
{
  /* Code For EIntrinMul2B Goes Here */

  eintrinmul2b->expression_1->accept(this);
  eintrinmul2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinUdiv2B(EIntrinUdiv2B* eintrinudiv2b)
{
  /* Code For EIntrinUdiv2B Goes Here */

  eintrinudiv2b->expression_1->accept(this);
  eintrinudiv2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinSdiv2B(EIntrinSdiv2B* eintrinsdiv2b)
{
  /* Code For EIntrinSdiv2B Goes Here */

  eintrinsdiv2b->expression_1->accept(this);
  eintrinsdiv2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinUrem2B(EIntrinUrem2B* eintrinurem2b)
{
  /* Code For EIntrinUrem2B Goes Here */

  eintrinurem2b->expression_1->accept(this);
  eintrinurem2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinSrem2B(EIntrinSrem2B* eintrinsrem2b)
{
  /* Code For EIntrinSrem2B Goes Here */

  eintrinsrem2b->expression_1->accept(this);
  eintrinsrem2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinAnd2B(EIntrinAnd2B* eintrinand2b)
{
  /* Code For EIntrinAnd2B Goes Here */

  eintrinand2b->expression_1->accept(this);
  eintrinand2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinOr2B(EIntrinOr2B* eintrinor2b)
{
  /* Code For EIntrinOr2B Goes Here */

  eintrinor2b->expression_1->accept(this);
  eintrinor2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinXor2B(EIntrinXor2B* eintrinxor2b)
{
  /* Code For EIntrinXor2B Goes Here */

  eintrinxor2b->expression_1->accept(this);
  eintrinxor2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinShl2B(EIntrinShl2B* eintrinshl2b)
{
  /* Code For EIntrinShl2B Goes Here */

  eintrinshl2b->expression_1->accept(this);
  eintrinshl2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinLshr2B(EIntrinLshr2B* eintrinlshr2b)
{
  /* Code For EIntrinLshr2B Goes Here */

  eintrinlshr2b->expression_1->accept(this);
  eintrinlshr2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinAshr2B(EIntrinAshr2B* eintrinashr2b)
{
  /* Code For EIntrinAshr2B Goes Here */

  eintrinashr2b->expression_1->accept(this);
  eintrinashr2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinNot2B(EIntrinNot2B* eintrinnot2b)
{
  /* Code For EIntrinNot2B Goes Here */

  eintrinnot2b->expression_->accept(this);
}

void Skeleton::visitEIntrinNeg2B(EIntrinNeg2B* eintrinneg2b)
{
  /* Code For EIntrinNeg2B Goes Here */

  eintrinneg2b->expression_->accept(this);
}

void Skeleton::visitEIntrinCEq2B(EIntrinCEq2B* eintrinceq2b)
{
  /* Code For EIntrinCEq2B Goes Here */

  eintrinceq2b->expression_1->accept(this);
  eintrinceq2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCNe2B(EIntrinCNe2B* eintrincne2b)
{
  /* Code For EIntrinCNe2B Goes Here */

  eintrincne2b->expression_1->accept(this);
  eintrincne2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCLt2B(EIntrinCLt2B* eintrinclt2b)
{
  /* Code For EIntrinCLt2B Goes Here */

  eintrinclt2b->expression_1->accept(this);
  eintrinclt2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCGt2B(EIntrinCGt2B* eintrincgt2b)
{
  /* Code For EIntrinCGt2B Goes Here */

  eintrincgt2b->expression_1->accept(this);
  eintrincgt2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCLe2B(EIntrinCLe2B* eintrincle2b)
{
  /* Code For EIntrinCLe2B Goes Here */

  eintrincle2b->expression_1->accept(this);
  eintrincle2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCGe2B(EIntrinCGe2B* eintrincge2b)
{
  /* Code For EIntrinCGe2B Goes Here */

  eintrincge2b->expression_1->accept(this);
  eintrincge2b->expression_2->accept(this);
}

void Skeleton::visitEIntrinAdd4B(EIntrinAdd4B* eintrinadd4b)
{
  /* Code For EIntrinAdd4B Goes Here */

  eintrinadd4b->expression_1->accept(this);
  eintrinadd4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinSub4B(EIntrinSub4B* eintrinsub4b)
{
  /* Code For EIntrinSub4B Goes Here */

  eintrinsub4b->expression_1->accept(this);
  eintrinsub4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinMul4B(EIntrinMul4B* eintrinmul4b)
{
  /* Code For EIntrinMul4B Goes Here */

  eintrinmul4b->expression_1->accept(this);
  eintrinmul4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinUdiv4B(EIntrinUdiv4B* eintrinudiv4b)
{
  /* Code For EIntrinUdiv4B Goes Here */

  eintrinudiv4b->expression_1->accept(this);
  eintrinudiv4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinSdiv4B(EIntrinSdiv4B* eintrinsdiv4b)
{
  /* Code For EIntrinSdiv4B Goes Here */

  eintrinsdiv4b->expression_1->accept(this);
  eintrinsdiv4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinUrem4B(EIntrinUrem4B* eintrinurem4b)
{
  /* Code For EIntrinUrem4B Goes Here */

  eintrinurem4b->expression_1->accept(this);
  eintrinurem4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinSrem4B(EIntrinSrem4B* eintrinsrem4b)
{
  /* Code For EIntrinSrem4B Goes Here */

  eintrinsrem4b->expression_1->accept(this);
  eintrinsrem4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinAnd4B(EIntrinAnd4B* eintrinand4b)
{
  /* Code For EIntrinAnd4B Goes Here */

  eintrinand4b->expression_1->accept(this);
  eintrinand4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinOr4B(EIntrinOr4B* eintrinor4b)
{
  /* Code For EIntrinOr4B Goes Here */

  eintrinor4b->expression_1->accept(this);
  eintrinor4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinXor4B(EIntrinXor4B* eintrinxor4b)
{
  /* Code For EIntrinXor4B Goes Here */

  eintrinxor4b->expression_1->accept(this);
  eintrinxor4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinShl4B(EIntrinShl4B* eintrinshl4b)
{
  /* Code For EIntrinShl4B Goes Here */

  eintrinshl4b->expression_1->accept(this);
  eintrinshl4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinLshr4B(EIntrinLshr4B* eintrinlshr4b)
{
  /* Code For EIntrinLshr4B Goes Here */

  eintrinlshr4b->expression_1->accept(this);
  eintrinlshr4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinAshr4B(EIntrinAshr4B* eintrinashr4b)
{
  /* Code For EIntrinAshr4B Goes Here */

  eintrinashr4b->expression_1->accept(this);
  eintrinashr4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinNot4B(EIntrinNot4B* eintrinnot4b)
{
  /* Code For EIntrinNot4B Goes Here */

  eintrinnot4b->expression_->accept(this);
}

void Skeleton::visitEIntrinNeg4B(EIntrinNeg4B* eintrinneg4b)
{
  /* Code For EIntrinNeg4B Goes Here */

  eintrinneg4b->expression_->accept(this);
}

void Skeleton::visitEIntrinCEq4B(EIntrinCEq4B* eintrinceq4b)
{
  /* Code For EIntrinCEq4B Goes Here */

  eintrinceq4b->expression_1->accept(this);
  eintrinceq4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCNe4B(EIntrinCNe4B* eintrincne4b)
{
  /* Code For EIntrinCNe4B Goes Here */

  eintrincne4b->expression_1->accept(this);
  eintrincne4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCLt4B(EIntrinCLt4B* eintrinclt4b)
{
  /* Code For EIntrinCLt4B Goes Here */

  eintrinclt4b->expression_1->accept(this);
  eintrinclt4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCGt4B(EIntrinCGt4B* eintrincgt4b)
{
  /* Code For EIntrinCGt4B Goes Here */

  eintrincgt4b->expression_1->accept(this);
  eintrincgt4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCLe4B(EIntrinCLe4B* eintrincle4b)
{
  /* Code For EIntrinCLe4B Goes Here */

  eintrincle4b->expression_1->accept(this);
  eintrincle4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCGe4B(EIntrinCGe4B* eintrincge4b)
{
  /* Code For EIntrinCGe4B Goes Here */

  eintrincge4b->expression_1->accept(this);
  eintrincge4b->expression_2->accept(this);
}

void Skeleton::visitEIntrinAdd8B(EIntrinAdd8B* eintrinadd8b)
{
  /* Code For EIntrinAdd8B Goes Here */

  eintrinadd8b->expression_1->accept(this);
  eintrinadd8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinSub8B(EIntrinSub8B* eintrinsub8b)
{
  /* Code For EIntrinSub8B Goes Here */

  eintrinsub8b->expression_1->accept(this);
  eintrinsub8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinMul8B(EIntrinMul8B* eintrinmul8b)
{
  /* Code For EIntrinMul8B Goes Here */

  eintrinmul8b->expression_1->accept(this);
  eintrinmul8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinUdiv8B(EIntrinUdiv8B* eintrinudiv8b)
{
  /* Code For EIntrinUdiv8B Goes Here */

  eintrinudiv8b->expression_1->accept(this);
  eintrinudiv8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinSdiv8B(EIntrinSdiv8B* eintrinsdiv8b)
{
  /* Code For EIntrinSdiv8B Goes Here */

  eintrinsdiv8b->expression_1->accept(this);
  eintrinsdiv8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinUrem8B(EIntrinUrem8B* eintrinurem8b)
{
  /* Code For EIntrinUrem8B Goes Here */

  eintrinurem8b->expression_1->accept(this);
  eintrinurem8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinSrem8B(EIntrinSrem8B* eintrinsrem8b)
{
  /* Code For EIntrinSrem8B Goes Here */

  eintrinsrem8b->expression_1->accept(this);
  eintrinsrem8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinAnd8B(EIntrinAnd8B* eintrinand8b)
{
  /* Code For EIntrinAnd8B Goes Here */

  eintrinand8b->expression_1->accept(this);
  eintrinand8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinOr8B(EIntrinOr8B* eintrinor8b)
{
  /* Code For EIntrinOr8B Goes Here */

  eintrinor8b->expression_1->accept(this);
  eintrinor8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinXor8B(EIntrinXor8B* eintrinxor8b)
{
  /* Code For EIntrinXor8B Goes Here */

  eintrinxor8b->expression_1->accept(this);
  eintrinxor8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinShl8B(EIntrinShl8B* eintrinshl8b)
{
  /* Code For EIntrinShl8B Goes Here */

  eintrinshl8b->expression_1->accept(this);
  eintrinshl8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinLshr8B(EIntrinLshr8B* eintrinlshr8b)
{
  /* Code For EIntrinLshr8B Goes Here */

  eintrinlshr8b->expression_1->accept(this);
  eintrinlshr8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinAshr8B(EIntrinAshr8B* eintrinashr8b)
{
  /* Code For EIntrinAshr8B Goes Here */

  eintrinashr8b->expression_1->accept(this);
  eintrinashr8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinNot8B(EIntrinNot8B* eintrinnot8b)
{
  /* Code For EIntrinNot8B Goes Here */

  eintrinnot8b->expression_->accept(this);
}

void Skeleton::visitEIntrinNeg8B(EIntrinNeg8B* eintrinneg8b)
{
  /* Code For EIntrinNeg8B Goes Here */

  eintrinneg8b->expression_->accept(this);
}

void Skeleton::visitEIntrinCEq8B(EIntrinCEq8B* eintrinceq8b)
{
  /* Code For EIntrinCEq8B Goes Here */

  eintrinceq8b->expression_1->accept(this);
  eintrinceq8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCNe8B(EIntrinCNe8B* eintrincne8b)
{
  /* Code For EIntrinCNe8B Goes Here */

  eintrincne8b->expression_1->accept(this);
  eintrincne8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCLt8B(EIntrinCLt8B* eintrinclt8b)
{
  /* Code For EIntrinCLt8B Goes Here */

  eintrinclt8b->expression_1->accept(this);
  eintrinclt8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCGt8B(EIntrinCGt8B* eintrincgt8b)
{
  /* Code For EIntrinCGt8B Goes Here */

  eintrincgt8b->expression_1->accept(this);
  eintrincgt8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCLe8B(EIntrinCLe8B* eintrincle8b)
{
  /* Code For EIntrinCLe8B Goes Here */

  eintrincle8b->expression_1->accept(this);
  eintrincle8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinCGe8B(EIntrinCGe8B* eintrincge8b)
{
  /* Code For EIntrinCGe8B Goes Here */

  eintrincge8b->expression_1->accept(this);
  eintrincge8b->expression_2->accept(this);
}

void Skeleton::visitEIntrinAddB4V(EIntrinAddB4V* eintrinaddb4v)
{
  /* Code For EIntrinAddB4V Goes Here */

  eintrinaddb4v->expression_1->accept(this);
  eintrinaddb4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinSubB4V(EIntrinSubB4V* eintrinsubb4v)
{
  /* Code For EIntrinSubB4V Goes Here */

  eintrinsubb4v->expression_1->accept(this);
  eintrinsubb4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinMulB4V(EIntrinMulB4V* eintrinmulb4v)
{
  /* Code For EIntrinMulB4V Goes Here */

  eintrinmulb4v->expression_1->accept(this);
  eintrinmulb4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinUdivB4V(EIntrinUdivB4V* eintrinudivb4v)
{
  /* Code For EIntrinUdivB4V Goes Here */

  eintrinudivb4v->expression_1->accept(this);
  eintrinudivb4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinSdivB4V(EIntrinSdivB4V* eintrinsdivb4v)
{
  /* Code For EIntrinSdivB4V Goes Here */

  eintrinsdivb4v->expression_1->accept(this);
  eintrinsdivb4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinUremB4V(EIntrinUremB4V* eintrinuremb4v)
{
  /* Code For EIntrinUremB4V Goes Here */

  eintrinuremb4v->expression_1->accept(this);
  eintrinuremb4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinSremB4V(EIntrinSremB4V* eintrinsremb4v)
{
  /* Code For EIntrinSremB4V Goes Here */

  eintrinsremb4v->expression_1->accept(this);
  eintrinsremb4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinShlB4V(EIntrinShlB4V* eintrinshlb4v)
{
  /* Code For EIntrinShlB4V Goes Here */

  eintrinshlb4v->expression_1->accept(this);
  eintrinshlb4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinLshrB4V(EIntrinLshrB4V* eintrinlshrb4v)
{
  /* Code For EIntrinLshrB4V Goes Here */

  eintrinlshrb4v->expression_1->accept(this);
  eintrinlshrb4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinAshrB4V(EIntrinAshrB4V* eintrinashrb4v)
{
  /* Code For EIntrinAshrB4V Goes Here */

  eintrinashrb4v->expression_1->accept(this);
  eintrinashrb4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinNegB4V(EIntrinNegB4V* eintrinnegb4v)
{
  /* Code For EIntrinNegB4V Goes Here */

  eintrinnegb4v->expression_->accept(this);
}

void Skeleton::visitEIntrinAddB8V(EIntrinAddB8V* eintrinaddb8v)
{
  /* Code For EIntrinAddB8V Goes Here */

  eintrinaddb8v->expression_1->accept(this);
  eintrinaddb8v->expression_2->accept(this);
}

void Skeleton::visitEIntrinSubB8V(EIntrinSubB8V* eintrinsubb8v)
{
  /* Code For EIntrinSubB8V Goes Here */

  eintrinsubb8v->expression_1->accept(this);
  eintrinsubb8v->expression_2->accept(this);
}

void Skeleton::visitEIntrinMulB8V(EIntrinMulB8V* eintrinmulb8v)
{
  /* Code For EIntrinMulB8V Goes Here */

  eintrinmulb8v->expression_1->accept(this);
  eintrinmulb8v->expression_2->accept(this);
}

void Skeleton::visitEIntrinUdivB8V(EIntrinUdivB8V* eintrinudivb8v)
{
  /* Code For EIntrinUdivB8V Goes Here */

  eintrinudivb8v->expression_1->accept(this);
  eintrinudivb8v->expression_2->accept(this);
}

void Skeleton::visitEIntrinSdivB8V(EIntrinSdivB8V* eintrinsdivb8v)
{
  /* Code For EIntrinSdivB8V Goes Here */

  eintrinsdivb8v->expression_1->accept(this);
  eintrinsdivb8v->expression_2->accept(this);
}

void Skeleton::visitEIntrinUremB8V(EIntrinUremB8V* eintrinuremb8v)
{
  /* Code For EIntrinUremB8V Goes Here */

  eintrinuremb8v->expression_1->accept(this);
  eintrinuremb8v->expression_2->accept(this);
}

void Skeleton::visitEIntrinSremB8V(EIntrinSremB8V* eintrinsremb8v)
{
  /* Code For EIntrinSremB8V Goes Here */

  eintrinsremb8v->expression_1->accept(this);
  eintrinsremb8v->expression_2->accept(this);
}

void Skeleton::visitEIntrinShlB8V(EIntrinShlB8V* eintrinshlb8v)
{
  /* Code For EIntrinShlB8V Goes Here */

  eintrinshlb8v->expression_1->accept(this);
  eintrinshlb8v->expression_2->accept(this);
}

void Skeleton::visitEIntrinLshrB8V(EIntrinLshrB8V* eintrinlshrb8v)
{
  /* Code For EIntrinLshrB8V Goes Here */

  eintrinlshrb8v->expression_1->accept(this);
  eintrinlshrb8v->expression_2->accept(this);
}

void Skeleton::visitEIntrinAshrB8V(EIntrinAshrB8V* eintrinashrb8v)
{
  /* Code For EIntrinAshrB8V Goes Here */

  eintrinashrb8v->expression_1->accept(this);
  eintrinashrb8v->expression_2->accept(this);
}

void Skeleton::visitEIntrinNegB8V(EIntrinNegB8V* eintrinnegb8v)
{
  /* Code For EIntrinNegB8V Goes Here */

  eintrinnegb8v->expression_->accept(this);
}

void Skeleton::visitEIntrinAdd2F(EIntrinAdd2F* eintrinadd2f)
{
  /* Code For EIntrinAdd2F Goes Here */

  eintrinadd2f->expression_1->accept(this);
  eintrinadd2f->expression_2->accept(this);
}

void Skeleton::visitEIntrinSub2F(EIntrinSub2F* eintrinsub2f)
{
  /* Code For EIntrinSub2F Goes Here */

  eintrinsub2f->expression_1->accept(this);
  eintrinsub2f->expression_2->accept(this);
}

void Skeleton::visitEIntrinMul2F(EIntrinMul2F* eintrinmul2f)
{
  /* Code For EIntrinMul2F Goes Here */

  eintrinmul2f->expression_1->accept(this);
  eintrinmul2f->expression_2->accept(this);
}

void Skeleton::visitEIntrinUdiv2F(EIntrinUdiv2F* eintrinudiv2f)
{
  /* Code For EIntrinUdiv2F Goes Here */

  eintrinudiv2f->expression_1->accept(this);
  eintrinudiv2f->expression_2->accept(this);
}

void Skeleton::visitEIntrinUrem2F(EIntrinUrem2F* eintrinurem2f)
{
  /* Code For EIntrinUrem2F Goes Here */

  eintrinurem2f->expression_1->accept(this);
  eintrinurem2f->expression_2->accept(this);
}

void Skeleton::visitEIntrinAdd4F(EIntrinAdd4F* eintrinadd4f)
{
  /* Code For EIntrinAdd4F Goes Here */

  eintrinadd4f->expression_1->accept(this);
  eintrinadd4f->expression_2->accept(this);
}

void Skeleton::visitEIntrinSub4F(EIntrinSub4F* eintrinsub4f)
{
  /* Code For EIntrinSub4F Goes Here */

  eintrinsub4f->expression_1->accept(this);
  eintrinsub4f->expression_2->accept(this);
}

void Skeleton::visitEIntrinMul4F(EIntrinMul4F* eintrinmul4f)
{
  /* Code For EIntrinMul4F Goes Here */

  eintrinmul4f->expression_1->accept(this);
  eintrinmul4f->expression_2->accept(this);
}

void Skeleton::visitEIntrinUdiv4F(EIntrinUdiv4F* eintrinudiv4f)
{
  /* Code For EIntrinUdiv4F Goes Here */

  eintrinudiv4f->expression_1->accept(this);
  eintrinudiv4f->expression_2->accept(this);
}

void Skeleton::visitEIntrinUrem4F(EIntrinUrem4F* eintrinurem4f)
{
  /* Code For EIntrinUrem4F Goes Here */

  eintrinurem4f->expression_1->accept(this);
  eintrinurem4f->expression_2->accept(this);
}

void Skeleton::visitEIntrinAdd8F(EIntrinAdd8F* eintrinadd8f)
{
  /* Code For EIntrinAdd8F Goes Here */

  eintrinadd8f->expression_1->accept(this);
  eintrinadd8f->expression_2->accept(this);
}

void Skeleton::visitEIntrinSub8F(EIntrinSub8F* eintrinsub8f)
{
  /* Code For EIntrinSub8F Goes Here */

  eintrinsub8f->expression_1->accept(this);
  eintrinsub8f->expression_2->accept(this);
}

void Skeleton::visitEIntrinMul8F(EIntrinMul8F* eintrinmul8f)
{
  /* Code For EIntrinMul8F Goes Here */

  eintrinmul8f->expression_1->accept(this);
  eintrinmul8f->expression_2->accept(this);
}

void Skeleton::visitEIntrinUdiv8F(EIntrinUdiv8F* eintrinudiv8f)
{
  /* Code For EIntrinUdiv8F Goes Here */

  eintrinudiv8f->expression_1->accept(this);
  eintrinudiv8f->expression_2->accept(this);
}

void Skeleton::visitEIntrinUrem8F(EIntrinUrem8F* eintrinurem8f)
{
  /* Code For EIntrinUrem8F Goes Here */

  eintrinurem8f->expression_1->accept(this);
  eintrinurem8f->expression_2->accept(this);
}

void Skeleton::visitEIntrinAdd4F4V(EIntrinAdd4F4V* eintrinadd4f4v)
{
  /* Code For EIntrinAdd4F4V Goes Here */

  eintrinadd4f4v->expression_1->accept(this);
  eintrinadd4f4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinSub4F4V(EIntrinSub4F4V* eintrinsub4f4v)
{
  /* Code For EIntrinSub4F4V Goes Here */

  eintrinsub4f4v->expression_1->accept(this);
  eintrinsub4f4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinMul4F4V(EIntrinMul4F4V* eintrinmul4f4v)
{
  /* Code For EIntrinMul4F4V Goes Here */

  eintrinmul4f4v->expression_1->accept(this);
  eintrinmul4f4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinUdiv4F4V(EIntrinUdiv4F4V* eintrinudiv4f4v)
{
  /* Code For EIntrinUdiv4F4V Goes Here */

  eintrinudiv4f4v->expression_1->accept(this);
  eintrinudiv4f4v->expression_2->accept(this);
}

void Skeleton::visitEIntrinUrem4F4V(EIntrinUrem4F4V* eintrinurem4f4v)
{
  /* Code For EIntrinUrem4F4V Goes Here */

  eintrinurem4f4v->expression_1->accept(this);
  eintrinurem4f4v->expression_2->accept(this);
}

void Skeleton::visitELnot(ELnot* elnot)
{
  /* Code For ELnot Goes Here */

  elnot->expression_->accept(this);
}

void Skeleton::visitEPreInc(EPreInc* epreinc)
{
  /* Code For EPreInc Goes Here */

  epreinc->rvalue_->accept(this);
}

void Skeleton::visitEPreDec(EPreDec* epredec)
{
  /* Code For EPreDec Goes Here */

  epredec->rvalue_->accept(this);
}

void Skeleton::visitENeg(ENeg* eneg)
{
  /* Code For ENeg Goes Here */

  eneg->expression_->accept(this);
}

void Skeleton::visitEBnot(EBnot* ebnot)
{
  /* Code For EBnot Goes Here */

  ebnot->expression_->accept(this);
}

void Skeleton::visitEPos(EPos* epos)
{
  /* Code For EPos Goes Here */

  epos->expression_->accept(this);
}

void Skeleton::visitEMul(EMul* emul)
{
  /* Code For EMul Goes Here */

  emul->expression_1->accept(this);
  emul->expression_2->accept(this);
}

void Skeleton::visitEDiv(EDiv* ediv)
{
  /* Code For EDiv Goes Here */

  ediv->expression_1->accept(this);
  ediv->expression_2->accept(this);
}

void Skeleton::visitEMod(EMod* emod)
{
  /* Code For EMod Goes Here */

  emod->expression_1->accept(this);
  emod->expression_2->accept(this);
}

void Skeleton::visitEAdd(EAdd* eadd)
{
  /* Code For EAdd Goes Here */

  eadd->expression_1->accept(this);
  eadd->expression_2->accept(this);
}

void Skeleton::visitESub(ESub* esub)
{
  /* Code For ESub Goes Here */

  esub->expression_1->accept(this);
  esub->expression_2->accept(this);
}

void Skeleton::visitELSh(ELSh* elsh)
{
  /* Code For ELSh Goes Here */

  elsh->expression_1->accept(this);
  elsh->expression_2->accept(this);
}

void Skeleton::visitERSh(ERSh* ersh)
{
  /* Code For ERSh Goes Here */

  ersh->expression_1->accept(this);
  ersh->expression_2->accept(this);
}

void Skeleton::visitELT(ELT* elt)
{
  /* Code For ELT Goes Here */

  elt->expression_1->accept(this);
  elt->expression_2->accept(this);
}

void Skeleton::visitEGT(EGT* egt)
{
  /* Code For EGT Goes Here */

  egt->expression_1->accept(this);
  egt->expression_2->accept(this);
}

void Skeleton::visitELE(ELE* ele)
{
  /* Code For ELE Goes Here */

  ele->expression_1->accept(this);
  ele->expression_2->accept(this);
}

void Skeleton::visitEGE(EGE* ege)
{
  /* Code For EGE Goes Here */

  ege->expression_1->accept(this);
  ege->expression_2->accept(this);
}

void Skeleton::visitEE(EE* ee)
{
  /* Code For EE Goes Here */

  ee->expression_1->accept(this);
  ee->expression_2->accept(this);
}

void Skeleton::visitENE(ENE* ene)
{
  /* Code For ENE Goes Here */

  ene->expression_1->accept(this);
  ene->expression_2->accept(this);
}

void Skeleton::visitEBand(EBand* eband)
{
  /* Code For EBand Goes Here */

  eband->expression_1->accept(this);
  eband->expression_2->accept(this);
}

void Skeleton::visitEBor(EBor* ebor)
{
  /* Code For EBor Goes Here */

  ebor->expression_1->accept(this);
  ebor->expression_2->accept(this);
}

void Skeleton::visitEBxor(EBxor* ebxor)
{
  /* Code For EBxor Goes Here */

  ebxor->expression_1->accept(this);
  ebxor->expression_2->accept(this);
}

void Skeleton::visitELand(ELand* eland)
{
  /* Code For ELand Goes Here */

  eland->expression_1->accept(this);
  eland->expression_2->accept(this);
}

void Skeleton::visitELor(ELor* elor)
{
  /* Code For ELor Goes Here */

  elor->expression_1->accept(this);
  elor->expression_2->accept(this);
}

void Skeleton::visitELxor(ELxor* elxor)
{
  /* Code For ELxor Goes Here */

  elxor->expression_1->accept(this);
  elxor->expression_2->accept(this);
}

void Skeleton::visitEConditional(EConditional* econditional)
{
  /* Code For EConditional Goes Here */

  econditional->expression_1->accept(this);
  econditional->expression_2->accept(this);
  econditional->expression_3->accept(this);
}

void Skeleton::visitEAssign(EAssign* eassign)
{
  /* Code For EAssign Goes Here */

  eassign->rvalue_->accept(this);
  eassign->expression_->accept(this);
}

void Skeleton::visitEAddAssign(EAddAssign* eaddassign)
{
  /* Code For EAddAssign Goes Here */

  eaddassign->rvalue_->accept(this);
  eaddassign->expression_->accept(this);
}

void Skeleton::visitESubAssign(ESubAssign* esubassign)
{
  /* Code For ESubAssign Goes Here */

  esubassign->rvalue_->accept(this);
  esubassign->expression_->accept(this);
}

void Skeleton::visitEMulAssign(EMulAssign* emulassign)
{
  /* Code For EMulAssign Goes Here */

  emulassign->rvalue_->accept(this);
  emulassign->expression_->accept(this);
}

void Skeleton::visitEDivAssign(EDivAssign* edivassign)
{
  /* Code For EDivAssign Goes Here */

  edivassign->rvalue_->accept(this);
  edivassign->expression_->accept(this);
}

void Skeleton::visitEModAssign(EModAssign* emodassign)
{
  /* Code For EModAssign Goes Here */

  emodassign->rvalue_->accept(this);
  emodassign->expression_->accept(this);
}

void Skeleton::visitEAndAssign(EAndAssign* eandassign)
{
  /* Code For EAndAssign Goes Here */

  eandassign->rvalue_->accept(this);
  eandassign->expression_->accept(this);
}

void Skeleton::visitEOrAssign(EOrAssign* eorassign)
{
  /* Code For EOrAssign Goes Here */

  eorassign->rvalue_->accept(this);
  eorassign->expression_->accept(this);
}

void Skeleton::visitEXorAssign(EXorAssign* exorassign)
{
  /* Code For EXorAssign Goes Here */

  exorassign->rvalue_->accept(this);
  exorassign->expression_->accept(this);
}

void Skeleton::visitELShAssign(ELShAssign* elshassign)
{
  /* Code For ELShAssign Goes Here */

  elshassign->rvalue_->accept(this);
  elshassign->expression_->accept(this);
}

void Skeleton::visitERShAssign(ERShAssign* ershassign)
{
  /* Code For ERShAssign Goes Here */

  ershassign->rvalue_->accept(this);
  ershassign->expression_->accept(this);
}

void Skeleton::visitListTLDeclaration(ListTLDeclaration* listtldeclaration)
{
  while(listtldeclaration!= 0)
  {
    /* Code For ListTLDeclaration Goes Here */
    listtldeclaration->tldeclaration_->accept(this);
    listtldeclaration = listtldeclaration->listtldeclaration_;
  }
}

void Skeleton::visitListDeclaration(ListDeclaration* listdeclaration)
{
  while(listdeclaration!= 0)
  {
    /* Code For ListDeclaration Goes Here */
    listdeclaration->declaration_->accept(this);
    listdeclaration = listdeclaration->listdeclaration_;
  }
}

void Skeleton::visitListStatement(ListStatement* liststatement)
{
  while(liststatement!= 0)
  {
    /* Code For ListStatement Goes Here */
    liststatement->statement_->accept(this);
    liststatement = liststatement->liststatement_;
  }
}

void Skeleton::visitListTypeSpecifier(ListTypeSpecifier* listtypespecifier)
{
  while(listtypespecifier!= 0)
  {
    /* Code For ListTypeSpecifier Goes Here */
    listtypespecifier->typespecifier_->accept(this);
    listtypespecifier = listtypespecifier->listtypespecifier_;
  }
}

void Skeleton::visitListConversionSpecifier(ListConversionSpecifier* listconversionspecifier)
{
  while(listconversionspecifier!= 0)
  {
    /* Code For ListConversionSpecifier Goes Here */
    listconversionspecifier->conversionspecifier_->accept(this);
    listconversionspecifier = listconversionspecifier->listconversionspecifier_;
  }
}

void Skeleton::visitListFunctionSpecifier(ListFunctionSpecifier* listfunctionspecifier)
{
  while(listfunctionspecifier!= 0)
  {
    /* Code For ListFunctionSpecifier Goes Here */
    listfunctionspecifier->functionspecifier_->accept(this);
    listfunctionspecifier = listfunctionspecifier->listfunctionspecifier_;
  }
}

void Skeleton::visitListVariableSpecifier(ListVariableSpecifier* listvariablespecifier)
{
  while(listvariablespecifier!= 0)
  {
    /* Code For ListVariableSpecifier Goes Here */
    listvariablespecifier->variablespecifier_->accept(this);
    listvariablespecifier = listvariablespecifier->listvariablespecifier_;
  }
}

void Skeleton::visitListStructMemberDeclaration(ListStructMemberDeclaration* liststructmemberdeclaration)
{
  while(liststructmemberdeclaration!= 0)
  {
    /* Code For ListStructMemberDeclaration Goes Here */
    liststructmemberdeclaration->structmemberdeclaration_->accept(this);
    liststructmemberdeclaration = liststructmemberdeclaration->liststructmemberdeclaration_;
  }
}

void Skeleton::visitListGenericParam(ListGenericParam* listgenericparam)
{
  while(listgenericparam!= 0)
  {
    /* Code For ListGenericParam Goes Here */
    listgenericparam->genericparam_->accept(this);
    listgenericparam = listgenericparam->listgenericparam_;
  }
}

void Skeleton::visitListParameterDeclaration(ListParameterDeclaration* listparameterdeclaration)
{
  while(listparameterdeclaration!= 0)
  {
    /* Code For ListParameterDeclaration Goes Here */
    listparameterdeclaration->parameterdeclaration_->accept(this);
    listparameterdeclaration = listparameterdeclaration->listparameterdeclaration_;
  }
}

void Skeleton::visitListExpression(ListExpression* listexpression)
{
  while(listexpression!= 0)
  {
    /* Code For ListExpression Goes Here */
    listexpression->expression_->accept(this);
    listexpression = listexpression->listexpression_;
  }
}

void Skeleton::visitCstring(CString p)
{
  /* Code for CString Goes Here */
}
void Skeleton::visitCchar(CChar p)
{
  /* Code for CChar Goes Here */
}
void Skeleton::visitOperator(Operator p)
{
  /* Code for Operator Goes Here */
}
void Skeleton::visitIdent(Ident i)
{
  /* Code for Ident Goes Here */
}
void Skeleton::visitInteger(Integer i)
{
  /* Code for Integers Goes Here */
}
void Skeleton::visitDouble(Double d)
{
  /* Code for Doubles Goes Here */
}
void Skeleton::visitChar(Char c)
{
  /* Code for Chars Goes Here */
}
void Skeleton::visitString(String s)
{
  /* Code for Strings Goes Here */
}

