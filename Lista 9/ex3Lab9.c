#include <stdio.h>

int main() {
  int vetor_original[10];
  int vetor_inverso[10];
  int i;

  printf("Digite 10 números inteiros:\n");
  for (i = 0; i < 10; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &vetor_original[i]);
  }


  for (i = 0; i < 10; i++) {
    vetor_inverso[i] = vetor_original[9 - i];
  }

  printf("\nVetor Original: [ ");
  for (i = 0; i < 10; i++) {
    printf("%d ", vetor_original[i]);
  }
  printf("]\n");

  printf("Vetor Inverso: [ ");
  for (i = 0; i < 10; i++) {
    printf("%d ", vetor_inverso[i]);
  }
  printf("]\n");

  return 0;
}