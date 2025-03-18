// importar arquivos header.
// # executa comandos do pré-processador, isto é, antes de compilar
// include copia o conteúdo do arquivo header para esse arquivo
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  printf("Hello, World!\n"); // printf mostra texto na linha de comando
  printf("Shine On You, Crazy Diamond!\n"); // \n pula linha
  printf("\nWhat is your name?\n");

  char *name; // String, array de caracteres, isto é, um pointer (uma referência
              // da memória para um valor) para um array de caracteres
  scanf("%s", name); // Lê o nome do usuário. %s é o formato para string

  printf("Hello, %s!\n", name); // Usando o nome do usuário
  getchar();                    // Espera o usuário pressionar Enter
  return 0;
}
