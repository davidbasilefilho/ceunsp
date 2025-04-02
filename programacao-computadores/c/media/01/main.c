#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int numero1 = 10;
  int numero2 = 20;
  int numero3 = 30;
  int soma, media;

  soma = numero1 + numero2;
  printf("A soma de %d, %d e %d é %d\n", numero1, numero2, numero3, soma);

  media = soma / 3;
  printf("A média de %d, %d e %d é %d\n", numero1, numero2, numero3, media);

  return EXIT_SUCCESS;
}
