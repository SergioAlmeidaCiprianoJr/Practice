# li:
# 1 - imprime int (a0 = int a ser impresso)
# 2 - imprime float (f12 = float a ser impresso)
# 3 - imprime double (f12 = double a ser impresso)
# 4 - imprime string (a0 = endereço de memória da string) 
# 5 - lê int (retorna em v0)
# 6 - lê float (retorna em v0)
# 7 - lê double (retorna em f0)
# 8 - lê string (a0 = endereço de memória da string,
#                a1 = tamanho da string)
# 10 - exit (endereço em v0)

.text

    .globl main

    main:

    #-------declarando--------
    add   $t4,  $zero, $zero      # iteracoes
    li.d  $f4,  0.0               # a(i)
    li.d  $f2,  0.0               # b(i)
    li.d  $f6,  0.0               # x
    li.d  $f10, 0.0               # erro
    addi  $t7,  $zero, 100        # quantidade MAX de iteracoes
    #-------------------------

    #----------lendo----------
    jal    le_double
    mov.d  $f6, $f0
    jal    le_double
    mov.d  $f10, $f0
    jal    valida_entrada
    jal    dividePor10
    mov.d  $f10, $f20
    #-------------------------

    #----valores iniciais-----
    mov.d  $f2,  $f6              # b0
    li.d   $f4,  1.0              # a0
    li.d   $f16, 1.0

    for:
        mul.d   $f26, $f4, $f4 
        c.lt.d  $f26, $f6
        bc1f    endFor
        add.d   $f4, $f4, $f16
        j for
    endFor:

    mul.d   $f26, $f4, $f4 
    c.lt.d  $f26, $f6
    bc1f    if
    volta:

    div.d $f2, $f6, $f4
    #-------------------------

    #-------execucao----------
    loop:
        #---incrementando i---
        beq   $t4, $t7, overLoop
        addi  $t4, $t4, 1
        #---------------------

        #----erro = |a-b|-----
        sub.d  $f8, $f4, $f2
        li.d   $f12, 0.0
        c.lt.d $f8, $f12
        bc1t   troca
        back:
        #---------------------

        #---------------------
        add.d $f4, $f4, $f2
        li.d  $f12, 2.0
        div.d $f4, $f4, $f12

        div.d $f2, $f6, $f4
        #---------------------
       
        #---------------------
        c.le.d $f8, $f10
        bc1t   CORRETO
        #---------------------

        j loop
    endLoop:


    j fim
    #-------------------------

    #---------troca-----------
    troca:
        sub.d $f8, $f2, $f4      
        j     back
    #-------------------------

    #----------10-------------
    dividePor10:
        li.d $f14, 10.0
        li.d $f20, 1.0
        li.d $f16, 1.0
        li.d $f18, 0.0

        while:
            div.d  $f20, $f20, $f14

            sub.d  $f10, $f10, $f16
            c.le.d $f10, $f18
            bc1t   return
            j while
        return:
        jr $ra
    #-------------------------

    #----------erro-----------
    overLoop:
        la    $a0, erro1
        jal   printa_string
        li.d  $f12, 0.0
        add.d $f12, $f12, $f6
        jal   printa_double
        la    $a0, erro2
        jal   printa_string
        jal   barraN
        j     fim
    #-------------------------

    #---------CORRETO---------
    CORRETO:
        la      $a0, certo1
        jal     printa_string
        li.d    $f12, 0.0
        add.d   $f12, $f12, $f6
        jal     printa_double
        la      $a0, certo2
        jal     printa_string
        li.d    $f12, 0.0
        add.d   $f12, $f12, $f4
        jal     printa_double       
        la      $a0, certo3
        jal     printa_string
        li      $v0, 1
        add     $a0, $zero, $t4
        syscall
        la      $a0, certo4
        jal     printa_string
        jal     barraN
        j       fim
    #-------------------------

    #-------leitura-----------
    le_double:
        li  $v0, 7
        syscall
        jr      $ra

    valida_entrada:
        li.d    $f0, 1.0
        c.le.d  $f6, $f0 
        bc1t    erro
        c.lt.d  $f10, $f0
        bc1t    erro
        li.d    $f0, 16.0
        c.le.d  $f10, $f0
        bc1f    erro
        jr      $ra

    erro:
        la  $a0, entradasInvalidas
        jal printa_string
        jal barraN
        j   fim
    #-------------------------

    #---------printa----------
    printa_string:
        li $v0, 4
        syscall
        jr $ra
    
    printa_double:
        li $v0, 3
        syscall
        jr $ra
    #-------------------------

    #-----------\n------------
    barraN:
        la  $a0, newline
        li $v0, 4
        syscall
        jr  $ra
    #-------------------------

    #----------fim------------
    fim:
        li $v0, 10
        syscall
    #-------------------------

    #-------------------------
    if:
        li.d  $f12, 1.0
        sub.d $f4,  $f4, $f12
        j volta
    #-------------------------

.data
    newline: .asciiz "\n"
    entradasInvalidas: .asciiz "Entradas invalidas."
    erro1: .asciiz "Nao foi possivel calcular sqrt("
    erro2: .asciiz ")."
    certo1: .asciiz "A raiz quadrada de "
    certo2: .asciiz " eh "
    certo3: .asciiz ", calculada em "
    certo4: .asciiz " iteracoes."