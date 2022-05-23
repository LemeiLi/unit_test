	.file	"list_2nd.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"<%p> val %d next %p &next %p, "
	.text
	.globl	list_itor
	.type	list_itor, @function
list_itor:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -24(%rbp)
	jmp	.L2
.L3:
	movq	-32(%rbp), %rax
	leaq	8(%rax), %rbx
	movq	-32(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-32(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movq	%rbx, %r8
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movq	-32(%rbp), %rax
	addq	$8, %rax
	movq	%rax, -24(%rbp)
.L2:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -32(%rbp)
	cmpq	$0, -32(%rbp)
	jne	.L3
	movl	$10, %edi
	call	putchar
	movl	$0, %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	list_itor, .-list_itor
	.globl	list_insert
	.type	list_insert, @function
list_insert:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L6
.L8:
	movq	-16(%rbp), %rax
	addq	$8, %rax
	movq	%rax, -8(%rbp)
.L6:
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L7
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -44(%rbp)
	jg	.L8
.L7:
	movl	$16, %edi
	call	malloc
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-24(%rbp), %rax
	movl	-44(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, (%rax)
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	list_insert, .-list_insert
	.section	.rodata
.LC1:
	.string	"got it!\n"
	.text
	.globl	list_delete
	.type	list_delete, @function
list_delete:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L11
.L14:
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -28(%rbp)
	je	.L12
	movq	-16(%rbp), %rax
	addq	$8, %rax
	movq	%rax, -8(%rbp)
	jmp	.L11
.L12:
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$8, %edx
	movl	$1, %esi
	movl	$.LC1, %edi
	call	fwrite
	jmp	.L13
.L11:
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	cmpq	$0, -16(%rbp)
	jne	.L14
.L13:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	free
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	list_delete, .-list_delete
	.globl	main
	.type	main, @function
main:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	$0, -16(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L17
.L18:
	movl	-4(%rbp), %eax
	leal	1(%rax), %edx
	leaq	-16(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	list_insert
	addl	$1, -4(%rbp)
.L17:
	cmpl	$9, -4(%rbp)
	jle	.L18
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	list_itor
	leaq	-16(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	list_delete
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	list_itor
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	main, .-main
	.ident	"GCC: (GNU) 11.0.0 20201214 (experimental)"
	.section	.note.GNU-stack,"",@progbits
