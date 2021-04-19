	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                              ; main function     
## %bb.0:
	pushq	%rbp                    ; pushing (Q denotes quadword-8 bytes) the value stored in the rbp register-in the stack
	movq	%rsp, %rbp              ; moving the value stored in the rsp(stack-pointer) register to rbp(base-pointer) register 
	subq	$32, %rsp               ; substracting 32 from the value stored in rsp , so that we can create 32/4=8 more cells in the stack
	movl	$0, -4(%rbp)            ; Now, assigning 0 to Mem[rbp-4]
	movl	$45, -8(%rbp)           ; assigning the value of a(45) to Mem[rbp-8]
	movl	$99, -12(%rbp)          ; assigning the value of b(99) to Mem[rbp-12]
	movl	$18, -16(%rbp)          ; assigning the value of c(18) to Mem[rbp-16]
	movl	$180, -20(%rbp)         ; assigning the value of d(180) to Mem[rbp-20]
	movl	-8(%rbp), %edi          ; moving the value at the location Mem[rbp-8] to edi-register
	movl	-12(%rbp), %esi         ; moving the value at the location Mem[rbp-12] to esi-register
	movl	-16(%rbp), %edx         ; moving the value at the location Mem[rbp-16] to edx-register
	movl	-20(%rbp), %ecx         ; moving the value at the location Mem[rbp-20] to ecx-register
	callq	_GCD4                   ;calling the lebel _GCD4
	movl	%eax, -24(%rbp)         ; moving the value at the eax-register to Mem[rbp-24]
	movl	-8(%rbp), %esi          ; moving the value at the Mem[rbp-8] to esi
	movl	-12(%rbp), %edx         ; moving the value at the Mem[rbp-12] to edx
	movl	-16(%rbp), %ecx         ; moving the value at the Mem[rbp-16] to ecx
	movl	-20(%rbp), %r8d         ; moving the value at the Mem[rbp-20] to r8d
	movl	-24(%rbp), %r9d         ; moving the value at the Mem[rbp-24] to r9d
	leaq	L_.str(%rip), %rdi      ; storing the value of the asciz pointer in the rdi-register 
	movb	$0, %al                 ; Here 0 is parameter for printf and we are storing it in 8bit al register
	callq	_printf                 ; calling printf
	leaq	L_.str.1(%rip), %rdi    ; storing the value of the asciz pointer in the rdi-register
	movl	%eax, -28(%rbp)         ; moving the value stored in eax-register to Mem[rbp-28] 
	movb	$0, %al                 ; again , 0 is parameter for printf and we are storing it in 8bit al register
	callq	_printf                 ; again. calling printf
	xorl	%ecx, %ecx              ;xoring ecx with ecx , which results into 0 . The point of doing this is we are clearing the register
	movl	%eax, -32(%rbp)         ; moving the value stored in eax-register to Mem[rbp-32]
	movl	%ecx, %eax              ; moving the value of ecx register to eax register
	addq	$32, %rsp               ; adding 32 to the value at the rsp-register ;
	popq	%rbp                    ; pop-ing the rbp register value stored in the stack
	retq                            ; return 
                                        ## -- End function
	.globl	_GCD4                   ## -- Begin function GCD4
	.p2align	4, 0x90
_GCD4:                                  ## @GCD4
## %bb.0:
	pushq	%rbp                    ; pushing the value stored in the rbp register-in the stack
	movq	%rsp, %rbp              ; moving the value stored in the rsp-register to rbp-register 
	subq	$32, %rsp               ; substracting 32 from the value stored in rsp 
	movl	%edi, -4(%rbp)          ; assigning the first argument(n1) to mem[rbp-4]
	movl	%esi, -8(%rbp)          ; assigning the second argument(n2) to mem[rbp-8]
	movl	%edx, -12(%rbp)         ; assigning the third argument(n3) to mem[rbp-12]
	movl	%ecx, -16(%rbp)         ; assigning the fourth argument(n4) to mem[rbp-16]
	movl	-4(%rbp), %edi          ; retrieve n1 from mem[rbp-4] and moved it to edi
	movl	-8(%rbp), %esi          ; retrieve n2 from mem[rbp-8] and moved it to esi
	callq	_GCD                    ; calling the lebel _GCD
	movl	%eax, -20(%rbp)         ; the register eax will contain the gcd of (n1 and n2) and now it is moved to mem[rbp-20]
	movl	-12(%rbp), %edi         ; retrieve n3 from mem[rbp-12] and moved it to edi
	movl	-16(%rbp), %esi         ; retrieve n4 from mem[rbp-16] and moved it to esi
	callq	_GCD                    ; again, calling  _GCD
	movl	%eax, -24(%rbp)         ; now. the register eax will contain tht gcd of (n3 and n4) and now it is being moved to mem[rbp-24]
	movl	-20(%rbp), %edi         ; moving the gcd of (n1 and n2) , from mem[rbp-20] to edi
	movl	-24(%rbp), %esi         ; moving the gcd of (n3 and n4) , from mem[rbp-24] to esi
	callq	_GCD                    ; agian calling  _GCD
	movl	%eax, -28(%rbp)         ; now the final gcd is moved from eax to mem[rbp-28]
	movl	-28(%rbp), %eax         ; the gcd is retrieved bac from mem[rbp-28] to eax
	addq	$32, %rsp               ; adding 32 to the value of rsp
	popq	%rbp                    ;pop-ing the rbp register value stored in the stack
	retq                            ; returning the eax value which contains the final gcd
                                        ## -- End function
	.globl	_GCD                    ## -- Begin function GCD
	.p2align	4, 0x90
_GCD:                                   ## @GCD
## %bb.0:
	pushq	%rbp                    ; pushing the value stored in the rbp register-in the stack
	movq	%rsp, %rbp              ; moving the value stored in the rsp-register to rbp-register
	movl	%edi, -4(%rbp)          ; assigning the first argument(num1) to mem[rbp-4]
	movl	%esi, -8(%rbp)          ; assigning the second argument(num2) to mem[rbp-8]
LBB2_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	-4(%rbp), %eax          ; moving the value of mem[rbp-4] to eax register  
	cltd                            ; cltd will make eax to rax i.e 32 bit to 64 bit , for division
	idivl	-8(%rbp)                ; dividing the extended eax by mem[rbp-8] and the remainder will be stored in edx
	cmpl	$0, %edx                ; comparing edx with 0
	je	LBB2_3                      ; if edx is found to be equal with 0 jump to lebel LBB2_3
## %bb.2:                               ##   in Loop: Header=BB2_1 Depth=1
	movl	-4(%rbp), %eax          ; else , moving the value of mem[rbp-4] to eax register
	cltd                            ; again , cltd does it job of converting long to double long
	idivl	-8(%rbp)                ; dividing the extended eax by mem[rbp-8] and the remainder will be stored in edx
	movl	%edx, -12(%rbp)         ; moving the remainder value to mem[rbp-12]
	movl	-8(%rbp), %edx          ; moving the the value at mem[rbp-8] to edx
	movl	%edx, -4(%rbp)          ; again , moving the edx value to mem[rbp-4]
	movl	-12(%rbp), %edx         ; then , moving the mem[rbp-12] value to edx
	movl	%edx, -8(%rbp)          ; finally , moving the edx valye to mem[rbp-8]
	jmp	LBB2_1                      ; jumping to the lebel LBB2_1 (Loop)
LBB2_3:
	movl	-8(%rbp), %eax          ; moving the value at mem[rbp-8] to eax
	popq	%rbp                    ; pop-ing the rbp register value stored in the stack
	retq                             ; returns the eax value which contains gcd
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\nGCD of %d, %d, %d and %d is: %d"

L_.str.1:                               ## @.str.1
	.asciz	"\n"


.subsections_via_symbols
