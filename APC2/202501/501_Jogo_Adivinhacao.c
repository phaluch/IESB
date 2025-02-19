#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numero_secreto, palpite;
  srand(time(NULL));
  numero_secreto = rand() % 100;

  printf("Tente adivinhar o número secreto entre 0 e 99!\n");

  do {
    printf("Digite seu palpite: ");
    scanf("%d", &palpite);

    if (palpite > numero_secreto) {
      printf("Muito alto!\n");
    } else if (palpite < numero_secreto) {
      printf("Muito baixo!\n");
    }
  } while (palpite != numero_secreto);

  printf("Parabéns! Você adivinhou o número secreto!\n");

  return 0;
}