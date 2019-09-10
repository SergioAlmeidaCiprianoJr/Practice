#operações básicas

.text

	.globl main
	
	main:

        #lendo e armazenando em temporários
		jal le_inteiro 
		la  $t0, 0($v0) #a
        jal le_inteiro 
		la  $t1, 0($v0) #b
        jal le_inteiro 
		la  $t2, 0($v0)	#c
        #...................................

        la $a0, msgADD
        jal imprime_string
        add $a0, $t0, $t1 
        jal imprime_inteiro
        jal imprime_quebra_linha
        
        la $a0, msgSUB
        jal imprime_string
        sub $a0, $t0, $t1 
        jal imprime_inteiro
        jal imprime_quebra_linha

        la $a0, msgAND
        jal imprime_string
        and $a0, $t0, $t1
        jal imprime_inteiro
        jal imprime_quebra_linha

        la $a0, msgOR
        jal imprime_string
        or $a0, $t0, $t1
        jal imprime_inteiro
        jal imprime_quebra_linha

        la $a0, msgXOR
        jal imprime_string
        xor $a0, $t0, $t1
        jal imprime_inteiro
        jal imprime_quebra_linha

        la $a0, msgMASK    
        jal imprime_string
        andi $a0, $t2, 31
        add $a1, $a0, $zero
		jal imprime_inteiro	
        jal imprime_quebra_linha

        #deslocamento de bits
        la $a0, msgSLL1
        jal imprime_string
        add $a0, $a1, $zero
        jal imprime_inteiro	
        la $a0, msgClose
        jal imprime_string
        sll $t0, $t0, $a1 #a
        add $a0, $t0, $zero 
        jal imprime_inteiro	
        jal imprime_quebra_linha

        la $a0, msgSRL1
        jal imprime_string
        add $a0, $a1, $zero
        jal imprime_inteiro	
        la $a0, msgClose
        jal imprime_string
        srl $t1, $t1, $a1 #b
        add $a0, $t1, $zero 
        jal imprime_inteiro	
        jal imprime_quebra_linha
        
		j   fim

	le_inteiro:
		li $v0, 5	
		syscall		# executa a chamada do SO para ler
		jr $ra		
		
	imprime_inteiro:
		li $v0, 1	
		syscall		# executa a chamado do SO para imprimir
		jr $ra	      

    imprime_quebra_linha:
        la $a0, newline
        li $v0, 4
        syscall
        jr $ra

    imprime_string:
        li $v0, 4
        syscall
        jr $ra
    	
	fim:
		li $v0, 10
		syscall		# executa a chamada do SO para encerrar 

.data

    newline: 
        .asciiz "\n"
    msgADD:
        .asciiz "ADD: "
    msgSUB:
        .asciiz "SUB: "
    msgAND:
        .asciiz "AND: "
    msgOR:
        .asciiz "OR: "
    msgXOR:    
        .asciiz "XOR: "
    msgMASK:
        .asciiz "MASK: "    
    msgSLL1:
        .asciiz "SLL(" 
    msgSRL1:
        .asciiz "SRL(" 
    msgClose:
        .asciiz "): " 

# li:
# 1 - imprime int (a0 = int a ser impresso)
# 2 - imprime float (f12 = float a ser impresso)
# 3 - imprime double (f12 = double a ser impresso)
# 4 - imprime string (a0 = endereço de memória da string) 
# 5 - lê int (retorna em v0)
# 6 - lê float (retorna em v0)
# 7 - lê double (retorna em v0)
# 8 - lê string (a0 = endereço de memória da string,
               # a1 = tamanho da string)
# 10 - exit (endereço em v0)