#include <stdio.h>

int main() {
    float valores[5];
    int i;

    float maior, menor, soma = 0.0, media;
    printf("Digite 5 valores:\n");
    for (i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }
    maior = valores[0];
    menor = valores[0];
    soma = 0.0; 
    for (i = 0; i < 5; i++) {
        soma = soma + valores[i];
        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }
    media = soma / 5.0;
    printf("\n---------- Resultados ----------\n");
    printf("Valores digitados: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f; ", valores[i]);
    }
    printf("\n"); 
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}