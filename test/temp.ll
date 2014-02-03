; constant data
@.cstring0 = private unnamed_addr constant [13 x i8] c"Hello world!\00"

; types
%int32 = type i32

; operators

; externs
declare i32 @puts( i8* )
define i32 @_dot_cstd_dot_puts( i8* %a0 ) nounwind
{
	%e0 = call i32 @puts( i8* %a0 )
	ret i32 %e0
}

declare i32 @getchar(  )
define i32 @_dot_cstd_dot_getchar(  ) nounwind
{
	%e1 = call i32 @getchar(  )
	ret i32 %e1
}


; LLVM IR generated from include\int32.cp1 by CP1 - Experimental compiler


; function main
define void @main(  ) nounwind
{
	%r0 = getelementptr [13 x i8]* @.cstring0, i64 0, i64 0
	call i32 @_dot_cstd_dot_puts( i8* %r0 )
	ret void
}

; LLVM IR generated from include\int32.cp1 by CP1 - Experimental compiler


; LLVM IR generated from include\int32.cp1 by CP1 - Experimental compiler


; operator +

; function i32_operator_cp
define i32 @i32_operator_cp( i32 %_dot_a, i32 %_dot_b ) nounwind
{
	%r1 = bitcast i32 %_dot_a to i32
	%r2 = bitcast i32 %_dot_b to i32
	%r3 = add i32 %r1, %r2
	ret i32 %r3
}

; operator -

; function i32_operator_bs
define i32 @i32_operator_bs( i32 %_dot_a ) nounwind
{
	%r4 = bitcast i32 %_dot_a to i32
	%r5 = sub i32 0, %r4
	ret i32 %r5
}

; operator -

; function i32_operator_cs
define i32 @i32_operator_cs( i32 %_dot_a, i32 %_dot_b ) nounwind
{
	%r6 = bitcast i32 %_dot_a to i32
	%r7 = bitcast i32 %_dot_b to i32
	%r8 = sub i32 %r6, %r7
	ret i32 %r8
}

; operator *

; function i32_operator_cm
define i32 @i32_operator_cm( i32 %_dot_a, i32 %_dot_b ) nounwind
{
	%r9 = bitcast i32 %_dot_a to i32
	%r10 = bitcast i32 %_dot_b to i32
	%r11 = mul i32 %r9, %r10
	ret i32 %r11
}

; operator /

; function i32_operator_cd
define i32 @i32_operator_cd( i32 %_dot_a, i32 %_dot_b ) nounwind
{
	%r12 = bitcast i32 %_dot_a to i32
	%r13 = bitcast i32 %_dot_b to i32
	%r14 = sdiv i32 %r12, %r13
	ret i32 %r14
}

; operator %

; function i32_operator_cr
define i32 @i32_operator_cr( i32 %_dot_a, i32 %_dot_b ) nounwind
{
	%r15 = bitcast i32 %_dot_a to i32
	%r16 = bitcast i32 %_dot_b to i32
	%r17 = srem i32 %r15, %r16
	ret i32 %r17
}

; operator &

; function i32_operator_ca
define i32 @i32_operator_ca( i32 %_dot_a, i32 %_dot_b ) nounwind
{
	%r18 = bitcast i32 %_dot_a to i32
	%r19 = bitcast i32 %_dot_b to i32
	%r20 = and i32 %r18, %r19
	ret i32 %r20
}

; operator |

; function i32_operator_co
define i32 @i32_operator_co( i32 %_dot_a, i32 %_dot_b ) nounwind
{
	%r21 = bitcast i32 %_dot_a to i32
	%r22 = bitcast i32 %_dot_b to i32
	%r23 = or i32 %r21, %r22
	ret i32 %r23
}

; operator ^

; function i32_operator_cx
define i32 @i32_operator_cx( i32 %_dot_a, i32 %_dot_b ) nounwind
{
	%r24 = bitcast i32 %_dot_a to i32
	%r25 = bitcast i32 %_dot_b to i32
	%r26 = xor i32 %r24, %r25
	ret i32 %r26
}

