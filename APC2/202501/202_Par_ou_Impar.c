#include <stdio.h>

int main() {
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);

  (num % 2 == 0) ? printf("%d é par\n", num) : printf("%d é ímpar\n", num);

  return 0;
}