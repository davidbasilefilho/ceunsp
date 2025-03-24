---
id: introducao-assembly
aliases: []
tags: []
---

# Introdução ao Assembly

**Tópicos relacionados:**
- [Sintaxe Assembly](sintaxe-assembly.md)
- [Instruções](../cpu/instrucoes.md)
- [Conjuntos de Instruções](../cpu/sets-instrucoes.md)
- [Registradores](../cpu/registradores.md)
- [Modos de Endereçamento](../cpu/modos-enderecamento.md)
# Introdução a Assembly



## O que é Assembly?

Assembly é uma linguagem de programação de baixo nível que possui uma forte correspondência com o código de máquina da arquitetura do computador. Diferente das linguagens de alto nível (como Python, Java ou C), o Assembly trabalha diretamente com os registradores e instruções específicas do processador.


## Características principais

- [Correspondência direta](#correspondência-direta) com a arquitetura do hardware
- [Controle preciso](#controle-preciso) sobre recursos do processador
- [Sintaxe específica](#sintaxe-específica) para cada família de processadores (x86, ARM, RISC-V, etc.)
- [Código eficiente](#código-eficiente) em termos de desempenho e uso de memória
- [Pouca abstração](#pouca-abstração), exigindo conhecimento detalhado do hardware


## Por que aprender Assembly?

- Compreender como os computadores funcionam internamente
- Otimizar código crítico em termos de desempenho
- Programar sistemas embarcados com recursos limitados
- Desenvolver drivers e rotinas de baixo nível
- Realizar engenharia reversa e análise de software
- Explorar segurança computacional e vulnerabilidades


## Componentes básicos

### Registradores

São pequenas áreas de memória dentro do processador, acessadas muito rapidamente.
Exemplos no x86:
- Registradores de propósito geral (EAX, EBX, ECX, EDX)
- Registradores de índice (ESI, EDI)
- Registradores de ponteiro (ESP, EBP)
- Registradores de segmento (CS, DS, SS, ES, FS, GS)
- Registrador de flags (EFLAGS)


### Instruções

São comandos que manipulam dados entre registradores e memória ou realizam operações.
Exemplos comuns:
- MOV: movimenta dados
- ADD, SUB: adição e subtração
- JMP: salto incondicional
- CMP: comparação
- CALL, RET: chamada e retorno de procedimentos


### Diretivas

São comandos para o montador (assembler), não gerando código de máquina.
Exemplos:
- DB, DW, DD: definir variáveis
- SEGMENT, PROC: organizar o código
- INCLUDE: incluir outros arquivos


## Processo de desenvolvimento

1. Escrever código em linguagem Assembly (.asm)
2. Utilizar um montador (assembler) para converter em código de máquina (.obj)
3. Utilizar um ligador (linker) para criar o executável final


## Diferenças entre Assembly e linguagens de alto nível

 Aspecto | Assembly | Linguagem de Alto Nível |
|----------|-------------------------|
 Abstração | Mínima | Alta |
 Portabilidade | Específica para cada arquitetura | Geralmente portátil |
 Controle | Controle total do hardware | Controle limitado |
 Produtividade | Desenvolvimento mais lento | Desenvolvimento mais rápido |
 Manutenção | Complexa | Mais simples |
 Desempenho | Potencialmente mais eficiente | Depende do compilador |


## Sintaxes de Assembly

Existem principalmente duas sintaxes para Assembly x86:
- [Intel](#intel): mais usada em ambientes Windows e em documentação da Intel
- [AT&T](#att): predominante em sistemas Unix/Linux

Exemplo de diferença:
Intel: `mov eax, 1`
AT&T: `movl $1, %eax`
