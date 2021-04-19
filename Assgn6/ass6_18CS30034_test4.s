	.file	"output.s"

.STR0:	.string "Enter a, b and c respectively: "
.STR1:	.string "Value before swapping:\n"
.STR2:	.string "Value after swapping:\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$84, %rsp
# 0:res = t000 
	movl	$2, -8(%rbp)
# 1:res = a arg1 = t000 
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
# 2:res = t001 
	movl	$4, -16(%rbp)
# 3:res = b arg1 = t001 
	movl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
# 4:res = t002 
	movl	$6, -24(%rbp)
# 5:res = c arg1 = t002 
	movl	-24(%rbp), %eax
	movl	%eax, -20(%rbp)
# 6:
	movq	$.STR0,	%rdi
# 7:res = t003 
	pushq %rbp
	call	prints
	movl	%eax, -32(%rbp)
	addq $8 , %rsp
# 8:
	movq	$.STR1,	%rdi
# 9:res = t004 
	pushq %rbp
	call	prints
	movl	%eax, -36(%rbp)
	addq $8 , %rsp
# 10:res = a 
# 11:res = t005 
	pushq %rbp
	movl	-4(%rbp) , %edi
	call	printi
	movl	%eax, -40(%rbp)
	addq $0 , %rsp
# 12:res = b 
# 13:res = t006 
	pushq %rbp
	movl	-12(%rbp) , %edi
	call	printi
	movl	%eax, -44(%rbp)
	addq $0 , %rsp
# 14:res = c 
# 15:res = t007 
	pushq %rbp
	movl	-20(%rbp) , %edi
	call	printi
	movl	%eax, -48(%rbp)
	addq $0 , %rsp
# 16:res = temp arg1 = b 
	movl	-12(%rbp), %eax
	movl	%eax, -28(%rbp)
# 17:res = t008 arg1 = b 
	movl	-12(%rbp), %eax
	movl	%eax, -52(%rbp)
# 18:res = b arg1 = a 
	movl	-4(%rbp), %eax
	movl	%eax, -12(%rbp)
# 19:res = t009 arg1 = a 
	movl	-4(%rbp), %eax
	movl	%eax, -56(%rbp)
# 20:res = a arg1 = c 
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
# 21:res = t010 arg1 = c 
	movl	-20(%rbp), %eax
	movl	%eax, -60(%rbp)
# 22:res = c arg1 = temp 
	movl	-28(%rbp), %eax
	movl	%eax, -20(%rbp)
# 23:res = t011 arg1 = temp 
	movl	-28(%rbp), %eax
	movl	%eax, -64(%rbp)
# 24:
	movq	$.STR2,	%rdi
# 25:res = t012 
	pushq %rbp
	call	prints
	movl	%eax, -68(%rbp)
	addq $8 , %rsp
# 26:res = a 
# 27:res = t013 
	pushq %rbp
	movl	-4(%rbp) , %edi
	call	printi
	movl	%eax, -72(%rbp)
	addq $0 , %rsp
# 28:res = b 
# 29:res = t014 
	pushq %rbp
	movl	-12(%rbp) , %edi
	call	printi
	movl	%eax, -76(%rbp)
	addq $0 , %rsp
# 30:res = c 
# 31:res = t015 
	pushq %rbp
	movl	-20(%rbp) , %edi
	call	printi
	movl	%eax, -80(%rbp)
	addq $0 , %rsp
# 32:res = t016 
	movl	$0, -84(%rbp)
# 33:res = t016 
	movl	-84(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-84, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	main, .-main
