#lendo de char a char até um espaço e convertendo em int depois
.text


        .globl main

        main:
    
        jal le_inteiro 
        add $t0, $v0, $zero
        add $a0, $zero, $zero
        #reduz o contador
        addi $t1, $zero, 1
        beq $t0, $t1, continue
        sub $t0, $t0, $t1
        #fake zero
        addi $t2, $zero, 48
        #' '
        addi $t3, $zero, 32
        #10
        addi $t6, $zero, 10
        jal loop

        continue:

        jal le_inteiro 
        add $t0, $v0, $zero
        add $a0, $a0, $t0

        jal le_inteiro 
        add $t0, $v0, $zero
        beq $t0, $a0, respostaCerta
        j respostaErrada

        respostaCerta:
                la $a0, acertou
                li $v0, 4
                syscall
                j fim

        respostaErrada:
                la $a0, errou
                li $v0, 4
                syscall

        fim:
                li $v0, 10
                syscall

        le_inteiro:
                li $v0, 5	
                syscall
                jr $ra	
        
        loop:
                sub $t0, $t0, $t1
                add $t5, $zero, $zero
                j le_chars
        segue:
                add $a0, $t5, $a0
                beq $t0, $zero, saida
                j loop

        le_chars:
                li $v0, 12	
                syscall
                beq $v0, $t3, segue
                #convertendo char para int
                sub $t4, $v0, $t2
                #somando
                mult	$t5, $t6
                mflo	$t5
                add $t5, $t4, $t5

                j le_chars

        saida:
                jr $ra

.data

        acertou: 
                .asciiz "Acertou\n"
        errou: 
                .asciiz "Errou\n"    