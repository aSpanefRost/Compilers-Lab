	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                           ; main function  

	pushq	%rbp                 ; pushing (Q denotes quadword-8 bytes) the value stored in the rbp register-in the stack
	movq	%rsp, %rbp           ; moving the value stored in the rsp(stack-pointer) register to rbp(base-pointer) register 
	subq	$32, %rsp            ; substracting 32 from the value stored in rsp , so that we can create 32/4=8 more cells in the stack
	movl	$0, -4(%rbp)         ; Now, assigning 0 to Mem[rbp-4]
	movl	$45, -8(%rbp)        ; storing the value(48) of num1 in Mem[rbp-8] 
	movl	$68, -12(%rbp)       ; and the value(68) of num2 in Mem[rbp-12]
	movl	-8(%rbp), %eax       ; Now,assigning the value stored(num1) in the stack at Mem[rbp-8] to eax-register
	cmpl	-12(%rbp), %eax      ; then, comparing the value stored(num2) at Mem[rbp-12] with the value stored in eax-register
	jle	LBB0_2                   ; jump to label LBB0_2 , if num2(stored at Mem[rbp-8]) is less than or equal to num1(value stored in eax-register)

	movl	-8(%rbp), %eax       ;if num2 is greater than num1 , then this will be executed and the value at Mem[rbp-8] will be moved to eax
	movl	%eax, -16(%rbp)      ; the value at eax will be moved to Mem[rbp-16]
	jmp	LBB0_3                   ;then,jump to label LBB0_3
LBB0_2:
	movl	-12(%rbp), %eax      ; then, moving num2 to eax-register
	movl	%eax, -16(%rbp)      ; moving the value stored in eax-register to Mem[rbp-16] 
LBB0_3:
	movl	-16(%rbp), %esi      ;the value at Mem[rbp-16] will be moved to esi
	leaq	L_.str(%rip), %rdi   ;Storing the address of the .asciz in the rdi-register
	movb	$0, %al              ;Here 0 is parameter for printf and we are storing it in 8bit al register
	callq	_printf              ;calling printf 
	xorl	%esi, %esi           ;xoring esi with esi , which results into 0 . The point of doing this is we are clearing the register
	movl	%eax, -20(%rbp)      ;moving the value in eax register to Mem[rbp-20]   ## 4-byte Spill
	movl	%esi, %eax.          ;moving the value in esi register to eax
	addq	$32, %rsp            ;adding 32 to rsp
	popq	%rbp                 ; pop-ing the rbp register value stored in the stack
	retq                         ; transfers control to the return address located on the stack.
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\nThe greater number is: %d"


.subsections_via_symbols
