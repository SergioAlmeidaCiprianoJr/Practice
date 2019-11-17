# Unb - FGA
# Joao Henrique Cunha Paulino 180033620
# Sergio de Almeida Cipriano Junior 180037439

# Registradores usados:
# 	t1 = n1 = Multiplicando
# 	t2 = n2 = Multiplicador

#   s0 = parte superior do registrador produto de 64 bits
#   s1 = Guardador do bit entre hi e lo
#   s2 = parte inferior do registrador produto de 64 bits
#   s3 = guarda o valor de Produto[-1]

#   t0 = contador
#   t5 = ultimo bit do reg. inferior. No caso t5 em algum momenso vai ser comparado com s3.
#   t6 = constante = 32
# De s0 - s3 sao os registradores usados para montar o produto.

.data
	bN: 	.asciiz "\n"
	High:   .asciiz "Porção mais significativa do número (Hi): "
	Low:    .asciiz "\nPorção menos significativa do número (Lo): "

.text
.globl main

main:
	# Leirura de n1 , n2.
	li $v0,5 
	syscall
	addu $t1,$zero,$v0
	li $v0,5
	syscall
	addu $t2,$zero,$v0
	# pula funcao multipicadora.
	j multfac

resposta:
	# printando Hi
	la $a0, High
	jal printString
	addu $a0,$zero,$s0
	jal printInt

	# printando Lo
	la $a0, Low
	jal printString
	addu $a0,$zero,$s2
	jal printInt

	# printando \n
	la $a0, bN
	jal printString

	# Encerra programa 
	li $v0 , 10
	syscall

multfac:
	Passo1:
		addu $s0,$zero,$zero  # superior = 0
		addu $s2,$zero,$t2    # inferior = n2 = multiplicador
		addu $s3,$zero,$zero # Produto[-1] = 0
		addu $t0,$zero,$zero # cont = 0
		addi $t6,$zero,32 # parada
	Passo2:
		# Salva o ultimo bit do reg. inferior.
		jal salvaBitsFinal
		# Se o ultimo cara e produto[-1] sao iguais, vai passo3.
		beq $t5,$s3,Passo3
		# Como ja sei que eles nao sao iguais aqui, entao se t5 == 0 , tenho que somar
		# Dado que s3 == 1
		beq $t5,$zero,somaSup
		# Operacoes.
		subtraiSup:
			subu $s0,$s0,$t1
			j Passo3
		somaSup:
			addu $s0,$s0,$t1
	Passo3:
		# Aqui acontece o deslocamento aritmetico.
		# Primeiro move do meio para baixo
		j passaBitEntreRegs
	Passo4:
		addi $t0,$t0,1
		bne $t0,$t6,Passo2
	# __________
	mthi $s0
	mtlo $s2
	j resposta

salvaBitsFinal:
	# salva ultimo bit:
	addu $t5,$zero,$s2
	sll $t5,$t5,31
	srl $t5,$t5,31
	jr $ra

salvaBitsMeio:
	# salva o bit do meio:
	addu $s1,$zero,$s0 # copia o superior para o registrador do meio
	sll $s1,$s1,31 # faz shift no registrador do meio para ficar apenas com 0 ou 1 no bit mais significativo
	jr $ra

passaBitEntreRegs:
	jal salvaBitsMeio
	# Essa funcao movimenta o bit menos significativo do reg. superior para o reg. inferior.
	#	Alem disso, ela da um srl no inferior e salva o bit do inferior no Produto[-1]
	
	addu $s3,$zero,$t5 # Como ja sei quem e o ultimo bit aqui eu so copio ele para Produto[-1]
	
	# Agora , depois de salvar vem o srl no reg. inferior.
	srl $s2,$s2,1
	or $s2,$s2,$s1

	# Depois move em cima.
	sra $s0,$s0,1	
	j Passo4

printString:
	li $v0,4
	syscall
	jr $ra

printInt:
	li $v0, 1
	syscall
	jr $ra