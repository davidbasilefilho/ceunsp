#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x;
  printf("Digite um número inteiro: ");
  scanf("%d", &x);

  printf("O número %d %s.\n", x, x >= 0 ? "é positivo" : "não é positivo");
  return EXIT_SUCCESS;
}
