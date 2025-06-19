#include <stdio.h>

int main(void){
    int M[5][5], X, i, j;
    for(i = 0; i < 5;i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &M[i][j]);
        }
    }
    scanf("%d", &X);
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(M[i][j] == X){
                printf("Elemento encontrado na linha %d e coluna %d\n", i + 1, j + 1);
            }
            else{
                printf("Elemento nao encontrado\n");
                return 0;
            }
        }
    }
}