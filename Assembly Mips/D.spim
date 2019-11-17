.text

	.globl main

	main:

	li $v0, 5	
	syscall
	add $t0, $v0, $zero

	beq $t0, $zero, respE

	addi $t2, $zero, 36
	slt $t1, $t0, $t2
	bne $t1, $zero, respD

	addi $t2, $zero, 61
	slt $t1, $t0, $t2
	bne $t1, $zero, respC

	addi $t2, $zero, 86
	slt $t1, $t0, $t2
	bne $t1, $zero, respB

	j respA

	respE:
		la $a0, E
		j imprime_string
	respD:
		la $a0, D
		j imprime_string
	respC:
		la $a0, C
		j imprime_string
	respB:
		la $a0, B
		j imprime_string
	respA:
		la $a0, A
		j imprime_string

	imprime_quebra_linha:
		la $a0, newline
		li $v0, 4
		syscall
		j fim

	imprime_string:
		li $v0, 4
		syscall
		j imprime_quebra_linha

	fim:
		li $v0, 10
		syscall

.data

	newline: 
        	.asciiz "\n"
	E: 
		.asciiz "E"
	D:
		.asciiz "D"
	C:
		.asciiz "C"
	B:
		.asciiz "B"
	A:
		.asciiz "A"
	  
