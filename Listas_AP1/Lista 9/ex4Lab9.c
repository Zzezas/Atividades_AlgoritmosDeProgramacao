#include <stdio.h>

int main() {
    int vetor[10];
    int i;
    int contador_pares = 0;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            contador_pares++;
        }
    }
    printf("\nO vetor informado possui %d valor(es) par(es).\n", contador_pares);

    return 0;
}