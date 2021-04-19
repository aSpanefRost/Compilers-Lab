	.file	"output.s"

.STR0:	.string "Program to check prime number\n"
.STR1:	.string "Enter a Number: "
.STR2:	.string "\nPrime"
.STR3:	.string "\nNot Prime"
.STR4:	.string "\n"
	.text
	.globl	isPrime
	.type	isPrime, @function
isPrime:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$52, %rsp
	movl	%edi, -4(%rbp)
# 0:res = t000 
	movl	$1, -16(%rbp)
# 1:arg1 = n arg2 = t000 
	movl	-4(%rbp), %eax
	movl	-16(%rbp), %edx
	cmpl	%edx, %eax
	jle .L1
# 2:
	jmp .L2
# 3:
	jmp .L2
# 4:res = t001 
.L1:
	movl	$0, -20(%rbp)
# 5:res = t001 
	movl	-20(%rbp), %eax
	jmp	.LRT0
# 6:
	jmp .L2
# 7:res = t002 
.L2:
	movl	$2, -24(%rbp)
# 8:res = i arg1 = t002 
	movl	-24(%rbp), %eax
	movl	%eax, -8(%rbp)
# 9:res = t003 arg1 = t002 
	movl	-24(%rbp), %eax
	movl	%eax, -28(%rbp)
# 10:arg1 = i arg2 = n 
.L5:
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jl .L3
# 11:
	jmp .L4
# 12:
	jmp .L4
# 13:res = t004 arg1 = i 
.L7:
	movl	-8(%rbp), %eax
	movl	%eax, -32(%rbp)
# 14:res = i arg1 = i 
	movl	-8(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
# 15:
	jmp .L5
# 16:res = t005 arg1 = n arg2 = i 
.L3:
	movl	-4(%rbp), %eax
	cltd
	idivl	-8(%rbp), %eax
	movl	%edx, -36(%rbp)
# 17:res = j arg1 = t005 
	movl	-36(%rbp), %eax
	movl	%eax, -12(%rbp)
# 18:res = t006 arg1 = t005 
	movl	-36(%rbp), %eax
	movl	%eax, -40(%rbp)
# 19:res = t007 
	movl	$0, -44(%rbp)
# 20:arg1 = j arg2 = t007 
	movl	-12(%rbp), %eax
	movl	-44(%rbp), %edx
	cmpl	%edx, %eax
	je .L6
# 21:
	jmp .L7
# 22:
	jmp .L8
# 23:res = t008 
.L6:
	movl	$0, -48(%rbp)
# 24:res = t008 
	movl	-48(%rbp), %eax
	jmp	.LRT0
# 25:
	jmp .L7
# 26:
.L8:
	jmp .L7
# 27:res = t009 
.L4:
	movl	$1, -52(%rbp)
# 28:res = t009 
	movl	-52(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-52, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	isPrime, .-isPrime
	.globl	main
	.type	main, @function
main:
.LFB1:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$68, %rsp
# 29:res = t010 
	movl	$1, -16(%rbp)
# 30:res = err arg1 = t010 
	movl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
# 31:
	movq	$.STR0,	%rdi
# 32:res = t011 
	pushq %rbp
	call	prints
	movl	%eax, -20(%rbp)
	addq $8 , %rsp
# 33:
	movq	$.STR1,	%rdi
# 34:res = t012 
	pushq %rbp
	call	prints
	movl	%eax, -24(%rbp)
	addq $8 , %rsp
# 35:res = t013 arg1 = err 
	leaq	-12(%rbp), %rax
	movq	%rax, -32(%rbp)
# 36:res = t013 
# 37:res = t014 
	pushq %rbp
	movq	-32(%rbp), %rdi
	call	readi
	movl	%eax, -36(%rbp)
	addq $0 , %rsp
# 38:res = n arg1 = t014 
	movl	-36(%rbp), %eax
	movl	%eax, -4(%rbp)
# 39:res = t015 arg1 = t014 
	movl	-36(%rbp), %eax
	movl	%eax, -40(%rbp)
# 40:res = n 
# 41:res = t016 
	pushq %rbp
	movl	-4(%rbp) , %edi
	call	isPrime
	movl	%eax, -44(%rbp)
	addq $0 , %rsp
# 42:res = x arg1 = t016 
	movl	-44(%rbp), %eax
	movl	%eax, -8(%rbp)
# 43:res = t017 arg1 = t016 
	movl	-44(%rbp), %eax
	movl	%eax, -48(%rbp)
# 44:res = t018 
	movl	$1, -52(%rbp)
# 45:arg1 = x arg2 = t018 
	movl	-8(%rbp), %eax
	movl	-52(%rbp), %edx
	cmpl	%edx, %eax
	je .L9
# 46:
	jmp .L10
# 47:
	jmp .L11
# 48:
.L9:
	movq	$.STR2,	%rdi
# 49:res = t019 
	pushq %rbp
	call	prints
	movl	%eax, -56(%rbp)
	addq $8 , %rsp
# 50:
	jmp .L11
# 51:
.L10:
	movq	$.STR3,	%rdi
# 52:res = t020 
	pushq %rbp
	call	prints
	movl	%eax, -60(%rbp)
	addq $8 , %rsp
# 53:
	jmp .L11
# 54:
.L11:
	movq	$.STR4,	%rdi
# 55:res = t021 
	pushq %rbp
	call	prints
	movl	%eax, -64(%rbp)
	addq $8 , %rsp
# 56:res = t022 
	movl	$0, -68(%rbp)
# 57:res = t022 
	movl	-68(%rbp), %eax
	jmp	.LRT1
.LRT1:
	addq	$-68, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE1:
	.size	main, .-main
