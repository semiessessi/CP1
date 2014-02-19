void LLVMTransformVisitor::visitEIntrinCEqI(EIntrinCEqI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "icmp eq", p->type_, true );
}

void LLVMTransformVisitor::visitEIntrinCNeI(EIntrinCNeI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "icmp ne", p->type_, true );
}

void LLVMTransformVisitor::visitEIntrinCLtI(EIntrinCLtI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "icmp lt", p->type_, true );
}

void LLVMTransformVisitor::visitEIntrinCGtI(EIntrinCGtI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "icmp gt", p->type_, true );
}

void LLVMTransformVisitor::visitEIntrinCLeI(EIntrinCLeI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "icmp le", p->type_, true );
}

void LLVMTransformVisitor::visitEIntrinCGeI(EIntrinCGeI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "icmp ge", p->type_, true );
}

void LLVMTransformVisitor::visitEIntrinAddI(EIntrinAddI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "add", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinSubI(EIntrinSubI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "sub", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinMulI(EIntrinMulI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "mul", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinUdivI(EIntrinUdivI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "udiv", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinSdivI(EIntrinSdivI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "sdiv", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinUremI(EIntrinUremI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "urem", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinSremI(EIntrinSremI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "srem", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinAndI(EIntrinAndI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "and", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinOrI(EIntrinOrI *p)
{
   visitGenericIntIntrinsic( p->expression_1, p->expression_2, "or", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinXorI(EIntrinXorI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "xor", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinShlI(EIntrinShlI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "shl", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinLshrI(EIntrinLshrI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "lshr", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinAshrI(EIntrinAshrI *p)
{
    visitGenericIntIntrinsic( p->expression_1, p->expression_2, "ashr", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinNotI(EIntrinNotI *p)
{
    // SE - TODO: ...
    //visitGenericIntIntrinsic( "-1", p->expression_, "xor", p->type_ );
}

void LLVMTransformVisitor::visitEIntrinNegI(EIntrinNegI *p)
{
    // SE - TODO: ...
    //visitGenericIntIntrinsic( "0", p->expression_, "sub", p->type_ );
}
