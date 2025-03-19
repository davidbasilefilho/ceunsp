#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int inteiro = 10;
  float flutuante = 2.73;
  double real = 3.141516;
  char caractere = 'A';
  caractere = (char)255;

  printf("inteiro = %d\n", inteiro);
  printf("flutuante = %f\n", flutuante);
  printf("real = %lf\n", real);
  printf("caractere = %c\n", caractere);

  return EXIT_SUCCESS;
}
