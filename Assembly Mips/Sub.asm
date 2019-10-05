.text


        .globl main

        main:

        jal le_inteiro 
        add $t0, $v0, $zero
        add $a0, $zero, $t0

        jal le_inteiro 
        add $t0, $v0, $zero
        sub $a0, $a0, $t0

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
