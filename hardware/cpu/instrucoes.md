---
id: instrucoes
aliases: []
tags: []
---

# Instruções

**Tópicos relacionados:**
- [Conjuntos de Instruções](sets-instrucoes.md) 
- [Operações da ULA](operacoes-ula.md)
- [Modos de Endereçamento](modos-enderecamento.md)
- [Assembly](../assembly/sintaxe-assembly.md)
# Instruções da CPU


As instruções da CPU são comandos fundamentais que o processador é capaz de executar. Estas instruções representam
a linguagem básica que o hardware entende e são a base para todo o funcionamento de um computador.


## Estrutura das Instruções

Uma instrução típica da CPU contém:
- [Código de operação (Opcode)](#código-de-operação-opcode): Identifica qual operação deve ser realizada
- [Operandos](#operandos): Dados ou endereços de memória que serão manipulados
- [Modo de endereçamento](#modo-de-endereçamento): Como a CPU irá localizar os operandos


## Tipos de Instruções

As instruções da CPU podem ser classificadas em várias categorias:


### Instruções Aritméticas

Realizam operações matemáticas fundamentais.
- [- Adição (ADD)](- Adição (ADD))
- [- Subtração (SUB)](- Subtração (SUB))
- [- Multiplicação (MUL)](- Multiplicação (MUL))
- [- Divisão (DIV)](- Divisão (DIV))
- [- Incremento (INC)](- Incremento (INC))
- [- Decremento (DEC)](- Decremento (DEC))


### Instruções Lógicas

Executam operações bit a bit nos operandos.
- [- AND](- AND): Operação lógica E
- [- OR](- OR): Operação lógica OU
- [- XOR](- XOR): Operação lógica OU exclusivo
- [- NOT](- NOT): Complemento/Negação


### Instruções de Transferência de Dados

Movem dados entre registradores, memória e dispositivos.
- [- LOAD/MOVE](- LOAD/MOVE): Carrega dados da memória para registradores
- [- STORE](- STORE): Salva dados de registradores na memória
- [- PUSH](- PUSH): Coloca dados na pilha
- [- POP](- POP): Retira dados da pilha


### Instruções de Controle de Fluxo

Alteram a sequência de execução do programa.
- [- JUMP/BRANCH](- JUMP/BRANCH): Altera o fluxo de execução para outro ponto
- [- CALL](- CALL): Chama uma sub-rotina
- [- RETURN](- RETURN): Retorna de uma sub-rotina
- [- Instruções condicionais](- Instruções condicionais): Executam saltos baseados em condições (JZ - Jump if Zero, JNZ - Jump if Not Zero)


### Instruções de Comparação

Comparam valores e ajustam flags de condição.
- [- CMP](- CMP): Compara operandos
- [- TEST](- TEST): Testa bits específicos


## Ciclo de Instrução

Toda instrução passa por um ciclo de processamento que geralmente inclui:


### 1. Busca (Fetch)

A CPU busca a instrução na memória principal utilizando o contador de programa (PC).


### 2. Decodificação (Decode)

A instrução é interpretada pela unidade de controle para determinar qual operação executar.


### 3. Busca de Operandos

A CPU busca os dados necessários (operandos) para executar a instrução.


### 4. Execução (Execute)

A operação é realizada pela ULA (Unidade Lógica Aritmética) ou outras unidades funcionais.


### 5. Armazenamento (Store)

O resultado é armazenado no local especificado (registrador ou memória).


## Modos de Endereçamento

Determinam como a CPU localiza e acessa os dados:

- [Imediato](#imediato): O valor a ser usado está na própria instrução
- [Direto](#direto): A instrução contém o endereço de memória onde está o dado
- [Indireto](#indireto): A instrução contém um endereço onde está armazenado outro endereço
- [Indexado](#indexado): Usa um registrador de índice para calcular o endereço efetivo
- [Baseado em Registrador](#baseado-em-registrador): O operando está em um registrador


## Relação com Arquiteturas



### Instruções em Arquiteturas CISC

- Conjunto amplo e complexo de instruções
- Instruções que podem realizar múltiplas operações em um único ciclo
- Diversos modos de endereçamento
- Instruções de tamanho variável
- Exemplo: Na arquitetura x86, a instrução `REPNE SCASB` procura um byte específico em uma string


### Instruções em Arquiteturas RISC

- Conjunto reduzido de instruções simples e atômicas
- Cada instrução geralmente executa apenas uma operação básica
- Poucos modos de endereçamento
- Instruções de tamanho fixo
- Arquitetura load/store (apenas instruções de carga e armazenamento acessam a memória)
- Exemplo: Na arquitetura ARM, operações são divididas em instruções simples e separadas


## Latência e Throughput

- [Latência](#latência): Tempo necessário para completar uma instrução
- [Throughput](#throughput): Número de instruções que podem ser completadas por unidade de tempo
- O design moderno de CPUs usa técnicas como pipelining, execução especulativa e processamento paralelo para melhorar ambos


## Evolução das Instruções

Com a evolução dos processadores, conjuntos de instruções especializados foram desenvolvidos:

- [Instruções SIMD](#instruções-simd): Single Instruction, Multiple Data - executam a mesma operação em múltiplos dados simultaneamente 
  (exemplos: SSE, AVX na Intel, NEON na ARM)
- [Instruções para Criptografia](#instruções-para-criptografia): Aceleradores de hardware para operações criptográficas comuns
- [Instruções para Virtualização](#instruções-para-virtualização): Facilitam a implementação de máquinas virtuais
