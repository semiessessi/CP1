/*** BNFC-Generated Pretty Printer and Abstract Syntax Viewer ***/

#include "Printer.H"

//You may wish to change render
void PrintAbsyn::render(Char c)
{
  if (c == '{')
  {
     bufAppend('\n');
     indent();
     bufAppend(c);
     _n_ = _n_ + 2;
     bufAppend('\n');
     indent();
  }
  else if (c == '(' || c == '[')
     bufAppend(c);
  else if (c == ')' || c == ']')
  {
     backup();
     bufAppend(c);
     bufAppend(' ');
  }
  else if (c == '}')
  {
     _n_ = _n_ - 2;
     backup();
     backup();
     bufAppend(c);
     bufAppend('\n');
     indent();
  }
  else if (c == ',')
  {
     backup();
     bufAppend(c);
     bufAppend(' ');
  }
  else if (c == ';')
  {
     backup();
     bufAppend(c);
     bufAppend('\n');
     indent();
  }
  else if (c == 0) return;
  else
  {
     bufAppend(c);
     bufAppend(' ');
  }
}
void PrintAbsyn::render(String s)
{
  if(strlen(s) > 0)
  {
    bufAppend(s);
    bufAppend(' ');
  }
}
void PrintAbsyn::indent()
{
  int n = _n_;
  while (n > 0)
  {
    bufAppend(' ');
    n--;
  }
}
void PrintAbsyn::backup()
{
  if (buf_[cur_ - 1] == ' ')
  {
    buf_[cur_ - 1] = 0;
    cur_--;
  }
}
PrintAbsyn::PrintAbsyn(void)
{
  _i_ = 0; _n_ = 0;
  buf_ = 0;
  bufReset();
}

PrintAbsyn::~PrintAbsyn(void)
{
}

char* PrintAbsyn::print(Visitable *v)
{
  _i_ = 0; _n_ = 0;
  bufReset();
  v->accept(this);
  return buf_;
}
void PrintAbsyn::visitCode(Code*p) {} //abstract class

void PrintAbsyn::visitMain(Main* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listtldeclaration_) {_i_ = 0; p->listtldeclaration_->accept(this);}  if(p->listdeclaration_) {_i_ = 0; p->listdeclaration_->accept(this);}
  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTLDeclaration(TLDeclaration*p) {} //abstract class

void PrintAbsyn::visitDImport(DImport* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("import");
  visitIdent(p->ident_);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDExpose(DExpose* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("expose");
  visitIdent(p->ident_);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDeclaration(Declaration*p) {} //abstract class

void PrintAbsyn::visitDNamespace(DNamespace* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("namespace");
  visitIdent(p->ident_);
  render('{');
  if(p->listdeclaration_) {_i_ = 0; p->listdeclaration_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDDefaultFunction(DDefaultFunction* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listfunctionspecifier_) {_i_ = 0; p->listfunctionspecifier_->accept(this);}  visitIdent(p->ident_);
  render('(');
  if(p->listparameterdeclaration_) {_i_ = 0; p->listparameterdeclaration_->accept(this);}  render(')');
  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDFunction(DFunction* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listfunctionspecifier_) {_i_ = 0; p->listfunctionspecifier_->accept(this);}  _i_ = 0; p->type_->accept(this);
  visitIdent(p->ident_);
  render('(');
  if(p->listparameterdeclaration_) {_i_ = 0; p->listparameterdeclaration_->accept(this);}  render(')');
  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDOperator(DOperator* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listfunctionspecifier_) {_i_ = 0; p->listfunctionspecifier_->accept(this);}  _i_ = 0; p->type_->accept(this);
  _i_ = 0; p->operatorname_->accept(this);
  render('(');
  if(p->listparameterdeclaration_) {_i_ = 0; p->listparameterdeclaration_->accept(this);}  render(')');
  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDOperatorInfo(DOperatorInfo* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->operatortrait_->accept(this);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDTypeDecl(DTypeDecl* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listtypespecifier_) {_i_ = 0; p->listtypespecifier_->accept(this);}  render("type");
  _i_ = 0; p->type_->accept(this);
  visitIdent(p->ident_);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDTypeConv(DTypeConv* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->type_1->accept(this);
  if(p->listconversionspecifier_) {_i_ = 0; p->listconversionspecifier_->accept(this);}  render("convert");
  render('(');
  render("const");
  _i_ = 0; p->type_2->accept(this);
  visitIdent(p->ident_);
  render(')');
  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDExtern(DExtern* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("extern");
  _i_ = 0; p->prototype_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDIVariable(DIVariable* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listvariablespecifier_) {_i_ = 0; p->listvariablespecifier_->accept(this);}  _i_ = 0; p->type_->accept(this);
  visitIdent(p->ident_);
  render('=');
  _i_ = 0; p->expression_->accept(this);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDVariable(DVariable* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listvariablespecifier_) {_i_ = 0; p->listvariablespecifier_->accept(this);}  _i_ = 0; p->type_->accept(this);
  visitIdent(p->ident_);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrototype(Prototype*p) {} //abstract class

void PrintAbsyn::visitPFunction(PFunction* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listfunctionspecifier_) {_i_ = 0; p->listfunctionspecifier_->accept(this);}  _i_ = 0; p->type_->accept(this);
  visitIdent(p->ident_);
  render('(');
  if(p->listparameterdeclaration_) {_i_ = 0; p->listparameterdeclaration_->accept(this);}  render(')');
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitOperatorName(OperatorName*p) {} //abstract class

void PrintAbsyn::visitONLnot(ONLnot* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('!');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONPreInc(ONPreInc* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("++");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONPreDec(ONPreDec* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("--");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONBnot(ONBnot* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('~');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONMul(ONMul* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('*');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONExp(ONExp* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("**");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONDiv(ONDiv* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('/');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONRDiv(ONRDiv* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('\\');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONMod(ONMod* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('%');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONAdd(ONAdd* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('+');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONSub(ONSub* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('-');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONLSh(ONLSh* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("<<");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONRSh(ONRSh* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render(">>");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONLT(ONLT* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('<');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONGT(ONGT* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('>');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONLE(ONLE* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("<=");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONGE(ONGE* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render(">=");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONE(ONE* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("==");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONNE(ONNE* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("!=");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONBand(ONBand* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('&');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONBor(ONBor* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('|');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONBxor(ONBxor* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('^');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONLand(ONLand* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("&&");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONLor(ONLor* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("||");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONLxor(ONLxor* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("^^");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONRight(ONRight* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("->");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitONLeft(ONLeft* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("<-");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitOperatorTrait(OperatorTrait*p) {} //abstract class

void PrintAbsyn::visitOTIdentity(OTIdentity* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("identity");
  _i_ = 0; p->type_->accept(this);
  _i_ = 0; p->operatorname_->accept(this);
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFunctionSpecifier(FunctionSpecifier*p) {} //abstract class

void PrintAbsyn::visitFSEntryPoint(FSEntryPoint* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("entrypoint");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFSPure(FSPure* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("pure");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFSInline(FSInline* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("inline");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFSAssociative(FSAssociative* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("associative");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFSCommutative(FSCommutative* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("commutative");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFSAntiCommutative(FSAntiCommutative* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("anticommutative");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFSInverse(FSInverse* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("inverse");
  _i_ = 0; p->operatorname_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFSSelfInverse(FSSelfInverse* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("selfinverse");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitConversionSpecifier(ConversionSpecifier*p) {} //abstract class

void PrintAbsyn::visitCSUp(CSUp* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("up");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCSDown(CSDown* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("down");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCSImplicit(CSImplicit* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("implicit");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitVariableSpecifier(VariableSpecifier*p) {} //abstract class

void PrintAbsyn::visitVSConst(VSConst* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("const");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeSpecifier(TypeSpecifier*p) {} //abstract class

void PrintAbsyn::visitTSAlign(TSAlign* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("align");
  render('<');
  visitInteger(p->integer_);
  render('>');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTSGeneric(TSGeneric* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("generic");
  render('<');
  if(p->listgenericparam_) {_i_ = 0; p->listgenericparam_->accept(this);}  render('>');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTSInteger(TSInteger* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("integer");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTSReal(TSReal* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("real");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitGenericParam(GenericParam*p) {} //abstract class

void PrintAbsyn::visitTSGParam(TSGParam* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->type_->accept(this);
  visitIdent(p->ident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitType(Type*p) {} //abstract class

void PrintAbsyn::visitTAddress(TAddress* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("address");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTByte(TByte* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("byte");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTCustom(TCustom* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTFixedArray(TFixedArray* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->type_->accept(this);
  render('[');
  visitInteger(p->integer_);
  render(']');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTGenericArray(TGenericArray* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->type_->accept(this);
  render('[');
  render(']');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTStruct(TStruct* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('{');
  if(p->liststructmemberdeclaration_) {_i_ = 0; p->liststructmemberdeclaration_->accept(this);}  render(';');
  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTType(TType* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("type");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStructMemberDeclaration(StructMemberDeclaration*p) {} //abstract class

void PrintAbsyn::visitSMDMemberDeclaration(SMDMemberDeclaration* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->type_->accept(this);
  visitIdent(p->ident_);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitParameterDeclaration(ParameterDeclaration*p) {} //abstract class

void PrintAbsyn::visitPDAutoParameter(PDAutoParameter* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listvariablespecifier_) {_i_ = 0; p->listvariablespecifier_->accept(this);}  visitIdent(p->ident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPDTypedParameter(PDTypedParameter* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listvariablespecifier_) {_i_ = 0; p->listvariablespecifier_->accept(this);}  _i_ = 0; p->type_->accept(this);
  visitIdent(p->ident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStatement(Statement*p) {} //abstract class

void PrintAbsyn::visitSReturn(SReturn* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("return");
  _i_ = 0; p->expression_->accept(this);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSExpression(SExpression* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->expression_->accept(this);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSScope(SScope* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSIf(SIf* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("if");
  render('(');
  _i_ = 0; p->expression_->accept(this);
  render(')');
  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSIfElse(SIfElse* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("if");
  render('(');
  _i_ = 0; p->expression_->accept(this);
  render(')');
  render('{');
  if(p->liststatement_1) {_i_ = 0; p->liststatement_1->accept(this);}  render('}');
  render("else");
  render('{');
  if(p->liststatement_2) {_i_ = 0; p->liststatement_2->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSLoop(SLoop* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("repeat");
  render('(');
  _i_ = 0; p->expression_->accept(this);
  render(')');
  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSWhile(SWhile* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("while");
  render('(');
  _i_ = 0; p->expression_->accept(this);
  render(')');
  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSUntil(SUntil* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("until");
  render('(');
  _i_ = 0; p->expression_->accept(this);
  render(')');
  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSFor(SFor* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("for");
  render('(');
  if(p->listexpression_1) {_i_ = 0; p->listexpression_1->accept(this);}  render(';');
  _i_ = 0; p->expression_->accept(this);
  render(';');
  if(p->listexpression_2) {_i_ = 0; p->listexpression_2->accept(this);}  render(')');
  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSForEach(SForEach* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("for");
  render("each");
  render('(');
  visitIdent(p->ident_);
  render("in");
  _i_ = 0; p->expression_->accept(this);
  render(')');
  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSForAll(SForAll* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("for");
  render("all");
  render('(');
  visitIdent(p->ident_);
  render("in");
  _i_ = 0; p->expression_->accept(this);
  render(')');
  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSBreak(SBreak* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("break");
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSContinue(SContinue* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("continue");
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSBreakpoint(SBreakpoint* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("breakpoint");
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSIVariable(SIVariable* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listvariablespecifier_) {_i_ = 0; p->listvariablespecifier_->accept(this);}  _i_ = 0; p->type_->accept(this);
  visitIdent(p->ident_);
  render('=');
  _i_ = 0; p->expression_->accept(this);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSVariable(SVariable* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listvariablespecifier_) {_i_ = 0; p->listvariablespecifier_->accept(this);}  _i_ = 0; p->type_->accept(this);
  visitIdent(p->ident_);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitRValue(RValue*p) {} //abstract class

void PrintAbsyn::visitRVIdent(RVIdent* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitRVQualified(RVQualified* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_);
  render('.');
  _i_ = 0; p->rvalue_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExpression(Expression*p) {} //abstract class

void PrintAbsyn::visitEDouble(EDouble* p)
{
  int oldi = _i_;
  if (oldi > 11) render(_L_PAREN);

  visitDouble(p->double_);

  if (oldi > 11) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEInteger(EInteger* p)
{
  int oldi = _i_;
  if (oldi > 11) render(_L_PAREN);

  visitInteger(p->integer_);

  if (oldi > 11) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEString(EString* p)
{
  int oldi = _i_;
  if (oldi > 11) render(_L_PAREN);

  visitIdent(p->cstring_);

  if (oldi > 11) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEChar(EChar* p)
{
  int oldi = _i_;
  if (oldi > 11) render(_L_PAREN);

  visitIdent(p->cchar_);

  if (oldi > 11) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEPi(EPi* p)
{
  int oldi = _i_;
  if (oldi > 11) render(_L_PAREN);

  render("pi");

  if (oldi > 11) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitERValue(ERValue* p)
{
  int oldi = _i_;
  if (oldi > 11) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);

  if (oldi > 11) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEArray(EArray* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render('{');
  if(p->listexpression_) {_i_ = 0; p->listexpression_->accept(this);}  render('}');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEList(EList* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render('[');
  if(p->listexpression_) {_i_ = 0; p->listexpression_->accept(this);}  render(']');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEAComp(EAComp* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render('{');
  _i_ = 0; p->expression_->accept(this);
  render("where");
  if(p->listexpression_) {_i_ = 0; p->listexpression_->accept(this);}  render('}');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitELComp(ELComp* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render('[');
  _i_ = 0; p->expression_->accept(this);
  render("where");
  if(p->listexpression_) {_i_ = 0; p->listexpression_->accept(this);}  render(']');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIndex(EIndex* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  _i_ = 0; p->expression_1->accept(this);
  render('[');
  _i_ = 0; p->expression_2->accept(this);
  render(']');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitESimpleCall(ESimpleCall* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render('(');
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitECall(ECall* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render('(');
  if(p->listexpression_) {_i_ = 0; p->listexpression_->accept(this);}  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEPostInc(EPostInc* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render("++");

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEPostDec(EPostDec* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render("--");

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEAddress(EAddress* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render('&');
  _i_ = 11; p->expression_->accept(this);

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinSExt(EIntrinSExt* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("sign_extend");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinZExt(EIntrinZExt* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("zero_extend");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinAddI(EIntrinAddI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("add");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinSubI(EIntrinSubI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("sub");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinMulI(EIntrinMulI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("mul");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinUdivI(EIntrinUdivI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("udiv");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinSdivI(EIntrinSdivI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("sdiv");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinUremI(EIntrinUremI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("urem");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinSremI(EIntrinSremI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("srem");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinAndI(EIntrinAndI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("and");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinOrI(EIntrinOrI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("or");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinXorI(EIntrinXorI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("xor");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinShlI(EIntrinShlI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("shl");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinLshrI(EIntrinLshrI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("lshr");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinAshrI(EIntrinAshrI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("ashr");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinNotI(EIntrinNotI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("not");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinNegI(EIntrinNegI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("neg");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinCEqI(EIntrinCEqI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("cmp");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinCNeI(EIntrinCNeI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("cmp_ne");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinCLtI(EIntrinCLtI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("cmp_lt");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinCGtI(EIntrinCGtI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("cmp_gt");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinCLeI(EIntrinCLeI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("cmp_le");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIntrinCGeI(EIntrinCGeI* p)
{
  int oldi = _i_;
  if (oldi > 10) render(_L_PAREN);

  render("cmp_ge");
  render('<');
  _i_ = 0; p->type_->accept(this);
  render('>');
  render('(');
  _i_ = 0; p->expression_1->accept(this);
  render(',');
  _i_ = 0; p->expression_2->accept(this);
  render(')');

  if (oldi > 10) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitELnot(ELnot* p)
{
  int oldi = _i_;
  if (oldi > 9) render(_L_PAREN);

  render('!');
  _i_ = 10; p->expression_->accept(this);

  if (oldi > 9) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEPreInc(EPreInc* p)
{
  int oldi = _i_;
  if (oldi > 9) render(_L_PAREN);

  render("++");
  _i_ = 0; p->rvalue_->accept(this);

  if (oldi > 9) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEPreDec(EPreDec* p)
{
  int oldi = _i_;
  if (oldi > 9) render(_L_PAREN);

  render("--");
  _i_ = 0; p->rvalue_->accept(this);

  if (oldi > 9) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitENeg(ENeg* p)
{
  int oldi = _i_;
  if (oldi > 9) render(_L_PAREN);

  render('-');
  _i_ = 10; p->expression_->accept(this);

  if (oldi > 9) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEBnot(EBnot* p)
{
  int oldi = _i_;
  if (oldi > 9) render(_L_PAREN);

  render('~');
  _i_ = 10; p->expression_->accept(this);

  if (oldi > 9) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEPos(EPos* p)
{
  int oldi = _i_;
  if (oldi > 9) render(_L_PAREN);

  render('+');
  _i_ = 10; p->expression_->accept(this);

  if (oldi > 9) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEMul(EMul* p)
{
  int oldi = _i_;
  if (oldi > 8) render(_L_PAREN);

  _i_ = 8; p->expression_1->accept(this);
  render('*');
  _i_ = 9; p->expression_2->accept(this);

  if (oldi > 8) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEDiv(EDiv* p)
{
  int oldi = _i_;
  if (oldi > 8) render(_L_PAREN);

  _i_ = 8; p->expression_1->accept(this);
  render('/');
  _i_ = 9; p->expression_2->accept(this);

  if (oldi > 8) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEMod(EMod* p)
{
  int oldi = _i_;
  if (oldi > 8) render(_L_PAREN);

  _i_ = 8; p->expression_1->accept(this);
  render('%');
  _i_ = 9; p->expression_2->accept(this);

  if (oldi > 8) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEAdd(EAdd* p)
{
  int oldi = _i_;
  if (oldi > 7) render(_L_PAREN);

  _i_ = 7; p->expression_1->accept(this);
  render('+');
  _i_ = 8; p->expression_2->accept(this);

  if (oldi > 7) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitESub(ESub* p)
{
  int oldi = _i_;
  if (oldi > 7) render(_L_PAREN);

  _i_ = 7; p->expression_1->accept(this);
  render('-');
  _i_ = 8; p->expression_2->accept(this);

  if (oldi > 7) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitELSh(ELSh* p)
{
  int oldi = _i_;
  if (oldi > 6) render(_L_PAREN);

  _i_ = 6; p->expression_1->accept(this);
  render("<<");
  _i_ = 7; p->expression_2->accept(this);

  if (oldi > 6) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitERSh(ERSh* p)
{
  int oldi = _i_;
  if (oldi > 6) render(_L_PAREN);

  _i_ = 6; p->expression_1->accept(this);
  render(">>");
  _i_ = 7; p->expression_2->accept(this);

  if (oldi > 6) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitELT(ELT* p)
{
  int oldi = _i_;
  if (oldi > 5) render(_L_PAREN);

  _i_ = 6; p->expression_1->accept(this);
  render('<');
  _i_ = 6; p->expression_2->accept(this);

  if (oldi > 5) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEGT(EGT* p)
{
  int oldi = _i_;
  if (oldi > 5) render(_L_PAREN);

  _i_ = 6; p->expression_1->accept(this);
  render('>');
  _i_ = 6; p->expression_2->accept(this);

  if (oldi > 5) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitELE(ELE* p)
{
  int oldi = _i_;
  if (oldi > 5) render(_L_PAREN);

  _i_ = 6; p->expression_1->accept(this);
  render("<=");
  _i_ = 6; p->expression_2->accept(this);

  if (oldi > 5) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEGE(EGE* p)
{
  int oldi = _i_;
  if (oldi > 5) render(_L_PAREN);

  _i_ = 6; p->expression_1->accept(this);
  render(">=");
  _i_ = 6; p->expression_2->accept(this);

  if (oldi > 5) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEE(EE* p)
{
  int oldi = _i_;
  if (oldi > 4) render(_L_PAREN);

  _i_ = 5; p->expression_1->accept(this);
  render("==");
  _i_ = 5; p->expression_2->accept(this);

  if (oldi > 4) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitENE(ENE* p)
{
  int oldi = _i_;
  if (oldi > 4) render(_L_PAREN);

  _i_ = 5; p->expression_1->accept(this);
  render("!=");
  _i_ = 5; p->expression_2->accept(this);

  if (oldi > 4) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEBand(EBand* p)
{
  int oldi = _i_;
  if (oldi > 3) render(_L_PAREN);

  _i_ = 3; p->expression_1->accept(this);
  render('&');
  _i_ = 4; p->expression_2->accept(this);

  if (oldi > 3) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEBor(EBor* p)
{
  int oldi = _i_;
  if (oldi > 3) render(_L_PAREN);

  _i_ = 3; p->expression_1->accept(this);
  render('|');
  _i_ = 4; p->expression_2->accept(this);

  if (oldi > 3) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEBxor(EBxor* p)
{
  int oldi = _i_;
  if (oldi > 3) render(_L_PAREN);

  _i_ = 3; p->expression_1->accept(this);
  render('^');
  _i_ = 4; p->expression_2->accept(this);

  if (oldi > 3) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitELand(ELand* p)
{
  int oldi = _i_;
  if (oldi > 2) render(_L_PAREN);

  _i_ = 3; p->expression_1->accept(this);
  render("&&");
  _i_ = 3; p->expression_2->accept(this);

  if (oldi > 2) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitELor(ELor* p)
{
  int oldi = _i_;
  if (oldi > 2) render(_L_PAREN);

  _i_ = 3; p->expression_1->accept(this);
  render("||");
  _i_ = 3; p->expression_2->accept(this);

  if (oldi > 2) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitELxor(ELxor* p)
{
  int oldi = _i_;
  if (oldi > 2) render(_L_PAREN);

  _i_ = 3; p->expression_1->accept(this);
  render("^^");
  _i_ = 3; p->expression_2->accept(this);

  if (oldi > 2) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEConditional(EConditional* p)
{
  int oldi = _i_;
  if (oldi > 1) render(_L_PAREN);

  _i_ = 2; p->expression_1->accept(this);
  render('?');
  _i_ = 2; p->expression_2->accept(this);
  render(':');
  _i_ = 2; p->expression_3->accept(this);

  if (oldi > 1) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEAssign(EAssign* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render('=');
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEAddAssign(EAddAssign* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render("+=");
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitESubAssign(ESubAssign* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render("-=");
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEMulAssign(EMulAssign* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render("*=");
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEDivAssign(EDivAssign* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render("/=");
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEModAssign(EModAssign* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render("%=");
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEAndAssign(EAndAssign* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render("&=");
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEOrAssign(EOrAssign* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render("|=");
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEXorAssign(EXorAssign* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render("^=");
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitELShAssign(ELShAssign* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render("<<=");
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitERShAssign(ERShAssign* p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->rvalue_->accept(this);
  render(">>=");
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListTLDeclaration(ListTLDeclaration *listtldeclaration)
{
  while(listtldeclaration!= 0)
  {
    if (listtldeclaration->listtldeclaration_ == 0)
    {
      listtldeclaration->tldeclaration_->accept(this);
      render("");
      listtldeclaration = 0;
    }
    else
    {
      listtldeclaration->tldeclaration_->accept(this);
      render("");
      listtldeclaration = listtldeclaration->listtldeclaration_;
    }
  }
}

void PrintAbsyn::visitListDeclaration(ListDeclaration *listdeclaration)
{
  while(listdeclaration!= 0)
  {
    if (listdeclaration->listdeclaration_ == 0)
    {
      listdeclaration->declaration_->accept(this);
      render("");
      listdeclaration = 0;
    }
    else
    {
      listdeclaration->declaration_->accept(this);
      render("");
      listdeclaration = listdeclaration->listdeclaration_;
    }
  }
}

void PrintAbsyn::visitListStatement(ListStatement *liststatement)
{
  while(liststatement!= 0)
  {
    if (liststatement->liststatement_ == 0)
    {
      liststatement->statement_->accept(this);
      render("");
      liststatement = 0;
    }
    else
    {
      liststatement->statement_->accept(this);
      render("");
      liststatement = liststatement->liststatement_;
    }
  }
}

void PrintAbsyn::visitListTypeSpecifier(ListTypeSpecifier *listtypespecifier)
{
  while(listtypespecifier!= 0)
  {
    if (listtypespecifier->listtypespecifier_ == 0)
    {
      listtypespecifier->typespecifier_->accept(this);
      render("");
      listtypespecifier = 0;
    }
    else
    {
      listtypespecifier->typespecifier_->accept(this);
      render("");
      listtypespecifier = listtypespecifier->listtypespecifier_;
    }
  }
}

void PrintAbsyn::visitListConversionSpecifier(ListConversionSpecifier *listconversionspecifier)
{
  while(listconversionspecifier!= 0)
  {
    if (listconversionspecifier->listconversionspecifier_ == 0)
    {
      listconversionspecifier->conversionspecifier_->accept(this);
      render("");
      listconversionspecifier = 0;
    }
    else
    {
      listconversionspecifier->conversionspecifier_->accept(this);
      render("");
      listconversionspecifier = listconversionspecifier->listconversionspecifier_;
    }
  }
}

void PrintAbsyn::visitListFunctionSpecifier(ListFunctionSpecifier *listfunctionspecifier)
{
  while(listfunctionspecifier!= 0)
  {
    if (listfunctionspecifier->listfunctionspecifier_ == 0)
    {
      listfunctionspecifier->functionspecifier_->accept(this);
      render("");
      listfunctionspecifier = 0;
    }
    else
    {
      listfunctionspecifier->functionspecifier_->accept(this);
      render("");
      listfunctionspecifier = listfunctionspecifier->listfunctionspecifier_;
    }
  }
}

void PrintAbsyn::visitListVariableSpecifier(ListVariableSpecifier *listvariablespecifier)
{
  while(listvariablespecifier!= 0)
  {
    if (listvariablespecifier->listvariablespecifier_ == 0)
    {
      listvariablespecifier->variablespecifier_->accept(this);
      render("");
      listvariablespecifier = 0;
    }
    else
    {
      listvariablespecifier->variablespecifier_->accept(this);
      render("");
      listvariablespecifier = listvariablespecifier->listvariablespecifier_;
    }
  }
}

void PrintAbsyn::visitListStructMemberDeclaration(ListStructMemberDeclaration *liststructmemberdeclaration)
{
  while(liststructmemberdeclaration!= 0)
  {
    if (liststructmemberdeclaration->liststructmemberdeclaration_ == 0)
    {
      liststructmemberdeclaration->structmemberdeclaration_->accept(this);
      render("");
      liststructmemberdeclaration = 0;
    }
    else
    {
      liststructmemberdeclaration->structmemberdeclaration_->accept(this);
      render("");
      liststructmemberdeclaration = liststructmemberdeclaration->liststructmemberdeclaration_;
    }
  }
}

void PrintAbsyn::visitListGenericParam(ListGenericParam *listgenericparam)
{
  while(listgenericparam!= 0)
  {
    if (listgenericparam->listgenericparam_ == 0)
    {
      listgenericparam->genericparam_->accept(this);

      listgenericparam = 0;
    }
    else
    {
      listgenericparam->genericparam_->accept(this);
      render(',');
      listgenericparam = listgenericparam->listgenericparam_;
    }
  }
}

void PrintAbsyn::visitListParameterDeclaration(ListParameterDeclaration *listparameterdeclaration)
{
  while(listparameterdeclaration!= 0)
  {
    if (listparameterdeclaration->listparameterdeclaration_ == 0)
    {
      listparameterdeclaration->parameterdeclaration_->accept(this);

      listparameterdeclaration = 0;
    }
    else
    {
      listparameterdeclaration->parameterdeclaration_->accept(this);
      render(',');
      listparameterdeclaration = listparameterdeclaration->listparameterdeclaration_;
    }
  }
}

void PrintAbsyn::visitListExpression(ListExpression *listexpression)
{
  while(listexpression!= 0)
  {
    if (listexpression->listexpression_ == 0)
    {
      listexpression->expression_->accept(this);

      listexpression = 0;
    }
    else
    {
      listexpression->expression_->accept(this);
      render(',');
      listexpression = listexpression->listexpression_;
    }
  }
}

void PrintAbsyn::visitInteger(Integer i)
{
  char tmp[16];
  sprintf(tmp, "%d", i);
  bufAppend(tmp);
}
void PrintAbsyn::visitDouble(Double d)
{
  char tmp[16];
  sprintf(tmp, "%g", d);
  bufAppend(tmp);
}
void PrintAbsyn::visitChar(Char c)
{
  bufAppend('\'');
  bufAppend(c);
  bufAppend('\'');
}
void PrintAbsyn::visitString(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}
void PrintAbsyn::visitIdent(String s)
{
  render(s);
}

ShowAbsyn::ShowAbsyn(void)
{
  buf_ = 0;
  bufReset();
}

ShowAbsyn::~ShowAbsyn(void)
{
}

char* ShowAbsyn::show(Visitable *v)
{
  bufReset();
  v->accept(this);
  return buf_;
}
void ShowAbsyn::visitCode(Code* p) {} //abstract class

void ShowAbsyn::visitMain(Main* p)
{
  bufAppend('(');
  bufAppend("Main");
  bufAppend(' ');
  bufAppend('[');
  if (p->listtldeclaration_)  p->listtldeclaration_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listdeclaration_)  p->listdeclaration_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitTLDeclaration(TLDeclaration* p) {} //abstract class

void ShowAbsyn::visitDImport(DImport* p)
{
  bufAppend('(');
  bufAppend("DImport");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDExpose(DExpose* p)
{
  bufAppend('(');
  bufAppend("DExpose");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDeclaration(Declaration* p) {} //abstract class

void ShowAbsyn::visitDNamespace(DNamespace* p)
{
  bufAppend('(');
  bufAppend("DNamespace");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->listdeclaration_)  p->listdeclaration_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDDefaultFunction(DDefaultFunction* p)
{
  bufAppend('(');
  bufAppend("DDefaultFunction");
  bufAppend(' ');
  bufAppend('[');
  if (p->listfunctionspecifier_)  p->listfunctionspecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->listparameterdeclaration_)  p->listparameterdeclaration_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDFunction(DFunction* p)
{
  bufAppend('(');
  bufAppend("DFunction");
  bufAppend(' ');
  bufAppend('[');
  if (p->listfunctionspecifier_)  p->listfunctionspecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->listparameterdeclaration_)  p->listparameterdeclaration_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDOperator(DOperator* p)
{
  bufAppend('(');
  bufAppend("DOperator");
  bufAppend(' ');
  bufAppend('[');
  if (p->listfunctionspecifier_)  p->listfunctionspecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->operatorname_)  p->operatorname_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listparameterdeclaration_)  p->listparameterdeclaration_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDOperatorInfo(DOperatorInfo* p)
{
  bufAppend('(');
  bufAppend("DOperatorInfo");
  bufAppend(' ');
  bufAppend('[');
  if (p->operatortrait_)  p->operatortrait_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDTypeDecl(DTypeDecl* p)
{
  bufAppend('(');
  bufAppend("DTypeDecl");
  bufAppend(' ');
  bufAppend('[');
  if (p->listtypespecifier_)  p->listtypespecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDTypeConv(DTypeConv* p)
{
  bufAppend('(');
  bufAppend("DTypeConv");
  bufAppend(' ');
  p->type_1->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->listconversionspecifier_)  p->listconversionspecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->type_2->accept(this);
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDExtern(DExtern* p)
{
  bufAppend('(');
  bufAppend("DExtern");
  bufAppend(' ');
  bufAppend('[');
  if (p->prototype_)  p->prototype_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitDIVariable(DIVariable* p)
{
  bufAppend('(');
  bufAppend("DIVariable");
  bufAppend(' ');
  bufAppend('[');
  if (p->listvariablespecifier_)  p->listvariablespecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDVariable(DVariable* p)
{
  bufAppend('(');
  bufAppend("DVariable");
  bufAppend(' ');
  bufAppend('[');
  if (p->listvariablespecifier_)  p->listvariablespecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPrototype(Prototype* p) {} //abstract class

void ShowAbsyn::visitPFunction(PFunction* p)
{
  bufAppend('(');
  bufAppend("PFunction");
  bufAppend(' ');
  bufAppend('[');
  if (p->listfunctionspecifier_)  p->listfunctionspecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->listparameterdeclaration_)  p->listparameterdeclaration_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitOperatorName(OperatorName* p) {} //abstract class

void ShowAbsyn::visitONLnot(ONLnot* p)
{
  bufAppend("ONLnot");
}
void ShowAbsyn::visitONPreInc(ONPreInc* p)
{
  bufAppend("ONPreInc");
}
void ShowAbsyn::visitONPreDec(ONPreDec* p)
{
  bufAppend("ONPreDec");
}
void ShowAbsyn::visitONBnot(ONBnot* p)
{
  bufAppend("ONBnot");
}
void ShowAbsyn::visitONMul(ONMul* p)
{
  bufAppend("ONMul");
}
void ShowAbsyn::visitONExp(ONExp* p)
{
  bufAppend("ONExp");
}
void ShowAbsyn::visitONDiv(ONDiv* p)
{
  bufAppend("ONDiv");
}
void ShowAbsyn::visitONRDiv(ONRDiv* p)
{
  bufAppend("ONRDiv");
}
void ShowAbsyn::visitONMod(ONMod* p)
{
  bufAppend("ONMod");
}
void ShowAbsyn::visitONAdd(ONAdd* p)
{
  bufAppend("ONAdd");
}
void ShowAbsyn::visitONSub(ONSub* p)
{
  bufAppend("ONSub");
}
void ShowAbsyn::visitONLSh(ONLSh* p)
{
  bufAppend("ONLSh");
}
void ShowAbsyn::visitONRSh(ONRSh* p)
{
  bufAppend("ONRSh");
}
void ShowAbsyn::visitONLT(ONLT* p)
{
  bufAppend("ONLT");
}
void ShowAbsyn::visitONGT(ONGT* p)
{
  bufAppend("ONGT");
}
void ShowAbsyn::visitONLE(ONLE* p)
{
  bufAppend("ONLE");
}
void ShowAbsyn::visitONGE(ONGE* p)
{
  bufAppend("ONGE");
}
void ShowAbsyn::visitONE(ONE* p)
{
  bufAppend("ONE");
}
void ShowAbsyn::visitONNE(ONNE* p)
{
  bufAppend("ONNE");
}
void ShowAbsyn::visitONBand(ONBand* p)
{
  bufAppend("ONBand");
}
void ShowAbsyn::visitONBor(ONBor* p)
{
  bufAppend("ONBor");
}
void ShowAbsyn::visitONBxor(ONBxor* p)
{
  bufAppend("ONBxor");
}
void ShowAbsyn::visitONLand(ONLand* p)
{
  bufAppend("ONLand");
}
void ShowAbsyn::visitONLor(ONLor* p)
{
  bufAppend("ONLor");
}
void ShowAbsyn::visitONLxor(ONLxor* p)
{
  bufAppend("ONLxor");
}
void ShowAbsyn::visitONRight(ONRight* p)
{
  bufAppend("ONRight");
}
void ShowAbsyn::visitONLeft(ONLeft* p)
{
  bufAppend("ONLeft");
}
void ShowAbsyn::visitOperatorTrait(OperatorTrait* p) {} //abstract class

void ShowAbsyn::visitOTIdentity(OTIdentity* p)
{
  bufAppend('(');
  bufAppend("OTIdentity");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->operatorname_)  p->operatorname_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitFunctionSpecifier(FunctionSpecifier* p) {} //abstract class

void ShowAbsyn::visitFSEntryPoint(FSEntryPoint* p)
{
  bufAppend("FSEntryPoint");
}
void ShowAbsyn::visitFSPure(FSPure* p)
{
  bufAppend("FSPure");
}
void ShowAbsyn::visitFSInline(FSInline* p)
{
  bufAppend("FSInline");
}
void ShowAbsyn::visitFSAssociative(FSAssociative* p)
{
  bufAppend("FSAssociative");
}
void ShowAbsyn::visitFSCommutative(FSCommutative* p)
{
  bufAppend("FSCommutative");
}
void ShowAbsyn::visitFSAntiCommutative(FSAntiCommutative* p)
{
  bufAppend("FSAntiCommutative");
}
void ShowAbsyn::visitFSInverse(FSInverse* p)
{
  bufAppend('(');
  bufAppend("FSInverse");
  bufAppend(' ');
  bufAppend('[');
  if (p->operatorname_)  p->operatorname_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitFSSelfInverse(FSSelfInverse* p)
{
  bufAppend("FSSelfInverse");
}
void ShowAbsyn::visitConversionSpecifier(ConversionSpecifier* p) {} //abstract class

void ShowAbsyn::visitCSUp(CSUp* p)
{
  bufAppend("CSUp");
}
void ShowAbsyn::visitCSDown(CSDown* p)
{
  bufAppend("CSDown");
}
void ShowAbsyn::visitCSImplicit(CSImplicit* p)
{
  bufAppend("CSImplicit");
}
void ShowAbsyn::visitVariableSpecifier(VariableSpecifier* p) {} //abstract class

void ShowAbsyn::visitVSConst(VSConst* p)
{
  bufAppend("VSConst");
}
void ShowAbsyn::visitTypeSpecifier(TypeSpecifier* p) {} //abstract class

void ShowAbsyn::visitTSAlign(TSAlign* p)
{
  bufAppend('(');
  bufAppend("TSAlign");
  bufAppend(' ');
  visitInteger(p->integer_);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitTSGeneric(TSGeneric* p)
{
  bufAppend('(');
  bufAppend("TSGeneric");
  bufAppend(' ');
  bufAppend('[');
  if (p->listgenericparam_)  p->listgenericparam_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitTSInteger(TSInteger* p)
{
  bufAppend("TSInteger");
}
void ShowAbsyn::visitTSReal(TSReal* p)
{
  bufAppend("TSReal");
}
void ShowAbsyn::visitGenericParam(GenericParam* p) {} //abstract class

void ShowAbsyn::visitTSGParam(TSGParam* p)
{
  bufAppend('(');
  bufAppend("TSGParam");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitType(Type* p) {} //abstract class

void ShowAbsyn::visitTAddress(TAddress* p)
{
  bufAppend("TAddress");
}
void ShowAbsyn::visitTByte(TByte* p)
{
  bufAppend("TByte");
}
void ShowAbsyn::visitTCustom(TCustom* p)
{
  bufAppend('(');
  bufAppend("TCustom");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitTFixedArray(TFixedArray* p)
{
  bufAppend('(');
  bufAppend("TFixedArray");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitInteger(p->integer_);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitTGenericArray(TGenericArray* p)
{
  bufAppend('(');
  bufAppend("TGenericArray");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitTStruct(TStruct* p)
{
  bufAppend('(');
  bufAppend("TStruct");
  bufAppend(' ');
  bufAppend('[');
  if (p->liststructmemberdeclaration_)  p->liststructmemberdeclaration_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitTType(TType* p)
{
  bufAppend("TType");
}
void ShowAbsyn::visitStructMemberDeclaration(StructMemberDeclaration* p) {} //abstract class

void ShowAbsyn::visitSMDMemberDeclaration(SMDMemberDeclaration* p)
{
  bufAppend('(');
  bufAppend("SMDMemberDeclaration");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitParameterDeclaration(ParameterDeclaration* p) {} //abstract class

void ShowAbsyn::visitPDAutoParameter(PDAutoParameter* p)
{
  bufAppend('(');
  bufAppend("PDAutoParameter");
  bufAppend(' ');
  bufAppend('[');
  if (p->listvariablespecifier_)  p->listvariablespecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitPDTypedParameter(PDTypedParameter* p)
{
  bufAppend('(');
  bufAppend("PDTypedParameter");
  bufAppend(' ');
  bufAppend('[');
  if (p->listvariablespecifier_)  p->listvariablespecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitStatement(Statement* p) {} //abstract class

void ShowAbsyn::visitSReturn(SReturn* p)
{
  bufAppend('(');
  bufAppend("SReturn");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSExpression(SExpression* p)
{
  bufAppend('(');
  bufAppend("SExpression");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSScope(SScope* p)
{
  bufAppend('(');
  bufAppend("SScope");
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSIf(SIf* p)
{
  bufAppend('(');
  bufAppend("SIf");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSIfElse(SIfElse* p)
{
  bufAppend('(');
  bufAppend("SIfElse");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->liststatement_1->accept(this);
  bufAppend(' ');
  p->liststatement_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSLoop(SLoop* p)
{
  bufAppend('(');
  bufAppend("SLoop");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSWhile(SWhile* p)
{
  bufAppend('(');
  bufAppend("SWhile");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSUntil(SUntil* p)
{
  bufAppend('(');
  bufAppend("SUntil");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSFor(SFor* p)
{
  bufAppend('(');
  bufAppend("SFor");
  bufAppend(' ');
  p->listexpression_1->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->listexpression_2->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSForEach(SForEach* p)
{
  bufAppend('(');
  bufAppend("SForEach");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSForAll(SForAll* p)
{
  bufAppend('(');
  bufAppend("SForAll");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSBreak(SBreak* p)
{
  bufAppend("SBreak");
}
void ShowAbsyn::visitSContinue(SContinue* p)
{
  bufAppend("SContinue");
}
void ShowAbsyn::visitSBreakpoint(SBreakpoint* p)
{
  bufAppend("SBreakpoint");
}
void ShowAbsyn::visitSIVariable(SIVariable* p)
{
  bufAppend('(');
  bufAppend("SIVariable");
  bufAppend(' ');
  bufAppend('[');
  if (p->listvariablespecifier_)  p->listvariablespecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSVariable(SVariable* p)
{
  bufAppend('(');
  bufAppend("SVariable");
  bufAppend(' ');
  bufAppend('[');
  if (p->listvariablespecifier_)  p->listvariablespecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitRValue(RValue* p) {} //abstract class

void ShowAbsyn::visitRVIdent(RVIdent* p)
{
  bufAppend('(');
  bufAppend("RVIdent");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitRVQualified(RVQualified* p)
{
  bufAppend('(');
  bufAppend("RVQualified");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitExpression(Expression* p) {} //abstract class

void ShowAbsyn::visitEDouble(EDouble* p)
{
  bufAppend('(');
  bufAppend("EDouble");
  bufAppend(' ');
  visitDouble(p->double_);
  bufAppend(')');
}
void ShowAbsyn::visitEInteger(EInteger* p)
{
  bufAppend('(');
  bufAppend("EInteger");
  bufAppend(' ');
  visitInteger(p->integer_);
  bufAppend(')');
}
void ShowAbsyn::visitEString(EString* p)
{
  bufAppend('(');
  bufAppend("EString");
  bufAppend(' ');
  visitIdent(p->cstring_);
  bufAppend(')');
}
void ShowAbsyn::visitEChar(EChar* p)
{
  bufAppend('(');
  bufAppend("EChar");
  bufAppend(' ');
  visitIdent(p->cchar_);
  bufAppend(')');
}
void ShowAbsyn::visitEPi(EPi* p)
{
  bufAppend("EPi");
}
void ShowAbsyn::visitERValue(ERValue* p)
{
  bufAppend('(');
  bufAppend("ERValue");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEArray(EArray* p)
{
  bufAppend('(');
  bufAppend("EArray");
  bufAppend(' ');
  bufAppend('[');
  if (p->listexpression_)  p->listexpression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEList(EList* p)
{
  bufAppend('(');
  bufAppend("EList");
  bufAppend(' ');
  bufAppend('[');
  if (p->listexpression_)  p->listexpression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEAComp(EAComp* p)
{
  bufAppend('(');
  bufAppend("EAComp");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listexpression_)  p->listexpression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitELComp(ELComp* p)
{
  bufAppend('(');
  bufAppend("ELComp");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listexpression_)  p->listexpression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIndex(EIndex* p)
{
  bufAppend('(');
  bufAppend("EIndex");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitESimpleCall(ESimpleCall* p)
{
  bufAppend('(');
  bufAppend("ESimpleCall");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitECall(ECall* p)
{
  bufAppend('(');
  bufAppend("ECall");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listexpression_)  p->listexpression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEPostInc(EPostInc* p)
{
  bufAppend('(');
  bufAppend("EPostInc");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEPostDec(EPostDec* p)
{
  bufAppend('(');
  bufAppend("EPostDec");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEAddress(EAddress* p)
{
  bufAppend('(');
  bufAppend("EAddress");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinSExt(EIntrinSExt* p)
{
  bufAppend('(');
  bufAppend("EIntrinSExt");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinZExt(EIntrinZExt* p)
{
  bufAppend('(');
  bufAppend("EIntrinZExt");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinAddI(EIntrinAddI* p)
{
  bufAppend('(');
  bufAppend("EIntrinAddI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinSubI(EIntrinSubI* p)
{
  bufAppend('(');
  bufAppend("EIntrinSubI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinMulI(EIntrinMulI* p)
{
  bufAppend('(');
  bufAppend("EIntrinMulI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinUdivI(EIntrinUdivI* p)
{
  bufAppend('(');
  bufAppend("EIntrinUdivI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinSdivI(EIntrinSdivI* p)
{
  bufAppend('(');
  bufAppend("EIntrinSdivI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinUremI(EIntrinUremI* p)
{
  bufAppend('(');
  bufAppend("EIntrinUremI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinSremI(EIntrinSremI* p)
{
  bufAppend('(');
  bufAppend("EIntrinSremI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinAndI(EIntrinAndI* p)
{
  bufAppend('(');
  bufAppend("EIntrinAndI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinOrI(EIntrinOrI* p)
{
  bufAppend('(');
  bufAppend("EIntrinOrI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinXorI(EIntrinXorI* p)
{
  bufAppend('(');
  bufAppend("EIntrinXorI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinShlI(EIntrinShlI* p)
{
  bufAppend('(');
  bufAppend("EIntrinShlI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinLshrI(EIntrinLshrI* p)
{
  bufAppend('(');
  bufAppend("EIntrinLshrI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinAshrI(EIntrinAshrI* p)
{
  bufAppend('(');
  bufAppend("EIntrinAshrI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinNotI(EIntrinNotI* p)
{
  bufAppend('(');
  bufAppend("EIntrinNotI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinNegI(EIntrinNegI* p)
{
  bufAppend('(');
  bufAppend("EIntrinNegI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinCEqI(EIntrinCEqI* p)
{
  bufAppend('(');
  bufAppend("EIntrinCEqI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinCNeI(EIntrinCNeI* p)
{
  bufAppend('(');
  bufAppend("EIntrinCNeI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinCLtI(EIntrinCLtI* p)
{
  bufAppend('(');
  bufAppend("EIntrinCLtI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinCGtI(EIntrinCGtI* p)
{
  bufAppend('(');
  bufAppend("EIntrinCGtI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinCLeI(EIntrinCLeI* p)
{
  bufAppend('(');
  bufAppend("EIntrinCLeI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEIntrinCGeI(EIntrinCGeI* p)
{
  bufAppend('(');
  bufAppend("EIntrinCGeI");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitELnot(ELnot* p)
{
  bufAppend('(');
  bufAppend("ELnot");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEPreInc(EPreInc* p)
{
  bufAppend('(');
  bufAppend("EPreInc");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEPreDec(EPreDec* p)
{
  bufAppend('(');
  bufAppend("EPreDec");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitENeg(ENeg* p)
{
  bufAppend('(');
  bufAppend("ENeg");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEBnot(EBnot* p)
{
  bufAppend('(');
  bufAppend("EBnot");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEPos(EPos* p)
{
  bufAppend('(');
  bufAppend("EPos");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEMul(EMul* p)
{
  bufAppend('(');
  bufAppend("EMul");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEDiv(EDiv* p)
{
  bufAppend('(');
  bufAppend("EDiv");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEMod(EMod* p)
{
  bufAppend('(');
  bufAppend("EMod");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEAdd(EAdd* p)
{
  bufAppend('(');
  bufAppend("EAdd");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitESub(ESub* p)
{
  bufAppend('(');
  bufAppend("ESub");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitELSh(ELSh* p)
{
  bufAppend('(');
  bufAppend("ELSh");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitERSh(ERSh* p)
{
  bufAppend('(');
  bufAppend("ERSh");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitELT(ELT* p)
{
  bufAppend('(');
  bufAppend("ELT");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEGT(EGT* p)
{
  bufAppend('(');
  bufAppend("EGT");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitELE(ELE* p)
{
  bufAppend('(');
  bufAppend("ELE");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEGE(EGE* p)
{
  bufAppend('(');
  bufAppend("EGE");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEE(EE* p)
{
  bufAppend('(');
  bufAppend("EE");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitENE(ENE* p)
{
  bufAppend('(');
  bufAppend("ENE");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEBand(EBand* p)
{
  bufAppend('(');
  bufAppend("EBand");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEBor(EBor* p)
{
  bufAppend('(');
  bufAppend("EBor");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEBxor(EBxor* p)
{
  bufAppend('(');
  bufAppend("EBxor");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitELand(ELand* p)
{
  bufAppend('(');
  bufAppend("ELand");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitELor(ELor* p)
{
  bufAppend('(');
  bufAppend("ELor");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitELxor(ELxor* p)
{
  bufAppend('(');
  bufAppend("ELxor");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEConditional(EConditional* p)
{
  bufAppend('(');
  bufAppend("EConditional");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  p->expression_3->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEAssign(EAssign* p)
{
  bufAppend('(');
  bufAppend("EAssign");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEAddAssign(EAddAssign* p)
{
  bufAppend('(');
  bufAppend("EAddAssign");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitESubAssign(ESubAssign* p)
{
  bufAppend('(');
  bufAppend("ESubAssign");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEMulAssign(EMulAssign* p)
{
  bufAppend('(');
  bufAppend("EMulAssign");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEDivAssign(EDivAssign* p)
{
  bufAppend('(');
  bufAppend("EDivAssign");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEModAssign(EModAssign* p)
{
  bufAppend('(');
  bufAppend("EModAssign");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEAndAssign(EAndAssign* p)
{
  bufAppend('(');
  bufAppend("EAndAssign");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEOrAssign(EOrAssign* p)
{
  bufAppend('(');
  bufAppend("EOrAssign");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEXorAssign(EXorAssign* p)
{
  bufAppend('(');
  bufAppend("EXorAssign");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitELShAssign(ELShAssign* p)
{
  bufAppend('(');
  bufAppend("ELShAssign");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitERShAssign(ERShAssign* p)
{
  bufAppend('(');
  bufAppend("ERShAssign");
  bufAppend(' ');
  bufAppend('[');
  if (p->rvalue_)  p->rvalue_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListTLDeclaration(ListTLDeclaration *listtldeclaration)
{
  while(listtldeclaration!= 0)
  {
    if (listtldeclaration->listtldeclaration_)
    {
      listtldeclaration->tldeclaration_->accept(this);
      bufAppend(", ");
      listtldeclaration = listtldeclaration->listtldeclaration_;
    }
    else
    {
      listtldeclaration->tldeclaration_->accept(this);
      listtldeclaration = 0;
    }
  }
}

void ShowAbsyn::visitListDeclaration(ListDeclaration *listdeclaration)
{
  while(listdeclaration!= 0)
  {
    if (listdeclaration->listdeclaration_)
    {
      listdeclaration->declaration_->accept(this);
      bufAppend(", ");
      listdeclaration = listdeclaration->listdeclaration_;
    }
    else
    {
      listdeclaration->declaration_->accept(this);
      listdeclaration = 0;
    }
  }
}

void ShowAbsyn::visitListStatement(ListStatement *liststatement)
{
  while(liststatement!= 0)
  {
    if (liststatement->liststatement_)
    {
      liststatement->statement_->accept(this);
      bufAppend(", ");
      liststatement = liststatement->liststatement_;
    }
    else
    {
      liststatement->statement_->accept(this);
      liststatement = 0;
    }
  }
}

void ShowAbsyn::visitListTypeSpecifier(ListTypeSpecifier *listtypespecifier)
{
  while(listtypespecifier!= 0)
  {
    if (listtypespecifier->listtypespecifier_)
    {
      listtypespecifier->typespecifier_->accept(this);
      bufAppend(", ");
      listtypespecifier = listtypespecifier->listtypespecifier_;
    }
    else
    {
      listtypespecifier->typespecifier_->accept(this);
      listtypespecifier = 0;
    }
  }
}

void ShowAbsyn::visitListConversionSpecifier(ListConversionSpecifier *listconversionspecifier)
{
  while(listconversionspecifier!= 0)
  {
    if (listconversionspecifier->listconversionspecifier_)
    {
      listconversionspecifier->conversionspecifier_->accept(this);
      bufAppend(", ");
      listconversionspecifier = listconversionspecifier->listconversionspecifier_;
    }
    else
    {
      listconversionspecifier->conversionspecifier_->accept(this);
      listconversionspecifier = 0;
    }
  }
}

void ShowAbsyn::visitListFunctionSpecifier(ListFunctionSpecifier *listfunctionspecifier)
{
  while(listfunctionspecifier!= 0)
  {
    if (listfunctionspecifier->listfunctionspecifier_)
    {
      listfunctionspecifier->functionspecifier_->accept(this);
      bufAppend(", ");
      listfunctionspecifier = listfunctionspecifier->listfunctionspecifier_;
    }
    else
    {
      listfunctionspecifier->functionspecifier_->accept(this);
      listfunctionspecifier = 0;
    }
  }
}

void ShowAbsyn::visitListVariableSpecifier(ListVariableSpecifier *listvariablespecifier)
{
  while(listvariablespecifier!= 0)
  {
    if (listvariablespecifier->listvariablespecifier_)
    {
      listvariablespecifier->variablespecifier_->accept(this);
      bufAppend(", ");
      listvariablespecifier = listvariablespecifier->listvariablespecifier_;
    }
    else
    {
      listvariablespecifier->variablespecifier_->accept(this);
      listvariablespecifier = 0;
    }
  }
}

void ShowAbsyn::visitListStructMemberDeclaration(ListStructMemberDeclaration *liststructmemberdeclaration)
{
  while(liststructmemberdeclaration!= 0)
  {
    if (liststructmemberdeclaration->liststructmemberdeclaration_)
    {
      liststructmemberdeclaration->structmemberdeclaration_->accept(this);
      bufAppend(", ");
      liststructmemberdeclaration = liststructmemberdeclaration->liststructmemberdeclaration_;
    }
    else
    {
      liststructmemberdeclaration->structmemberdeclaration_->accept(this);
      liststructmemberdeclaration = 0;
    }
  }
}

void ShowAbsyn::visitListGenericParam(ListGenericParam *listgenericparam)
{
  while(listgenericparam!= 0)
  {
    if (listgenericparam->listgenericparam_)
    {
      listgenericparam->genericparam_->accept(this);
      bufAppend(", ");
      listgenericparam = listgenericparam->listgenericparam_;
    }
    else
    {
      listgenericparam->genericparam_->accept(this);
      listgenericparam = 0;
    }
  }
}

void ShowAbsyn::visitListParameterDeclaration(ListParameterDeclaration *listparameterdeclaration)
{
  while(listparameterdeclaration!= 0)
  {
    if (listparameterdeclaration->listparameterdeclaration_)
    {
      listparameterdeclaration->parameterdeclaration_->accept(this);
      bufAppend(", ");
      listparameterdeclaration = listparameterdeclaration->listparameterdeclaration_;
    }
    else
    {
      listparameterdeclaration->parameterdeclaration_->accept(this);
      listparameterdeclaration = 0;
    }
  }
}

void ShowAbsyn::visitListExpression(ListExpression *listexpression)
{
  while(listexpression!= 0)
  {
    if (listexpression->listexpression_)
    {
      listexpression->expression_->accept(this);
      bufAppend(", ");
      listexpression = listexpression->listexpression_;
    }
    else
    {
      listexpression->expression_->accept(this);
      listexpression = 0;
    }
  }
}

void ShowAbsyn::visitInteger(Integer i)
{
  char tmp[16];
  sprintf(tmp, "%d", i);
  bufAppend(tmp);
}
void ShowAbsyn::visitDouble(Double d)
{
  char tmp[16];
  sprintf(tmp, "%g", d);
  bufAppend(tmp);
}
void ShowAbsyn::visitChar(Char c)
{
  bufAppend('\'');
  bufAppend(c);
  bufAppend('\'');
}
void ShowAbsyn::visitString(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}
void ShowAbsyn::visitIdent(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}

