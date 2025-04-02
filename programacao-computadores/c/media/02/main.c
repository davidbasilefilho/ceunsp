#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double nota1, nota2, nota3, soma, media;

  printf("Digite a primeira nota: ");
  scanf("%lf", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%lf", &nota2);

  printf("Digite a terceira nota: ");
  scanf("%lf", &nota3);

  soma = nota1 + nota2 + nota3;
  media = soma / 3;

  printf("A soma das notas é: %.2lf\n", soma);
  printf("A média das notas é: %.2lf\n", media);

  return EXIT_SUCCESS;
}
