#include <stdio.h>

int main() {
    int valores[5];
    int i;
    int maior, menor;
    int posMaior, posMenor;
    printf("Digite 5 valores inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    maior = valores[0];
    menor = valores[0];
    posMaior = 0;
    posMenor = 0;
    for (i = 1; i < 5; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
            posMaior = i;
        }
        if (valores[i] < menor) {
            menor = valores[i];
            posMenor = i;
        }
    }
    printf("\n--- Resultados ---\n");
    printf("O maior valor digitado foi %d e está na posição %d.\n", maior, posMaior);
    printf("O menor valor digitado foi %d e está na posição %d.\n", menor, posMenor);

    return 0;
}