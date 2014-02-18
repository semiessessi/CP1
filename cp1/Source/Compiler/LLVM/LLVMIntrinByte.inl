void LLVMTransformVisitor::visitEIntrinCEqB(EIntrinCEqB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "icmp eq", "i8", true );
}

void LLVMTransformVisitor::visitEIntrinCNeB(EIntrinCNeB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "icmp ne", "i8", true );
}

void LLVMTransformVisitor::visitEIntrinCLtB(EIntrinCLtB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "icmp lt", "i8", true );
}

void LLVMTransformVisitor::visitEIntrinCGtB(EIntrinCGtB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "icmp gt", "i8", true );
}

void LLVMTransformVisitor::visitEIntrinCLeB(EIntrinCLeB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "icmp le", "i8", true );
}

void LLVMTransformVisitor::visitEIntrinCGeB(EIntrinCGeB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "icmp ge", "i8", true );
}

void LLVMTransformVisitor::visitEIntrinAddB(EIntrinAddB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "add", "i8" );
}


void LLVMTransformVisitor::visitEIntrinSubB(EIntrinSubB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "sub", "i8" );
}

void LLVMTransformVisitor::visitEIntrinMulB(EIntrinMulB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "mul", "i8" );
}

void LLVMTransformVisitor::visitEIntrinUdivB(EIntrinUdivB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "udiv", "i8" );
}

void LLVMTransformVisitor::visitEIntrinSdivB(EIntrinSdivB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "sdiv", "i8" );
}

void LLVMTransformVisitor::visitEIntrinUremB(EIntrinUremB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "urem", "i8" );
}

void LLVMTransformVisitor::visitEIntrinSremB(EIntrinSremB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "srem", "i8" );
}

void LLVMTransformVisitor::visitEIntrinAndB(EIntrinAndB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "and", "i8" );
}

void LLVMTransformVisitor::visitEIntrinOrB(EIntrinOrB *p)
{
   visitEIntrin( p->expression_1, p->expression_2, "or", "i8" );
}

void LLVMTransformVisitor::visitEIntrinXorB(EIntrinXorB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "xor", "i8" );
}

void LLVMTransformVisitor::visitEIntrinShlB(EIntrinShlB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "shl", "i8" );
}

void LLVMTransformVisitor::visitEIntrinLshrB(EIntrinLshrB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "lshr", "i8" );
}

void LLVMTransformVisitor::visitEIntrinAshrB(EIntrinAshrB *p)
{
    visitEIntrin( p->expression_1, p->expression_2, "ashr", "i8" );
}

void LLVMTransformVisitor::visitEIntrinNotB(EIntrinNotB *p)
{
    visitEIntrin( "-1", p->expression_, "xor", "i8" );
}

void LLVMTransformVisitor::visitEIntrinNegB(EIntrinNegB *p)
{
    visitEIntrin( "0", p->expression_, "sub", "i8" );
}
