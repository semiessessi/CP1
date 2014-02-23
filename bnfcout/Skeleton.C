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

void Skeleton::visitFSConst(FSConst* fsconst)
{
  /* Code For FSConst Goes Here */

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

void Skeleton::visitTList(TList* tlist)
{
  /* Code For TList Goes Here */

  tlist->type_->accept(this);
}

void Skeleton::visitTInfiniteList(TInfiniteList* tinfinitelist)
{
  /* Code For TInfiniteList Goes Here */

  tinfinitelist->type_->accept(this);
}

void Skeleton::visitTStruct(TStruct* tstruct)
{
  /* Code For TStruct Goes Here */

  if (tstruct->liststructmemberdeclaration_) {tstruct->liststructmemberdeclaration_->accept(this);}
}

void Skeleton::visitTFunction(TFunction* tfunction)
{
  /* Code For TFunction Goes Here */

  if (tfunction->listtype_) {tfunction->listtype_->accept(this);}
  tfunction->type_->accept(this);
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

void Skeleton::visitELeft(ELeft* eleft)
{
  /* Code For ELeft Goes Here */

  eleft->expression_1->accept(this);
  eleft->expression_2->accept(this);
}

void Skeleton::visitERight(ERight* eright)
{
  /* Code For ERight Goes Here */

  eright->expression_1->accept(this);
  eright->expression_2->accept(this);
}

void Skeleton::visitEIntrinSExt(EIntrinSExt* eintrinsext)
{
  /* Code For EIntrinSExt Goes Here */

  eintrinsext->type_->accept(this);
  eintrinsext->expression_->accept(this);
}

void Skeleton::visitEIntrinZExt(EIntrinZExt* eintrinzext)
{
  /* Code For EIntrinZExt Goes Here */

  eintrinzext->type_->accept(this);
  eintrinzext->expression_->accept(this);
}

void Skeleton::visitEIntrinCast(EIntrinCast* eintrincast)
{
  /* Code For EIntrinCast Goes Here */

  eintrincast->type_->accept(this);
  eintrincast->expression_->accept(this);
}

void Skeleton::visitEIntrinConvert(EIntrinConvert* eintrinconvert)
{
  /* Code For EIntrinConvert Goes Here */

  eintrinconvert->type_->accept(this);
  eintrinconvert->expression_->accept(this);
}

void Skeleton::visitEIntrinAddI(EIntrinAddI* eintrinaddi)
{
  /* Code For EIntrinAddI Goes Here */

  eintrinaddi->type_->accept(this);
  eintrinaddi->expression_1->accept(this);
  eintrinaddi->expression_2->accept(this);
}

void Skeleton::visitEIntrinSubI(EIntrinSubI* eintrinsubi)
{
  /* Code For EIntrinSubI Goes Here */

  eintrinsubi->type_->accept(this);
  eintrinsubi->expression_1->accept(this);
  eintrinsubi->expression_2->accept(this);
}

void Skeleton::visitEIntrinMulI(EIntrinMulI* eintrinmuli)
{
  /* Code For EIntrinMulI Goes Here */

  eintrinmuli->type_->accept(this);
  eintrinmuli->expression_1->accept(this);
  eintrinmuli->expression_2->accept(this);
}

void Skeleton::visitEIntrinUdivI(EIntrinUdivI* eintrinudivi)
{
  /* Code For EIntrinUdivI Goes Here */

  eintrinudivi->type_->accept(this);
  eintrinudivi->expression_1->accept(this);
  eintrinudivi->expression_2->accept(this);
}

void Skeleton::visitEIntrinSdivI(EIntrinSdivI* eintrinsdivi)
{
  /* Code For EIntrinSdivI Goes Here */

  eintrinsdivi->type_->accept(this);
  eintrinsdivi->expression_1->accept(this);
  eintrinsdivi->expression_2->accept(this);
}

void Skeleton::visitEIntrinUremI(EIntrinUremI* eintrinuremi)
{
  /* Code For EIntrinUremI Goes Here */

  eintrinuremi->type_->accept(this);
  eintrinuremi->expression_1->accept(this);
  eintrinuremi->expression_2->accept(this);
}

void Skeleton::visitEIntrinSremI(EIntrinSremI* eintrinsremi)
{
  /* Code For EIntrinSremI Goes Here */

  eintrinsremi->type_->accept(this);
  eintrinsremi->expression_1->accept(this);
  eintrinsremi->expression_2->accept(this);
}

void Skeleton::visitEIntrinAndI(EIntrinAndI* eintrinandi)
{
  /* Code For EIntrinAndI Goes Here */

  eintrinandi->type_->accept(this);
  eintrinandi->expression_1->accept(this);
  eintrinandi->expression_2->accept(this);
}

void Skeleton::visitEIntrinOrI(EIntrinOrI* eintrinori)
{
  /* Code For EIntrinOrI Goes Here */

  eintrinori->type_->accept(this);
  eintrinori->expression_1->accept(this);
  eintrinori->expression_2->accept(this);
}

void Skeleton::visitEIntrinXorI(EIntrinXorI* eintrinxori)
{
  /* Code For EIntrinXorI Goes Here */

  eintrinxori->type_->accept(this);
  eintrinxori->expression_1->accept(this);
  eintrinxori->expression_2->accept(this);
}

void Skeleton::visitEIntrinShlI(EIntrinShlI* eintrinshli)
{
  /* Code For EIntrinShlI Goes Here */

  eintrinshli->type_->accept(this);
  eintrinshli->expression_1->accept(this);
  eintrinshli->expression_2->accept(this);
}

void Skeleton::visitEIntrinLshrI(EIntrinLshrI* eintrinlshri)
{
  /* Code For EIntrinLshrI Goes Here */

  eintrinlshri->type_->accept(this);
  eintrinlshri->expression_1->accept(this);
  eintrinlshri->expression_2->accept(this);
}

void Skeleton::visitEIntrinAshrI(EIntrinAshrI* eintrinashri)
{
  /* Code For EIntrinAshrI Goes Here */

  eintrinashri->type_->accept(this);
  eintrinashri->expression_1->accept(this);
  eintrinashri->expression_2->accept(this);
}

void Skeleton::visitEIntrinNotI(EIntrinNotI* eintrinnoti)
{
  /* Code For EIntrinNotI Goes Here */

  eintrinnoti->type_->accept(this);
  eintrinnoti->expression_->accept(this);
}

void Skeleton::visitEIntrinNegI(EIntrinNegI* eintrinnegi)
{
  /* Code For EIntrinNegI Goes Here */

  eintrinnegi->type_->accept(this);
  eintrinnegi->expression_->accept(this);
}

void Skeleton::visitEIntrinCEqI(EIntrinCEqI* eintrinceqi)
{
  /* Code For EIntrinCEqI Goes Here */

  eintrinceqi->type_->accept(this);
  eintrinceqi->expression_1->accept(this);
  eintrinceqi->expression_2->accept(this);
}

void Skeleton::visitEIntrinCNeI(EIntrinCNeI* eintrincnei)
{
  /* Code For EIntrinCNeI Goes Here */

  eintrincnei->type_->accept(this);
  eintrincnei->expression_1->accept(this);
  eintrincnei->expression_2->accept(this);
}

void Skeleton::visitEIntrinCLtI(EIntrinCLtI* eintrinclti)
{
  /* Code For EIntrinCLtI Goes Here */

  eintrinclti->type_->accept(this);
  eintrinclti->expression_1->accept(this);
  eintrinclti->expression_2->accept(this);
}

void Skeleton::visitEIntrinCGtI(EIntrinCGtI* eintrincgti)
{
  /* Code For EIntrinCGtI Goes Here */

  eintrincgti->type_->accept(this);
  eintrincgti->expression_1->accept(this);
  eintrincgti->expression_2->accept(this);
}

void Skeleton::visitEIntrinCLeI(EIntrinCLeI* eintrinclei)
{
  /* Code For EIntrinCLeI Goes Here */

  eintrinclei->type_->accept(this);
  eintrinclei->expression_1->accept(this);
  eintrinclei->expression_2->accept(this);
}

void Skeleton::visitEIntrinCGeI(EIntrinCGeI* eintrincgei)
{
  /* Code For EIntrinCGeI Goes Here */

  eintrincgei->type_->accept(this);
  eintrincgei->expression_1->accept(this);
  eintrincgei->expression_2->accept(this);
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

void Skeleton::visitEMulA(EMulA* emula)
{
  /* Code For EMulA Goes Here */

  emula->expression_1->accept(this);
  emula->expression_2->accept(this);
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

void Skeleton::visitEAddA(EAddA* eadda)
{
  /* Code For EAddA Goes Here */

  eadda->expression_1->accept(this);
  eadda->expression_2->accept(this);
}

void Skeleton::visitESubA(ESubA* esuba)
{
  /* Code For ESubA Goes Here */

  esuba->expression_1->accept(this);
  esuba->expression_2->accept(this);
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

void Skeleton::visitListType(ListType* listtype)
{
  while(listtype!= 0)
  {
    /* Code For ListType Goes Here */
    listtype->type_->accept(this);
    listtype = listtype->listtype_;
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

