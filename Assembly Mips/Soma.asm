.text


	.globl main
	
	main:
    
    jal le_inteiro 
	add $t0, $v0, $zero
    add $a0, $zero, $zero

    loop:
        jal le_inteiro
        add $a0, $v0, $a0
        addi $t3, $zero, 1
        sub $t0, $t0, $t3
        bne $t0, $zero, loop

    resposta:
        li $v0, 1	
		syscall
		la $a0, newline
		li $v0, 4
		syscall

    fim:
		li $v0, 10
		syscall

    le_inteiro:
        li $v0, 5	
        syscall
        jr $ra	

.data

    newline: 
        .asciiz "\n"