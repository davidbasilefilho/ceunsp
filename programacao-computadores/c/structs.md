---
id: structs
aliases: []
tags: []
---

# Structs em C

**Tópicos relacionados:**
- [Básico de C](basico-c.md)
- [Tipos de Dados em C](tipos-dados.md)
- [Ponteiros](ponteiros.md)
---
id: structs
aliases: []
tags:
  - c
  - programacao
  - data
---


# Structs em C

## O que são Structs?

Em C, uma struct (abreviação de "structure" ou estrutura) é um tipo de dado que permite agrupar diferentes variáveis sob um único nome. É como uma "caixa" que pode conter múltiplos itens de diferentes tipos.

Pense nas structs como uma forma de criar seus próprios tipos de dados personalizados, combinando os tipos básicos da linguagem (int, float, char, etc.).

## Por que usar Structs?

Imagine que você precise armazenar informações sobre um aluno: nome, idade, notas em diferentes disciplinas. Sem structs, você precisaria criar variáveis separadas:

```c
char nome_aluno1[50];
int idade_aluno1;
float nota_matematica_aluno1;
float nota_portugues_aluno1;
```

Para cada novo aluno, você precisaria criar outro conjunto de variáveis. Isso fica rapidamente desorganizado e difícil de gerenciar.

Com structs, podemos agrupar todos esses dados relacionados:

## Como declarar uma Struct

```c
struct Aluno {
    char nome[50];
    int idade;
    float nota_matematica;
    float nota_portugues;
};
```

## Como usar Structs

### Declarando variáveis do tipo struct:

```c
struct Aluno aluno1;
```

### Atribuindo valores aos campos:

```c
// Atribuição direta
strcpy(aluno1.nome, "João Silva");  // Para strings, usamos strcpy
aluno1.idade = 15;
aluno1.nota_matematica = 8.5;
aluno1.nota_portugues = 7.0;

// Também podemos inicializar durante a declaração
struct Aluno aluno2 = {"Maria Santos", 16, 9.0, 8.5};
```

### Acessando os campos:

Para acessar um campo específico, usamos o operador ponto (`.`):

```c
printf("Nome: %s\n", aluno1.nome);
printf("Idade: %d\n", aluno1.idade);
```

## Structs e funções

Podemos usar structs como parâmetros ou retorno de funções:

```c
// Função que recebe uma struct
void mostrar_aluno(struct Aluno a) {
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Nota de Matemática: %.1f\n", a.nota_matematica);
    printf("Nota de Português: %.1f\n", a.nota_portugues);
}

// Função que retorna uma struct
struct Aluno criar_aluno(char nome[], int idade, float nota_mat, float nota_port) {
    struct Aluno novo_aluno;
    strcpy(novo_aluno.nome, nome);
    novo_aluno.idade = idade;
    novo_aluno.nota_matematica = nota_mat;
    novo_aluno.nota_portugues = nota_port;
    return novo_aluno;
}
```

## Typedef com structs

Para simplificar o código, frequentemente usamos `typedef` para criar um apelido para o tipo struct:

```c
typedef struct {
    char nome[50];
    int idade;
    float nota_matematica;
    float nota_portugues;
} Aluno;

// Agora podemos usar apenas "Aluno" ao invés de "struct Aluno"
Aluno aluno3 = {"Pedro Oliveira", 17, 7.5, 8.0};
```

## Structs aninhadas

É possível incluir uma struct dentro de outra:

```c
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[50];
    int idade;
    Data data_nascimento;  // Struct dentro de outra struct
} Pessoa;

Pessoa pessoa1;
pessoa1.data_nascimento.dia = 10;
pessoa1.data_nascimento.mes = 5;
pessoa1.data_nascimento.ano = 2000;
```

## Arrays de structs

Podemos criar arrays de structs para armazenar múltiplos itens do mesmo tipo:

```c
Aluno turma[30];  // Array para armazenar 30 alunos

// Atribuindo valores ao primeiro aluno
strcpy(turma[0].nome, "Carlos Ferreira");
turma[0].idade = 16;
turma[0].nota_matematica = 9.0;
turma[0].nota_portugues = 8.0;
```

## Ponteiros para structs

Quando trabalhamos com ponteiros para structs, usamos o operador seta (`->`) ao invés do ponto:

```c
Aluno *ptr_aluno = &aluno1;

// Acessando campos através do ponteiro
printf("Nome: %s\n", ptr_aluno->nome);  // Equivalente a (*ptr_aluno).nome
```

## Exemplo completo

```c
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float notas[3];
    float media;
} Aluno;

// Função para calcular a média
void calcular_media(Aluno *aluno) {
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += aluno->notas[i];
    }
    aluno->media = soma / 3;
}

int main() {
    // Criando um aluno
    Aluno aluno1;
    
    // Atribuindo valores
    strcpy(aluno1.nome, "Ana Souza");
    aluno1.idade = 18;
    aluno1.notas[0] = 8.5;  // Nota de Matemática
    aluno1.notas[1] = 7.0;  // Nota de Português
    aluno1.notas[2] = 9.0;  // Nota de Ciências
    
    // Calculando a média
    calcular_media(&aluno1);
    
    // Exibindo informações
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Média: %.2f\n", aluno1.media);
    
    return 0;
}
```

## Conclusão

Structs são fundamentais na linguagem C para criar estruturas de dados mais complexas e organizadas. Elas permitem agrupar dados relacionados, facilitando o desenvolvimento de programas mais claros e organizados.

Elas são a base para entender conceitos mais avançados em C e outras linguagens de programação, como classes em linguagens orientadas a objetos.
