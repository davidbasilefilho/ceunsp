---
id: basico-c
aliases: []
tags: []
---

# Básico de C

**Tópicos relacionados:**
- [Tipos de Dados em C](tipos-dados.md)
- [Ponteiros](ponteiros.md)
- [Structs](structs.md)
- [Stack e Heap](stack-heap.md)
- [Pilares do Pensamento Computacional](../pensamento-computacional/pilares-pensamento-computacional.md)
---
id: basico-c
aliases: []
tags:
  - c
  - programacao
---

# Linguagem C - Conceitos Básicos

A linguagem C é uma linguagem de programação de propósito geral, estruturada e de médio nível, desenvolvida na década de 1970 por Dennis Ritchie nos Laboratórios Bell. Ela é conhecida por sua eficiência, portabilidade e poder, sendo amplamente utilizada para desenvolvimento de sistemas operacionais, drivers de dispositivos e aplicações de alto desempenho.

## Características principais:
- **Eficiente**: C oferece controle direto sobre o hardware, permitindo operações de baixo nível
- **Portável**: Programas em C podem ser facilmente adaptados para diferentes plataformas
- **Flexível**: Pode ser usado para diversos tipos de aplicações, desde sistemas embarcados até software de aplicação
- **Estruturada**: Suporta programação estruturada através de funções
- **Tipada**: Requer definição de tipos de dados para variáveis
- **Compilada**: É necessário um compilador para transformar o código-fonte em código executável

## Estrutura básica de um programa C:
- **Diretivas de pré-processador**: Começam com `#`, como `#include`
- **Função main()**: Ponto de entrada para execução do programa
- **Bibliotecas**: Fornecem funções predefinidas (como stdio.h para entrada/saída)
- **Variáveis e tipos de dados**: int, float, char, etc.
- **Funções**: Blocos de código reutilizáveis

## Processo de compilação e linkagem

A transformação de um código-fonte C em um programa executável envolve vários estágios:

### 1. Pré-processamento
- O pré-processador lida com diretivas como `#include` e `#define`
- Substitui inclusões de arquivos, macros e processa diretivas condicionais
- Gera um código-fonte expandido (sem comentários e com substituições)

### 2. Compilação
- O compilador converte o código-fonte pré-processado em código de assembler
- Realiza análise léxica, sintática e semântica
- Otimiza o código para melhor desempenho
- Gera código objeto (.o ou .obj)
- Nesta fase, são detectados erros de sintaxe e muitos erros lógicos

### 3. Linkagem
- O linker (ligador) combina múltiplos arquivos objeto e bibliotecas
- Resolve referências entre diferentes módulos e bibliotecas
- Determina os endereços finais de variáveis e funções
- Une todos os módulos em um único arquivo executável
- Pode detectar erros como funções declaradas mas não definidas ou símbolos duplicados

### 4. Carregamento
- O sistema operacional carrega o executável na memória para execução
- Configura o ambiente de execução (stack, heap, etc.)
- Transfere o controle para o ponto de entrada (função main)

Em sistemas Unix/Linux, o comando `gcc` realiza todas estas etapas automaticamente.
Também é possível executar estágios individuais:
```bash
# Apenas pré-processamento
gcc -E programa.c -o programa.i

# Compilação para assembly
gcc -S programa.c -o programa.s

# Compilação para código objeto
gcc -c programa.c -o programa.o

# Linkagem
gcc programa.o -o programa
```

## Exemplo comentado:
Esta adição fornece uma explicação clara e detalhada do processo de compilação e linkagem na linguagem C, abordando cada estágio desde o pré-processamento até o carregamento do programa executável. Incluí também exemplos de comandos para visualizar os diferentes estágios do processo, o que é útil para fins educacionais e de depuração.

```c
// Diretivas de pré-processador (#include):
// São processadas antes da compilação pelo pré-processador
// Incluem arquivos de cabeçalho que contêm declarações de funções e tipos
#include <stdio.h>  // Standard Input/Output: funções como printf(), scanf() para entrada e saída
#include <stdlib.h> // Standard Library: funções como system(), malloc(), free()
#include <math.h>   // Funções matemáticas como sin(), cos(), sqrt()

/**
 * Função main - ponto de entrada principal do programa
 * 
 * @param argc - argument count: número de argumentos passados na linha de comando (sempre pelo menos 1)
 * @param argv - argument vector: array de strings com os argumentos (argv[0] é o nome do programa)
 * @return int - código de status da execução (0 indica sucesso)
 */
int main(int argc, char *argv[]) {
  // Declaração e inicialização de variável
  // float: tipo de dado para números de ponto flutuante com precisão simples (32 bits)
  float y = sin(1.5);  // Calcula o seno de 1.5 radianos usando a função da biblioteca math.h
  
  // Saída formatada usando printf (print formatted)
  // %f é um especificador de formato para números de ponto flutuante
  printf("y = %f", y);
  
  // \n é um caractere de escape que representa uma nova linha (newline)
  printf("\n");
  
  // system() executa comandos do sistema operacional
  // PAUSE é um comando específico do Windows que aguarda o usuário pressionar uma tecla
  // Em sistemas UNIX/Linux, pode-se usar "read -p 'Pressione ENTER para continuar...' var"
  system("PAUSE");
  
  // return 0 indica que o programa foi executado com sucesso
  // Valores diferentes de zero geralmente indicam algum tipo de erro
  return 0; 
}
```

[Veja: Stack and heap](./stack-heap.md)
