void LLVMTransformVisitor::visitEIntrinAdd8B(EIntrinAdd8B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "add", "i64" );
}

void LLVMTransformVisitor::visitEIntrinSub8B(EIntrinSub8B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "sub", "i64" );
}

void LLVMTransformVisitor::visitEIntrinMul8B(EIntrinMul8B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "mul", "i64" );
}

void LLVMTransformVisitor::visitEIntrinUdiv8B(EIntrinUdiv8B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "udiv", "i64" );
}

void LLVMTransformVisitor::visitEIntrinSdiv8B(EIntrinSdiv8B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "sdiv", "i64" );
}

void LLVMTransformVisitor::visitEIntrinUrem8B(EIntrinUrem8B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "urem", "i64" );
}

void LLVMTransformVisitor::visitEIntrinSrem8B(EIntrinSrem8B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "srem", "i64" );
}

void LLVMTransformVisitor::visitEIntrinAnd8B(EIntrinAnd8B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "and", "i64" );
}

void LLVMTransformVisitor::visitEIntrinOr8B(EIntrinOr8B *p)
{
   visitEIntrin( p->expression_1, p->expression_2, "or", "i64" );
}

void LLVMTransformVisitor::visitEIntrinXor8B(EIntrinXor8B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "xor", "i64" );
}

void LLVMTransformVisitor::visitEIntrinShl8B(EIntrinShl8B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "shl", "i64" );
}

void LLVMTransformVisitor::visitEIntrinLshr8B(EIntrinLshr8B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "lshr", "i64" );
}

void LLVMTransformVisitor::visitEIntrinAshr8B(EIntrinAshr8B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "ashr", "i64" );
}

void LLVMTransformVisitor::visitEIntrinNot8B(EIntrinNot8B *p)
{
    visitEIntrin( "-1", p->expression_, "xor", "i64" );
}

void LLVMTransformVisitor::visitEIntrinNeg8B(EIntrinNeg8B *p)
{
    visitEIntrin( "0", p->expression_, "sub", "i64" );
}
