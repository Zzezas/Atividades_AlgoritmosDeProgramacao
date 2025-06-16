#include <stdio.h>

int main(void){
    int m[4][4], i, j;
    int conta = 0, soma = 0;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < 4; i++){
        printf("\n");
        for(j = 0; j < 4; j++){
            printf("%d\t", m[i][j]);
            if(m[i][j] >= 10){
                conta++;
                soma += m[i][j];
            }
        }
    }
    printf("A quantidade de valores iguais ou acima de 10: %d\n", conta);
    printf("A soma desses valores: %d\n", soma);
}