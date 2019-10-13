.text

        .globl main
        
        main:
        
        li $v0, 5
        syscall
        la $t0, 0($v0)

        addi $a0, $zero, 7
        addi $t1, $zero, 100
        addi $t3, $zero, 5
        
        if100:
                slt $t2, $t1, $t0
                beq $t2, $zero, if30
                sub $t0, $t0, $t1
                mult	$t0, $t3
                mflo	$t4
                addi $t0, $zero, 100
                add $a0, $t4, $a0
        if30:
                addi $t1, $zero, 30
                addi $t3, $zero, 2
                slt $t2, $t1, $t0
                beq $t2, $zero, if10
                sub $t0, $t0, $t1
                mult	$t0, $t3
                mflo	$t4
                addi $t0, $zero, 30
                add $a0, $t4, $a0
        if10:
                addi $t1, $zero, 10
                slt $t2, $t1, $t0
                beq $t2, $zero, fim
                sub $t0, $t0, $t1
                add $a0, $t0, $a0

	fim:
                li $v0, 1	
		syscall
                la $a0, newline
                li $v0, 4
		syscall
		li $v0, 10
		syscall

.data

    newline: 
        .asciiz "\n"