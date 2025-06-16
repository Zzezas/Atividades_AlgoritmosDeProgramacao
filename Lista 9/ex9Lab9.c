#include <stdio.h>

int main() {
    int vetor_original[6];
    int vetor_modificado[6];
    int i;
    printf("Digite 6 elementos inteiros e positivos:\n");
    for (i = 0; i < 6; i++) {
        printf("Elemento na posição %d: ", i);
        scanf("%d", &vetor_original[i]);
        while (vetor_original[i] <= 0) {
            printf("Valor inválido! Digite apenas números inteiros e positivos.\n");
            printf("Elemento na posição %d: ", i);
            scanf("%d", &vetor_original[i]);
        }
    }
    for (i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            vetor_modificado[i] = vetor_original[i] / 2;
        } else {
            vetor_modificado[i] = vetor_original[i] * 3;
        }
    }
    printf("\n---------- Vetores ----------\n");
    printf("Vetor Original:    [ ");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor_original[i]);
    }
    printf("]\n");
    printf("Vetor Modificado:  [ ");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor_modificado[i]);
    }
    printf("]\n");

    return 0;
}