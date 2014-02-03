void LLVMTransformVisitor::visitEIntrinAdd4B(EIntrinAdd4B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "add", "i32" );
}

void LLVMTransformVisitor::visitEIntrinSub4B(EIntrinSub4B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "sub", "i32" );
}

void LLVMTransformVisitor::visitEIntrinMul4B(EIntrinMul4B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "mul", "i32" );
}

void LLVMTransformVisitor::visitEIntrinUdiv4B(EIntrinUdiv4B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "udiv", "i32" );
}

void LLVMTransformVisitor::visitEIntrinSdiv4B(EIntrinSdiv4B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "sdiv", "i32" );
}

void LLVMTransformVisitor::visitEIntrinUrem4B(EIntrinUrem4B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "urem", "i32" );
}

void LLVMTransformVisitor::visitEIntrinSrem4B(EIntrinSrem4B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "srem", "i32" );
}

void LLVMTransformVisitor::visitEIntrinAnd4B(EIntrinAnd4B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "and", "i32" );
}

void LLVMTransformVisitor::visitEIntrinOr4B(EIntrinOr4B *p)
{
   visitEIntrin( p->expression_1, p->expression_2, "or", "i32" );
}

void LLVMTransformVisitor::visitEIntrinXor4B(EIntrinXor4B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "xor", "i32" );
}

void LLVMTransformVisitor::visitEIntrinShl4B(EIntrinShl4B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "shl", "i32" );
}

void LLVMTransformVisitor::visitEIntrinLshr4B(EIntrinLshr4B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "lshr", "i32" );
}

void LLVMTransformVisitor::visitEIntrinAshr4B(EIntrinAshr4B *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "ashr", "i32" );
}

void LLVMTransformVisitor::visitEIntrinNot4B(EIntrinNot4B *p)
{
    visitEIntrin( "-1", p->expression_, "xor", "i32" );
}

void LLVMTransformVisitor::visitEIntrinNeg4B(EIntrinNeg4B *p)
{
    visitEIntrin( "0", p->expression_, "sub", "i32" );
}
