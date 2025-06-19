#include <stdio.h>

int main(void){
    int M[6][6], A, resultado = 0, i, j, V[36];
    for (i = 0; i < 6; i++){
        for (j = 0; j < 6; j++){
            scanf("%d", &M[i][j]);
        }        
    }
    scanf("%d", &A);
    for(i = 0; i < 6; i++){
        for (j = 0; j < 6; j++){
            V[resultado] = M[i][j] * A;
            resultado++;
        }
    }
    printf("Vetor resultante:\n");
    for (i = 0; i < 36; i++){
        printf("%d ", V[i]);
    }
    printf("\n");
}