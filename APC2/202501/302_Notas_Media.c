#include <stdio.h>

int main() {
  float notas[5] = {7.5, 8.0, 6.5, 9.0, 5.5};
  float soma = 0;
  int i;

  for (i = 0; i < 5; i++) {
    soma += notas[i];
  }

  float media = soma / 5;

  printf("A média das notas é: %.2f\n", media);

  return 0;
}