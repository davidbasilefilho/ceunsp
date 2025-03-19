#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double a, b;
  printf("Digite um número: ");
  scanf("%lf", &a);
  printf("Digite outro número: ");
  scanf("%lf", &b);

  printf("A soma de %.2lf e %.2lf é %.2lf\n", a, b, a + b);
  printf("A subtração de %.2lf e %.2lf é %.2lf\n", a, b, a - b);
  printf("A multiplicação de %.2lf e %.2lf é %.2lf\n", a, b, a * b);
  printf("A divisão de %.2lf e %.2lf é %.2lf\n", a, b, a / b);
  printf("A potência de %.2lf elevado a %.2lf é %.2lf\n", a, b, pow(a, b));
  printf("A raiz de %.2lf a %.2lf é %.2lf\n", a, b, pow(a, 1 / b));
  return EXIT_SUCCESS;
}
