#include <stdio.h>

int main() {
    float vetor[7];
    int i;
    int qtd_negativos = 0;
    float soma_positivos = 0.0;
    printf("Digite 7 números reais (positivos, negativos ou zero):\n");
    for (i = 0; i < 7; i++) {
        printf("%dº número: ", i + 1);
        scanf("%f", &vetor[i]);
        if (vetor[i] < 0) {
            qtd_negativos++;
        }
        else if (vetor[i] > 0) {
            soma_positivos = soma_positivos + vetor[i];
        }
    }
    printf("\n--- Análise do Vetor ---\n");
    printf("Quantidade de números negativos: %d\n", qtd_negativos);
    printf("Soma dos números positivos: %.2f\n", soma_positivos);

    return 0;
}