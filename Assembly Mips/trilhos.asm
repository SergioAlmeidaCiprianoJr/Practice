.text
        .globl main

        main:
    
        jal le_inteiro 
        add  $t0, $v0, $zero          # trilhas
        addi $t1, $zero, 1            # melhorTrilha 
        addi $t2, $zero, 10000        # deltaM
        add  $t3, $zero, $zero        # deltaS
        add  $t4, $zero, $zero        # deltaD
        add  $t5, $zero, $zero        # elementos por trilha
        add  $t6, $zero, $zero        # v1
        add  $t7, $zero, $zero        # v2
        addi $t8, $zero, 1 	          # trilha atual (vou usar para iterar sem perder trilhas)
        # fake zero
        addi $s0, $zero, 48
        # ' '
        addi $s1, $zero, 32
        # 10 e/ou '\n'
        addi $s2, $zero, 10

        loop:
			add  $s4, $zero, $zero # auxiliar de multiplicação
			j leitura_pjq_1
			pjq_1:
			add $t5, $s4, $zero
			
       		add  $t3, $zero, $zero # deltaS
        	add  $t4, $zero, $zero # deltaD

			add  $s4, $zero, $zero # auxiliar de multiplicação
			j leitura_pjq_2
			pjq_2:
			add  $t6, $s4, $zero
			addi $t5, $t5, -1

			j loop2
			fimLoop2:

			bgt $t3, $t4, deltaS_maior_deltaD
			blt $t3, $t2, deltaS_menor_deltaM
			continuaLoop:

			beq  $t8, $t0, resposta
			addi $t8, $t8, 1
			j loop

		loop2:
			beq  $t5, $zero, fimLoop2
			add  $s4, $zero, $zero # auxiliar de multiplicação
			j leitura_muito_chata_de_fazer	
			segue:
			add $t7, $s4, $zero
			
			bgt $t7, $t6, if_v2_maior_v1	
			sub $t9, $t6, $t7
			add $t4, $t4, $t9

			continua:
			addi $t5, $t5, -1
			add  $t6, $zero, $t7 
			j loop2

		leitura_muito_chata_de_fazer:
			# s0 -> fake zero
			# s1 -> ' '
			# s2 -> 10 e '\n'
			# s3 -> auxiliar de conversão
			# s4 -> auxiliar de multiplicação
			li $v0, 12
			syscall
			beq $v0, $s1, segue
			beq $v0, $s2, segue
			# convertendo char para int
			sub $s3, $v0, $s0
			# somando
			mult $s4, $s2
			mflo $s4
			add  $s4, $s3, $s4
			j leitura_muito_chata_de_fazer

		leitura_pjq_1:
			# s0 -> fake zero
			# s1 -> ' '
			# s2 -> 10 e '\n'
			# s3 -> auxiliar de conversão
			# s4 -> auxiliar de multiplicação
			li $v0, 12
			syscall
			beq $v0, $s1, pjq_1
			beq $v0, $s2, pjq_1
			# convertendo char para int
			sub $s3, $v0, $s0
			# somando
			mult $s4, $s2
			mflo $s4
			add  $s4, $s3, $s4
			j leitura_pjq_1

		leitura_pjq_2:
			# s0 -> fake zero
			# s1 -> ' '
			# s2 -> 10 e '\n'
			# s3 -> auxiliar de conversão
			# s4 -> auxiliar de multiplicação
			li $v0, 12
			syscall
			beq $v0, $s1, pjq_2
			beq $v1, $s2, pjq_2
			# convertendo char para int
			sub $s3, $v0, $s0
			# somando
			mult $s4, $s2
			mflo $s4
			add  $s4, $s3, $s4
			j leitura_pjq_2

		if_v2_maior_v1:
			sub $t9, $t7, $t6
			add $t3, $t3, $t9
			j continua


        resposta:
			add $a0, $zero, $t1
			li $v0, 1
			syscall
			la $a0, newline
			li $v0, 4
			syscall
			j fim

		deltaS_maior_deltaD:
			add $t3, $zero, $t4
			j continuaLoop

		deltaS_menor_deltaM:
			add $t2, $zero, $t3
			add $t1, $zero, $t8
			j continuaLoop

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
