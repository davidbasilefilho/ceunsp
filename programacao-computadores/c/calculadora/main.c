#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double num1, num2, result;
  char operator;
  char input;

  printf("Calculadora Simples\n");
  printf("Digite o primeiro número: ");
  if (scanf("%lf", &num1) != 1) {
    printf("Entrada inválida. Por favor, insira um número válido.\n");
    return EXIT_FAILURE;
  }

  printf("Digite o operador (+, -, *, /, ^, r): ");
  if (scanf(" %c", &operator) != 1) {
    printf("Entrada inválida. Por favor, insira um operador válido.\n");
    return EXIT_FAILURE;
  }

  printf("Digite o segundo número: ");
  if (scanf("%lf", &num2) != 1) {
    printf("Entrada inválida. Por favor, insira um número válido.\n");
    return EXIT_FAILURE;
  }

  switch (operator) {
  case '+':
    result = num1 + num2;
    printf("Resultado: %.2lf\n", result);
    break;
  case '-':
    result = num1 - num2;
    printf("Resultado: %.2lf\n", result);
    break;
  case '*':
    result = num1 * num2;
    printf("Resultado: %.2lf\n", result);
    break;
  case '/':
    if (num2 != 0) {
      result = num1 / num2;
      printf("Resultado: %.2lf\n", result);
    } else {
      printf("Erro: Divisão por zero não é permitida.\n");
    }
    break;
  case '^':
    result = pow(num1, num2);
    printf("Resultado: %.2lf\n", result);
    break;
  case 'r':
    result = pow(num1, 1.0 / num2);
    printf("Resultado: %.2lf\n", result);
    break;
  default:
    printf("Operador inválido.\n");
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}