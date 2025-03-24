---
id: tipos-dados
aliases: []
tags: []
---

# Tipos de Dados em C

**Tópicos relacionados:**
- [Básico de C](basico-c.md)
- [Ponteiros](ponteiros.md)
- [Structs](structs.md)
- [Stack e Heap](stack-heap.md)
---
id: tipos-dados
aliases: []
tags:
  - c
  - programacao
  - data
---

# Tipos de Dados em C

A linguagem C oferece vários tipos de dados que permitem representar diferentes tipos de informações. É importante conhecer os tipos disponíveis, seus tamanhos e usos apropriados para desenvolver programas eficientes.

## Tipos Básicos

### Tipos Inteiros

| Tipo | Descrição | Tamanho Típico | Faixa de Valores |
|------|-----------|----------------|------------------|
| `char` | Caractere ou inteiro pequeno | 1 byte | -128 a 127 ou 0 a 255 |
| `unsigned char` | Caractere ou inteiro pequeno sem sinal | 1 byte | 0 a 255 |
| `short int` | Inteiro curto | 2 bytes | -32.768 a 32.767 |
| `unsigned short int` | Inteiro curto sem sinal | 2 bytes | 0 a 65.535 |
| `int` | Inteiro | 4 bytes | -2.147.483.648 a 2.147.483.647 |
| `unsigned int` | Inteiro sem sinal | 4 bytes | 0 a 4.294.967.295 |
| `long int` | Inteiro longo | 4 ou 8 bytes | -2.147.483.648 a 2.147.483.647 (4 bytes) |
| `unsigned long int` | Inteiro longo sem sinal | 4 ou 8 bytes | 0 a 4.294.967.295 (4 bytes) |
| `long long int` | Inteiro muito longo | 8 bytes | -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807 |
| `unsigned long long int` | Inteiro muito longo sem sinal | 8 bytes | 0 a 18.446.744.073.709.551.615 |

### Tipos de Ponto Flutuante

| Tipo | Descrição | Tamanho Típico | Precisão |
|------|-----------|----------------|----------|
| `float` | Ponto flutuante de precisão simples | 4 bytes | 6-7 dígitos significativos |
| `double` | Ponto flutuante de precisão dupla | 8 bytes | 15-16 dígitos significativos |
| `long double` | Ponto flutuante de precisão estendida | 10, 12 ou 16 bytes | 19+ dígitos significativos |

### Tipo Void

O tipo `void` representa a ausência de tipo. É usado principalmente em três contextos:
- Funções que não retornam valor: `void função()`
- Funções sem parâmetros: `int função(void)`
- Ponteiros genéricos: `void *ptr`

## Modificadores de Tipo

Os modificadores podem ser usados com tipos básicos:
- `signed`: Permite valores positivos e negativos (padrão para tipos inteiros)
- `unsigned`: Permite apenas valores positivos
- `short`: Reduz o tamanho de um tipo
- `long`: Aumenta o tamanho de um tipo

## Verificando o Tamanho de Tipos

O operador `sizeof` retorna o tamanho em bytes de um tipo ou variável:

```c
#include <stdio.h>

int main() {
    printf("Tamanho de int: %zu bytes\n", sizeof(int));
    printf("Tamanho de char: %zu bytes\n", sizeof(char));
    printf("Tamanho de float: %zu bytes\n", sizeof(float));
    printf("Tamanho de double: %zu bytes\n", sizeof(double));
    
    return 0;
}
```

## Estruturas (struct)

As estruturas permitem agrupar variáveis de diferentes tipos sob um único nome:

```c
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};
```

[Veja também: structs](./structs.md)

### Cálculo do Tamanho de Estruturas

O tamanho de uma estrutura **não é** simplesmente a soma dos tamanhos de seus membros. Isso acontece devido ao **alinhamento de memória**, um mecanismo que o compilador utiliza para otimizar o acesso aos dados.

#### Por que o Alinhamento é Necessário?

Os processadores modernos acessam a memória de forma mais eficiente quando os dados estão em **endereços alinhados**. Por exemplo:
- Um `int` (4 bytes) é acessado mais rapidamente quando está em um endereço divisível por 4
- Um `short` (2 bytes) é acessado mais rapidamente quando está em um endereço divisível por 2

#### Exemplo Visual de Padding

Considere estas duas estruturas:

```c
#include <stdio.h>

struct Exemplo1 {
    char a;     // 1 byte
    int b;      // 4 bytes
    char c;     // 1 byte
};              // Quanto terá?

struct Exemplo2 {
    char a;     // 1 byte
    char c;     // 1 byte
    int b;      // 4 bytes
};              // E essa?

int main() {
    printf("Tamanho de Exemplo1: %zu bytes\n", sizeof(struct Exemplo1));
    printf("Tamanho de Exemplo2: %zu bytes\n", sizeof(struct Exemplo2));
    
    return 0;
}
```

Executando este programa, você verá que:
- `struct Exemplo1` terá 12 bytes (não 6!)
- `struct Exemplo2` terá 8 bytes (também não 6!)

#### Como o Padding Funciona (Representação Visual)

Para `struct Exemplo1`:

| Byte 0  | Bytes 1-3   | Bytes 4-7   | Bytes 8-11  |
|---------|-------------|-------------|-------------|
| char a  | (padding)   | int b       | char c + pad|
| 1 byte  | 3 bytes     | 4 bytes     | 1+3 bytes   |

Para `struct Exemplo2`:
| Bytes 0-3      | Bytes 4-7      |
|----------------|----------------|
| char a + char c| int b          |
| + padding      |                |
| 1+1+2 bytes    | 4 bytes        |

### Regras de Alinhamento

O compilador C adiciona bytes de preenchimento (padding) entre os membros da estrutura e ao final dela seguindo estas regras:

1. Cada membro deve iniciar em um endereço divisível por seu próprio requisito de alinhamento
2. O requisito de alinhamento de um tipo geralmente é igual ao seu tamanho (exceto em algumas arquiteturas)
3. A estrutura completa também deve ter um alinhamento final que é o maior alinhamento entre seus membros

Por exemplo:
- `char`: alinhamento de 1 byte (pode começar em qualquer endereço)
- `short`: alinhamento de 2 bytes (deve começar em endereço par)
- `int`, `float`: alinhamento de 4 bytes (deve começar em endereço divisível por 4)
- `double`: alinhamento de 8 bytes (deve começar em endereço divisível por 8)

### Otimização de Estruturas

- [ ] Para economizar memória, você pode reduzir o padding seguindo algumas técnicas:

#### 1. Ordenar membros por tamanho (maior para menor)

```c
struct Otimizada {
    double valor;  // 8 bytes
    int contador;  // 4 bytes
    short id;      // 2 bytes
    char flag;     // 1 byte
    char status;   // 1 byte
};                 // Minimiza o padding
```

#### 2. Agrupar membros do mesmo tamanho

Comparação entre estruturas não otimizadas e otimizadas:

```c
// Não otimizada - com muito padding
struct NaoOtimizada {
    char  a;       // 1 byte + 7 bytes padding
    double b;      // 8 bytes
    char  c;       // 1 byte + 3 bytes padding
    int   d;       // 4 bytes
    short e;       // 2 bytes + 6 bytes padding
    double f;      // 8 bytes
};                 // Total: 40 bytes!

// Otimizada - padding minimizado
struct BemOtimizada {
    double b, f;   // 16 bytes (8+8)
    int d;         // 4 bytes
    short e;       // 2 bytes
    char a, c;     // 2 bytes
};                 // Total: 24 bytes!
```

#### Verificando o impacto do padding

Você pode criar um programa de teste para visualizar o efeito da organização dos membros:

```c
#include <stdio.h>

struct NaoOtimizada { /* ... */ };
struct BemOtimizada { /* ... */ };

int main() {
    printf("Tamanho NaoOtimizada: %zu bytes\n", sizeof(struct NaoOtimizada));
    printf("Tamanho BemOtimizada: %zu bytes\n", sizeof(struct BemOtimizada));
    return 0;
}
```

Filepath: programacao-computadores/c/tipos-dados.md
Replace lines: 136-148
### Estruturas Compactadas

Quando o tamanho da estrutura é crítico (por exemplo, para comunicação em rede ou armazenamento eficiente), você pode eliminar o padding com diretivas específicas do compilador:

#### GCC e Clang: atributo `packed`

```c
struct __attribute__((packed)) Compacta {
    char a;    // 1 byte
    int b;     // 4 bytes
    char c;    // 1 byte
};             // Tamanho: exatamente 6 bytes
```

#### Visual C++: `#pragma pack`

```c
#pragma pack(push, 1)  // Define alinhamento de 1 byte
struct Compacta {
    char a;    // 1 byte
    int b;     // 4 bytes
    char c;    // 1 byte
};             // Tamanho: exatamente 6 bytes
#pragma pack(pop)      // Restaura o alinhamento padrão
```

#### Limitações importantes!

As estruturas compactadas têm desvantagens significativas:

1. **Penalidade de desempenho**: O acesso a dados desalinhados é mais lento (até 10x em algumas arquiteturas)
2. **Incompatibilidade**: Alguns processadores mais antigos ou embarcados podem gerar exceções ao tentar acessar dados desalinhados
3. **Portabilidade reduzida**: O comportamento pode variar entre compiladores e arquiteturas

Use estruturas compactadas apenas quando o tamanho for mais importante que o desempenho, como em:
- Protocolos de comunicação de rede
- Formatos de arquivo binário
- Sistemas com severas restrições de memória

## Tipos Definidos pelo Usuário

O `typedef` permite criar nomes alternativos para tipos existentes:

```c
typedef unsigned int uint;
typedef struct Pessoa Pessoa;

// Agora você pode usar 'uint' em vez de 'unsigned int'
// E 'Pessoa' em vez de 'struct Pessoa'
```
