---
id: ponteiros
aliases: []
tags:
  - c
  - memoria
  - programacao
---


# Ponteiros em C

Um ponteiro é uma variável que armazena o **endereço de memória** de outra variável. Ponteiros são um dos recursos mais poderosos e também mais desafiadores da linguagem C.

## Conceitos básicos

### O que é um ponteiro?

Imagine a memória do computador como um grande armário com várias gavetas numeradas. Cada gaveta tem um número único (endereço) e pode armazenar um valor.

- **Variável normal**: Armazena diretamente um valor
- **Ponteiro**: Armazena o número da gaveta (endereço) onde outro valor está guardado

### Declaração de ponteiros

Para declarar um ponteiro, usamos o operador asterisco (`*`):

```c
tipo *nome_ponteiro;
```

Exemplo:
```c
int *ptr;  // Declara um ponteiro para inteiro
```

### Operadores principais

- **`&` (endereço de)**: Obtém o endereço de uma variável
- **`*` (desreferência)**: Acessa o valor no endereço armazenado pelo ponteiro

## Exemplos práticos

### Exemplo básico

```c
#include <stdio.h>

int main() {
    int numero = 10;      // Variável normal
    int *ptr;             // Declaração do ponteiro
    
    ptr = &numero;        // ptr recebe o endereço de numero
    
    printf("Valor de numero: %d\n", numero);
    printf("Endereço de numero: %p\n", &numero);
    printf("Valor armazenado em ptr: %p\n", ptr);
    printf("Valor apontado por ptr: %d\n", *ptr);
    
    *ptr = 20;            // Altera o valor de numero através do ponteiro
    printf("Novo valor de numero: %d\n", numero);
    
    return 0;
}
```

### Por que usar ponteiros?

1. **Passar variáveis por referência**: Permitindo que funções modifiquem valores originais
2. **Alocação dinâmica de memória**: Criação de estruturas de tamanho variável durante a execução
3. **Manipulação eficiente de arrays e strings**
4. **Criação de estruturas de dados complexas** (listas ligadas, árvores, etc.)

## Ponteiros e arrays

Em C, arrays e ponteiros têm uma relação próxima:

```c
int numeros[5] = {1, 2, 3, 4, 5};
int *p = numeros;  // p aponta para o primeiro elemento

// Acessando elementos:
printf("%d\n", numeros[0]);  // Usando notação de array
printf("%d\n", *p);          // Usando ponteiro
printf("%d\n", p[0]);        // Ponteiros também aceitam notação de array
printf("%d\n", *(p+1));      // Aritmética de ponteiros (acessa o segundo elemento)
```

## Ponteiros para funções

Ponteiros também podem armazenar endereços de funções, permitindo chamá-las indiretamente:

```c
int soma(int a, int b) {
    return a + b;
}

int main() {
    int (*operacao)(int, int);  // Declaração de ponteiro para função
    operacao = soma;            // Atribuição do endereço da função
    
    printf("Resultado: %d\n", operacao(5, 3));  // Chama soma(5, 3)
    return 0;
}
```

## Cuidados importantes

- **Inicialização**: Sempre inicialize ponteiros antes de usá-los
- **Ponteiros nulos**: Use `NULL` para ponteiros que não apontam para nada
- **Vazamentos de memória**: Libere memória alocada dinamicamente (`free()`)
- **Ponteiros soltos**: Cuidado com ponteiros que apontam para áreas de memória já liberadas

## Alocação dinâmica

```c
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));  // Aloca espaço para um inteiro
    
    if (ptr == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }
    
    *ptr = 42;  // Usa o espaço alocado
    
    printf("Valor: %d\n", *ptr);
    
    free(ptr);  // Libera a memória quando não precisa mais
    ptr = NULL; // Boa prática: evita uso indevido
    
    return 0;
}
```

---

Lembre-se: ponteiros são ferramentas poderosas, mas exigem atenção e cuidado para evitar erros comuns como segmentation faults e vazamentos de memória.

[Veja: Stack and Heap](./stack-heap.md)
