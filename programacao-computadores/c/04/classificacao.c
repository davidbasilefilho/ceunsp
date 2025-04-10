#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int64_t x;
  while (true) {
    printf("Digite um número inteiro: ");
    scanf("%ld", &x);

    if (x > 0) {
      printf("O número %ld é positivo.\n", x);
    } else if (x < 0) {
      printf("O número %ld é negativo.\n", x);
    } else {
      printf("O número %ld é zero.\n", x);
    }

    printf("Deseja continuar? (s/n): ");
    while (getchar() != '\n')
      ;
    if (getchar() == 'n') {
      printf("Até logo");
      break;
    }
  }

  return EXIT_SUCCESS;
}
