void LLVMTransformVisitor::visitEIntrinAdd2B(EIntrinAdd2B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "add", "i16" );
}

void LLVMTransformVisitor::visitEIntrinSub2B(EIntrinSub2B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "sub", "i16" );
}

void LLVMTransformVisitor::visitEIntrinMul2B(EIntrinMul2B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "mul", "i16" );
}

void LLVMTransformVisitor::visitEIntrinUdiv2B(EIntrinUdiv2B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "udiv", "i16" );
}

void LLVMTransformVisitor::visitEIntrinSdiv2B(EIntrinSdiv2B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "sdiv", "i16" );
}

void LLVMTransformVisitor::visitEIntrinUrem2B(EIntrinUrem2B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "urem", "i16" );
}

void LLVMTransformVisitor::visitEIntrinSrem2B(EIntrinSrem2B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "srem", "i16" );
}

void LLVMTransformVisitor::visitEIntrinAnd2B(EIntrinAnd2B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "and", "i16" );
}

void LLVMTransformVisitor::visitEIntrinOr2B(EIntrinOr2B *p)
{
   visitEIntrin( p->expression_1, p->expression_2, "or", "i16" );
}

void LLVMTransformVisitor::visitEIntrinXor2B(EIntrinXor2B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "xor", "i16" );
}

void LLVMTransformVisitor::visitEIntrinShl2B(EIntrinShl2B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "shl", "i16" );
}

void LLVMTransformVisitor::visitEIntrinLshr2B(EIntrinLshr2B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "lshr", "i16" );
}

void LLVMTransformVisitor::visitEIntrinAshr2B(EIntrinAshr2B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "ashr", "i16" );
}

void LLVMTransformVisitor::visitEIntrinNot2B(EIntrinNot2B *p)
{
    visitEIntrin( "-1", p->expression_, "xor", "i16" );
}

void LLVMTransformVisitor::visitEIntrinNeg2B(EIntrinNeg2B *p)
{
    visitEIntrin( "0", p->expression_, "sub", "i16" );
}
