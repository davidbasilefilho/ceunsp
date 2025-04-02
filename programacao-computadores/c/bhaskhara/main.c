#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double a, b, c, delta, x1, x2;

  printf("Defina a incógnita a: ");
  scanf("%lf", &a);

  printf("Defina a incógnita b: ");
  scanf("%lf", &b);

  printf("Defina a incógnita c: ");
  scanf("%lf", &c);

  delta = (b * b) - (4 * a * c);
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);

  printf("\nO valor de delta é: %.2lf\n", delta);

  if (delta < 0) {
    printf("A equação não possui raízes reais.\n");
    return EXIT_FAILURE;
  }

  printf("O valor de x1 é: %.2lf\n", x1);
  printf("O valor de x2 é: %.2lf\n", x2);
  return EXIT_SUCCESS;
}
