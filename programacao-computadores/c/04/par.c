#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x;
  printf("Digite um número inteiro: ");
  scanf("%d", &x);

  if (x % 2 == 0) {
    printf("O número %d é par.\n", x);
  } else {
    printf("O número %d não é par.\n", x);
  }
  return EXIT_SUCCESS;
}
