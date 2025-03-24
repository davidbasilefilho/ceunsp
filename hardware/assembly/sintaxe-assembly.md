---
id: sintaxe-assembly
aliases: []
tags: []
---

# Sintaxe Assembly

**Tópicos relacionados:**
- [Introdução ao Assembly](introducao-assembly.md)
- [Instruções](../cpu/instrucoes.md)
- [Modos de Endereçamento](../cpu/modos-enderecamento.md)
- [Registradores](../cpu/registradores.md)
# Sintáxe Assembly e exemplos



## Introdução à Linguagem Assembly

A linguagem Assembly é uma linguagem de programação de baixo nível que possui uma correspondência direta com o código de máquina. Cada arquitetura de processador tem seu próprio conjunto de instruções Assembly.


## Estrutura Básica de Programas Assembly

Um programa em Assembly geralmente consiste em:
- Seções de código (contendo instruções)
- Seções de dados (contendo definições de variáveis)
- Diretivas (instruções para o montador)
- Comentários (geralmente com ; ou #, dependendo do assembler)


## Componentes Principais da Linguagem Assembly



### Instruções

As instruções em Assembly são operações simples como:
- Movimentação de dados (mov, load, store)
- Operações aritméticas (add, sub, mul, div)
- Operações lógicas (and, or, xor)
- Controle de fluxo (jmp, call, ret)
- Comparação (cmp, test)
  

### Operandos

Os operandos podem ser:
- Registradores (ex: EAX, R1, X0)
- Endereços de memória (diretos ou indiretos)
- Valores imediatos (constantes)


### Modos de Endereçamento

- Imediato: O operando é um valor constante
- Registrador: O operando é um registrador
- Direto: O operando é um endereço de memória
- Indireto: O operando é um registrador que contém um endereço
- Indexado: Combinação de endereçamento base + offset


## Exemplos de Código Assembly



### Exemplo em x86 (Intel)

```assembly
section .data
    mensagem db "Olá, mundo!", 0x0A    ; String com quebra de linha
    tamanho equ $ - mensagem          ; Tamanho da string

section .text
    global _start

_start:
    ; Chamada de sistema para escrever (write)
    mov eax, 4                  ; syscall write
    mov ebx, 1                  ; stdout
    mov ecx, mensagem           ; endereço da mensagem
    mov edx, tamanho            ; tamanho da mensagem
    int 0x80                    ; interrupção para chamar o kernel

    ; Chamada de sistema para sair (exit)
    mov eax, 1                  ; syscall exit
    xor ebx, ebx                ; código de saída 0
    int 0x80                    ; interrupção para chamar o kernel
```


### Exemplo em ARM

```assembly
.data
    mensagem:    .asciz "Olá, mundo!\n"

.text
    .global _start

_start:
    /* Escrever a mensagem */
    mov r7, #4          @ syscall write
    mov r0, #1          @ stdout
    ldr r1, =mensagem   @ endereço da mensagem
    mov r2, #13         @ tamanho da mensagem
    svc 0               @ chamada de sistema

    /* Sair */
    mov r7, #1          @ syscall exit
    mov r0, #0          @ código de saída 0
    svc 0               @ chamada de sistema
```


### Exemplo em MIPS

```assembly
.data
    mensagem: .asciiz "Olá, mundo!\n"

.text
.globl main

main:
    # Escrever a mensagem
    li $v0, 4           # syscall para imprimir string
    la $a0, mensagem    # carregar endereço da mensagem
    syscall

    # Sair
    li $v0, 10          # syscall para sair
    syscall
```


## Diferenças de Sintaxe entre Arquiteturas



### Sintaxe Intel vs AT&T (x86)

```assembly
# Sintaxe Intel
mov eax, 42         ; Destino, Origem

# Sintaxe AT&T
movl $42, %eax      # Origem, Destino (com prefixos $ para imediatos e % para registradores)
```


## Operações Aritméticas Comuns



### Exemplo de Cálculos Simples (x86)

```assembly
section .text
    global _start

_start:
    ; Soma: 5 + 10 = 15
    mov eax, 5          ; EAX = 5
    add eax, 10         ; EAX = EAX + 10

    ; Subtração: 15 - 7 = 8
    sub eax, 7          ; EAX = EAX - 7

    ; Multiplicação: 8 * 3 = 24
    mov ebx, 3
    mul ebx             ; EAX = EAX * EBX

    ; Divisão: 24 / 4 = 6 (quociente em EAX, resto em EDX)
    xor edx, edx        ; Zera EDX para divisão
    mov ebx, 4
    div ebx             ; EAX = EDX:EAX / EBX, EDX = EDX:EAX % EBX
```


## Estruturas de Controle



### Condicionais

```assembly
; Exemplo de if (se x > y) em x86
mov eax, [x]        ; Carrega x
mov ebx, [y]        ; Carrega y
cmp eax, ebx        ; Compara x e y
jle else_branch     ; Salta se x <= y

; Código para x > y
jmp end_if

else_branch:
; Código para x <= y

end_if:
; Continuação do código
```


### Loops

```assembly
; Exemplo de loop em x86
mov ecx, 10         ; Contador = 10

loop_start:
; Corpo do loop

dec ecx             ; Decrementa contador
jnz loop_start      ; Volta ao início se não zero
```


## Procedimentos e Funções



### Chamadas de Função

```assembly
; Definição de função (x86)
minha_funcao:
    push ebp            ; Salva o base pointer
    mov ebp, esp        ; Estabelece novo frame
    
    ; Corpo da função
    
    mov esp, ebp        ; Restaura stack
    pop ebp             ; Restaura base pointer
    ret                 ; Retorna

; Chamada de função
call minha_funcao       ; Chama a função
```


## Dicas para Programação em Assembly

- Use comentários extensivamente
- Mantenha estrutura consistente
- Entenda o conjunto de instruções específico da arquitetura
- Faça uso eficiente de registradores
- Compreenda as convenções de chamada de função


## Ferramentas para Desenvolvimento

- [NASM :](#nasm-) Montador para x86/x64
- [GAS :](#gas-) GNU Assembler, usado com sintaxe AT&T
- [MASM :](#masm-) Microsoft Macro Assembler
- [ARM Assembler :](#arm-assembler-) Para arquiteturas ARM
- [SPIM/MARS :](#spimmars-) Simuladores para MIPS
