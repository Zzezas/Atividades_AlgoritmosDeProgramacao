#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, k;
    int encontrou_repetido = 0;
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("\nValores repetidos encontrados: ");
    for (i = 0; i < 10; i++) {
        int eh_primeira_vez = 1; 
        for (k = 0; k < i; k++) {
            if (vetor[i] == vetor[k]) {
                eh_primeira_vez = 0;
                break;
            }
        }
        if (eh_primeira_vez) {
            for (j = i + 1; j < 10; j++) {
                if (vetor[i] == vetor[j]) {
                    printf("%d ", vetor[i]);
                    encontrou_repetido = 1;
                    break;
                }
            }
        }
    }
    if (encontrou_repetido == 0) {
        printf("Nenhum valor repetido foi encontrado.\n");
    } else {
        printf("\n");
    }

    return 0;
}