---
id: stack-heap
aliases: []
tags: []
---

# Stack e Heap em C

**Tópicos relacionados:**
- [Básico de C](basico-c.md)
- [Ponteiros](ponteiros.md)
- [Memória](../../hardware/cpu/memoria.md)
---
id: stack-heap
aliases: []
tags:
  - conceito
  - memoria
  - c
  - programacao
---

# Memórias Stack e Heap

## Conceitos Básicos

### Stack (Pilha)

A memória stack é uma região de memória que funciona como uma pilha de pratos: o último item colocado é o primeiro a ser retirado (estrutura LIFO - Last In, First Out). A stack é uma área de memória:

- **Organizada**: Cada função recebe seu próprio "quadro" na stack
- **Temporária**: Dados existem apenas enquanto a função estiver em execução
- **Tamanho fixo**: Definido em tempo de compilação
- **Gerenciamento automático**: O sistema aloca e libera memória automaticamente
- **Acesso rápido**: Operações na stack são muito eficientes

Quando uma função é chamada, um novo "quadro" (_stack frame_) é criado no topo da pilha. Este quadro contém:
- Variáveis locais da função
- Parâmetros passados para a função
- Endereço de retorno (para onde voltar quando a função terminar)

Quando a função termina, seu quadro é removido da pilha, liberando aquela memória.

### Heap

A memória heap é uma região de memória mais dinâmica e flexível:

- **Não estruturada**: Não segue uma ordem específica como a stack
- **Persistente**: Os dados permanecem até serem explicitamente liberados
- **Tamanho dinâmico**: Pode crescer conforme necessário durante a execução
- **Gerenciamento manual**: O programador é responsável por alocar e liberar memória
- **Acesso mais lento**: Operações no heap são geralmente menos eficientes que na stack

O heap é usado para dados que precisam:
- Existir além do escopo da função que os criou
- Ter tamanho determinado durante a execução do programa
- Ser grandes demais para caber na stack

## Stack vs Heap na Linguagem C

### Stack em C

Em C, a stack armazena automaticamente:

```c
void funcao() {
    int x = 10;          // Variável na stack
    char nome[50];       // Array de tamanho fixo na stack
    double valores[100]; // Array grande, mas ainda na stack
}
// Quando a função termina, 'x', 'nome' e 'valores' são automaticamente removidos
```

**Características importantes:**
- Variáveis locais são criadas na stack por padrão
- Arrays de tamanho fixo ficam na stack
- Tem limite de tamanho (geralmente alguns MB)
- Se você usar muita memória na stack (por exemplo, com recursão profunda ou arrays muito grandes), pode ocorrer um "stack overflow"

### Heap em C

Para usar o heap em C, precisamos alocar memória explicitamente:

```c
#include <stdlib.h>

void funcao() {
    int *p = malloc(sizeof(int));     // Aloca um inteiro no heap
    *p = 10;                          // Armazena o valor
    
    int *array = malloc(100 * sizeof(int)); // Array dinâmico no heap
    
    // Usar a memória...
    
    free(p);       // Libera a memória alocada
    free(array);   // Libera o array alocado
}
// 'p' e 'array' (os ponteiros) são removidos automaticamente da stack
// MAS a memória para onde eles apontam no heap permanece alocada se não usarmos free()
```

**Funções para gerenciar o heap em C:**
- `malloc()`: Aloca memória de tamanho especificado
- `calloc()`: Aloca memória e inicializa com zeros
- `realloc()`: Redimensiona um bloco de memória previamente alocado
- `free()`: Libera memória previamente alocada

### Quando usar cada uma?

**Use a stack quando:**
- Precisar de variáveis que existam apenas dentro de uma função
- Trabalhar com dados de tamanho pequeno e fixo
- Precisar de alocação/desalocação rápida

**Use o heap quando:**
- Precisar que dados persistam além do escopo da função
- Não souber o tamanho dos dados em tempo de compilação
- Trabalhar com estruturas de dados muito grandes
- Implementar estruturas de dados dinâmicas (listas encadeadas, árvores, etc.)

## Problemas Comuns

### Problemas da Stack
- **Stack overflow**: Ocorre quando a stack fica sem espaço (geralmente devido a recursão infinita ou alocação excessiva)
- **Variáveis locais que "desaparecem"**: Variáveis locais não podem ser retornadas por referência

### Problemas do Heap
- **Memory leak (vazamento de memória)**: Quando você aloca memória e esquece de liberá-la com `free()`
- **Fragmentação**: Após muitas alocações e desalocações, o heap pode ficar fragmentado
- **Uso após liberação (use-after-free)**: Acessar memória após ter chamado `free()`
- **Liberação dupla (double free)**: Chamar `free()` duas vezes no mesmo ponteiro

## Exemplo Prático

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função que usa a stack
void funcao_stack() {
    char nome[50] = "João";    // Na stack
    int idade = 30;           // Na stack
    printf("Nome: %s, Idade: %d\n", nome, idade);
}

// Função que usa o heap
char* funcao_heap() {
    // Ponteiro na stack, mas aponta para memória no heap
    char *nome = malloc(50 * sizeof(char));
    
    if (nome == NULL) {
        return NULL; // Falha na alocação
    }
    
    strcpy(nome, "Maria");
    return nome; // Retorna o endereço da memória alocada no heap
}

int main() {
    // Exemplo com stack
    funcao_stack();
    // Aqui as variáveis 'nome' e 'idade' de funcao_stack já foram destruídas
    
    // Exemplo com heap
    char *resultado = funcao_heap();
    if (resultado != NULL) {
        printf("Nome do heap: %s\n", resultado);
        free(resultado); // Importante: liberar a memória
    }
    
    return 0;
}
```

## Conclusão

A compreensão das memórias stack e heap é fundamental para programar em C eficientemente. A stack oferece gerenciamento automático de memória para dados de vida curta e tamanho fixo, enquanto o heap permite alocação dinâmica para dados de tamanho variável e vida longa.

Dominar o uso dessas regiões de memória ajuda a evitar problemas como vazamentos de memória, corrupção de memória e falhas relacionadas à alocação, resultando em programas mais estáveis e eficientes.

[Veja: Ponteiros](./ponteiros.md)
