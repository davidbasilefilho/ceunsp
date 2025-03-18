// importar arquivos header.
// # executa comandos do pré-processador, isto é, antes de compilar
// include copia o conteúdo do arquivo header para esse arquivo
#include <stdio.h>
#include <stdlib.h>

// Função principal. Toda aplicação em C deve ter uma função main, caso não for
// uma biblioteca.
// argc é o número de argumentos passados para o programa
// argv é um array (lista) de strings que contém os argumentos passados para o
// programa.
// Uma função é um pedaço de código reutilizável
int main(int argc, char *argv[]) {
  printf("Hello, World!\n"); // printf mostra texto na linha de comando
  printf("Shine On You, Crazy Diamond!\n"); // \n pula linha
  printf("\nWhat is your name?\n");

  char name[50];     // String com tamanho fixo de 50 caracteres
  scanf("%s", name); // Lê o nome do usuário. %s é o formato para string

  printf("Hello, %s!\n", name); // Usando o nome do usuário

  int a = 0; // cria variável de valor inteiro 32-bit
  printf("Digite um número: ");
  scanf("%d", &a); // Lê um número inteiro. Por quê usamos &? Porque scanf
                   // espera um endereço de memória, isto é, um ponteiro. No
                   // scanf anterior, name é um array, que decai para um
                   // ponteiro, então não precisamos do &.
  printf("Esse número ao quadrado é igual a %d\n", a * a);
  return 0;
}
