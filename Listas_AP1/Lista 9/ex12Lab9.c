#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
    int sequencia_original[5];
    int sequencia_jogador[5];
    int i;
    int acertou = 1;

    srand(time(NULL));

    printf("Gerando uma sequência de 5 números...\n");
    for (i = 0; i < 5; i++) {
        sequencia_original[i] = rand() % 10;
    }

    printf("Memorize a seguinte sequência:\n\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", sequencia_original[i]);
    }
    printf("\n\n");
    fflush(stdout); 
    sleep(2);

    system("cls");

    printf("Agora, digite a sequência que você memorizou:\n");
    for (i = 0; i < 5; i++) {
        printf("%dº número: ", i + 1);
        scanf("%d", &sequencia_jogador[i]);
    }

    for (i = 0; i < 5; i++) {
        if (sequencia_original[i] != sequencia_jogador[i]) {
            acertou = 0; 
            break;      
        }
    }

    printf("\n---------- Resultado ----------\n"); 
    if (acertou) { 
        printf("Parabéns! Você acertou a sequência!\n");
    } else {
        printf("Que pena, você errou!\n");
        printf("Sequência correta: ");
        for (i = 0; i < 5; i++) { printf("%d ", sequencia_original[i]); }
        printf("\nSua tentativa:       ");
        for (i = 0; i < 5; i++) { printf("%d ", sequencia_jogador[i]); }
        printf("\n");
    }

    return 0;
}