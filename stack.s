	.arch armv7-a
	.eabi_attribute 28, 1
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"stack.c"
	.text
	.data
	.align	2
	.type	g_val, %object
	.size	g_val, 4
g_val:
	.word	10
	.text
	.align	1
	.global	callee
	.arch armv7-a
	.syntax unified
	.thumb
	.thumb_func
	.fpu neon
	.type	callee, %function
callee:
	@ args = 12, pretend = 0, frame = 24
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	push	{r7}               
	sub	sp, sp, #28           sp = sp - 28
	add	r7, sp, #0            r7 = sp + 0

	str	r0, [r7, #12]         *(sp + 12) = r0 = 1
	str	r1, [r7, #8]          *(sp + 8) = r1 = 2
	str	r2, [r7, #4]          *(sp + 4) = r2 = 3
	str	r3, [r7]              *(sp) = 4

	ldr	r2, [r7, #12]         r2 = 1
	ldr	r3, [r7, #8]          r3 = 2
	add	r2, r2, r3            r2 = 1 + 2
	ldr	r3, [r7, #4]          r3 = 3
	add	r2, r2, r3            r2 = 1 + 2 + 3
	ldr	r3, [r7]              r3 = 4
	add	r2, r2, r3            r2 = 1 + 2 + 3 + 4

	ldr	r3, [r7, #32]         r3 = *(sp + 32) = 5
	add	r2, r2, r3            r2 = 1 + 2 + 3 + 4 + 5
	ldr	r3, [r7, #36]         r3 = *(sp + 26) = 6
	add	r2, r2, r3            r2 = 1 + 2 + 3 + 4 + 5 + 6
	ldr	r3, [r7, #40]         r3 = *(sp + 40) = 7
	add	r2, r2, r3            r2 = 1 + 2 + 3 + 4 + 5 + 6 + 7
	movw	r3, #:lower16:g_val
	movt	r3, #:upper16:g_val
	ldr	r3, [r3]
	add	r3, r3, r2
	str	r3, [r7, #20]
	ldr	r3, [r7, #20]
	mov	r0, r3
	adds	r7, r7, #28
	mov	sp, r7
	@ sp needed
	ldr	r7, [sp], #4
	bx	lr
	.size	callee, .-callee
	.align	1
	.global	caller
	.syntax unified
	.thumb
	.thumb_func
	.fpu neon
	.type	caller, %function
caller:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{r7, lr}

	sub	sp, sp, #16    sp = sp - 16
	add	r7, sp, #16    r7 = sp + 16

	movs	r3, #7     r3 = 7
	str	r3, [sp, #8]   *(sp + 8) = 7

	movs	r3, #6     r3 = 6
	str	r3, [sp, #4]   *(sp + 4) = 6

	movs	r3, #5     r3 = 5
	str	r3, [sp]       *(sp) = 5

	movs	r3, #4     r3 = 4
	movs	r2, #3     r2 = 3
	movs	r1, #2     r1 = 2
	movs	r0, #1     r0 = 1
	bl	callee
	mov	r3, r0
	mov	r0, r3
	mov	sp, r7
	@ sp needed
	pop	{r7, pc}
	.size	caller, .-caller
	.ident	"GCC: (GNU Toolchain for the A-profile Architecture 9.2-2019.12 (arm-9.10)) 9.2.1 20191025"
	.section	.note.GNU-stack,"",%progbits
