	.file	"output.s"

.STR0:	.string "Enter the number of rows: "
.STR1:	.string "* "
.STR2:	.string "\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$60, %rsp
# 0:
	movq	$.STR0,	%rdi
# 1:res = t000 
	pushq %rbp
	call	prints
	movl	%eax, -16(%rbp)
	addq $8 , %rsp
# 2:res = t001 
	movl	$5, -20(%rbp)
# 3:res = rows arg1 = t001 
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
# 4:res = t002 arg1 = t001 
	movl	-20(%rbp), %eax
	movl	%eax, -24(%rbp)
# 5:res = t003 
	movl	$1, -28(%rbp)
# 6:res = i arg1 = t003 
	movl	-28(%rbp), %eax
	movl	%eax, -4(%rbp)
# 7:res = t004 arg1 = t003 
	movl	-28(%rbp), %eax
	movl	%eax, -32(%rbp)
# 8:arg1 = i arg2 = rows 
.L3:
	movl	-4(%rbp), %eax
	movl	-12(%rbp), %edx
	cmpl	%edx, %eax
	jle .L1
# 9:
	jmp .L2
# 10:
	jmp .L2
# 11:res = i arg1 = i 
.L8:
	movl	-4(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
# 12:res = t005 arg1 = i 
	movl	-4(%rbp), %eax
	movl	%eax, -36(%rbp)
# 13:
	jmp .L3
# 14:res = t006 
.L1:
	movl	$1, -40(%rbp)
# 15:res = j arg1 = t006 
	movl	-40(%rbp), %eax
	movl	%eax, -8(%rbp)
# 16:res = t007 arg1 = t006 
	movl	-40(%rbp), %eax
	movl	%eax, -44(%rbp)
# 17:arg1 = j arg2 = i 
.L6:
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jle .L4
# 18:
	jmp .L5
# 19:
	jmp .L5
# 20:res = j arg1 = j 
.L7:
	movl	-8(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
# 21:res = t008 arg1 = j 
	movl	-8(%rbp), %eax
	movl	%eax, -48(%rbp)
# 22:
	jmp .L6
# 23:
.L4:
	movq	$.STR1,	%rdi
# 24:res = t009 
	pushq %rbp
	call	prints
	movl	%eax, -52(%rbp)
	addq $8 , %rsp
# 25:
	jmp .L7
# 26:
.L5:
	movq	$.STR2,	%rdi
# 27:res = t010 
	pushq %rbp
	call	prints
	movl	%eax, -56(%rbp)
	addq $8 , %rsp
# 28:
	jmp .L8
# 29:res = t011 
.L2:
	movl	$0, -60(%rbp)
# 30:res = t011 
	movl	-60(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-60, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	main, .-main
