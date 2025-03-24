---
id: registradores
aliases: []
tags: []
---

# Registradores

**Tópicos relacionados:**
- [Visão Geral da CPU](visao-geral.md)
- [ULA](ula.md)
- [Memória](memoria.md)
- [Modos de Endereçamento](modos-enderecamento.md)
- [Arquitetura de Computadores](../arquiteturas/arquitetura-computadores.md)
# Registradores da CPU

Os registradores são pequenas unidades de memória de alta velocidade incorporadas diretamente na CPU. Eles são essenciais para o funcionamento do processador, armazenando temporariamente dados, instruções e endereços durante a execução de programas.


## Tipos de Registradores

- **Registradores de Propósito Geral**: Armazenam dados temporários durante as operações. São usados para cálculos e movimentação de dados.

- **Registrador de Instruções (IR)**: Armazena a instrução atual que está sendo executada pela CPU.

- **Contador de Programa (PC)**: Também conhecido como ponteiro de instrução, contém o endereço da próxima instrução a ser executada.

- **Registrador de Endereço de Memória (MAR)**: Mantém o endereço da próxima posição de memória a ser acessada.

- **Registrador de Dados de Memória (MDR)**: Armazena os dados que estão sendo transferidos entre a CPU e a memória.

- **Registrador de Status (SR)**: Contém flags que indicam o estado atual da CPU após operações (zero, negativo, overflow, carry, etc.).

- **Registrador Index**: Utilizados para indexação em operações com arrays e estruturas de dados.

- **Registrador de Pilha**: Mantém o endereço do topo da pilha na memória, crucial para chamadas de funções e procedimentos.

- **Registradores de Segmento**: Em algumas arquiteturas, dividem a memória em segmentos (código, dados, pilha).


## Características Importantes

- **Velocidade**: Os registradores são o nível mais rápido da hierarquia de memória.
  
- **Capacidade Limitada**: Possuem tamanho muito reduzido, geralmente entre 8 e 64 bits por registrador.
  
- **Acesso Direto**: O processador acessa registradores diretamente, sem necessidade de busca na memória principal.
  
- **Visibilidade ao Programador**: Alguns registradores são visíveis e manipuláveis através de linguagem assembly.


## Registradores em Diferentes Arquiteturas

- **x86 (32 bits)**: EAX, EBX, ECX, EDX, ESI, EDI, EBP, ESP.
  
- **x86-64 (64 bits)**: RAX, RBX, RCX, RDX, RSI, RDI, RBP, RSP e registradores adicionais R8-R15.
  
- **ARM**: R0 a R15, com funções especiais para alguns (R13 como Stack Pointer, R14 como Link Register, R15 como Program Counter).
  
- **RISC-V**: x0 a x31, com convenções específicas para cada um (x0 sempre zero, x1 para endereço de retorno, etc.).


## Papel no Desempenho

O uso eficiente dos registradores é crucial para o desempenho computacional, pois:
- Reduzem a necessidade de acessos à memória principal (mais lenta)
- Permitem a execução mais rápida de operações frequentes
- São essenciais para técnicas de otimização como pipeline e execução fora de ordem
- O número limitado de registradores impacta diretamente no design de compiladores e algoritmos
  

## Evolução Histórica

- **Primeiros computadores**: Poucos registradores, com funções muito específicas
- **Anos 70-80**: Aumento do número de registradores, especialmente em arquiteturas CISC
- **Arquiteturas RISC**: Grande quantidade de registradores para minimizar acessos à memória
- **Processadores modernos**: Combinação de registradores arquiteturais (visíveis ao programador) e registradores físicos adicionais para técnicas como renomeação de registradores
