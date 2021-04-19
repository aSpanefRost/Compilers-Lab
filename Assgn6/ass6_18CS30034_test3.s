	.file	"output.s"

.STR0:	.string "Enter two positive integers: "
	.text
	.globl	hcf
	.type	hcf, @function
hcf:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$20, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
# 15:res = t008 
	movl	$0, -12(%rbp)
# 16:arg1 = n2 arg2 = t008 
	movl	-4(%rbp), %eax
	movl	-12(%rbp), %edx
	cmpl	%edx, %eax
	jne .L1
# 17:
	jmp .L2
# 18:
	jmp	.LRT0
# 19:res = t009 arg1 = n1 arg2 = n2 
.L1:
	movl	-8(%rbp), %eax
	cltd
	idivl	-4(%rbp), %eax
	movl	%edx, -16(%rbp)
# 20:res = n2 
# 21:res = t009 
# 22:res = t010 
	pushq %rbp
	movl	-16(%rbp) , %edi
	movl	-4(%rbp) , %esi
	call	hcf
	movl	%eax, -20(%rbp)
	addq $0 , %rsp
# 23:res = t010 
	movl	-20(%rbp), %eax
	jmp	.LRT0
# 24:
	jmp	.LRT0
# 25:res = n1 
.L2:
	movl	-8(%rbp), %eax
	jmp	.LRT0
# 26:
	jmp	.LRT0
.LRT0:
	addq	$-20, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	hcf, .-hcf
	.globl	main
	.type	main, @function
main:
.LFB1:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$40, %rsp
# 0:
	movq	$.STR0,	%rdi
# 1:res = t000 
	pushq %rbp
	call	prints
	movl	%eax, -12(%rbp)
	addq $8 , %rsp
# 2:res = t001 
	movl	$24, -16(%rbp)
# 3:res = n1 arg1 = t001 
	movl	-16(%rbp), %eax
	movl	%eax, -4(%rbp)
# 4:res = t002 arg1 = t001 
	movl	-16(%rbp), %eax
	movl	%eax, -20(%rbp)
# 5:res = t003 
	movl	$135, -24(%rbp)
# 6:res = n2 arg1 = t003 
	movl	-24(%rbp), %eax
	movl	%eax, -8(%rbp)
# 7:res = t004 arg1 = t003 
	movl	-24(%rbp), %eax
	movl	%eax, -28(%rbp)
# 8:res = n1 
# 9:res = n2 
# 10:res = t005 
	pushq %rbp
	movl	-8(%rbp) , %edi
	movl	-4(%rbp) , %esi
	call	hcf
	movl	%eax, -32(%rbp)
	addq $0 , %rsp
# 11:res = t005 
# 12:res = t006 
	pushq %rbp
	movl	-32(%rbp) , %edi
	call	printi
	movl	%eax, -36(%rbp)
	addq $0 , %rsp
# 13:res = t007 
	movl	$0, -40(%rbp)
# 14:res = t007 
	movl	-40(%rbp), %eax
	jmp	.LRT1
.LRT1:
	addq	$-40, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE1:
	.size	main, .-main
