#include <stdio.h>

int main(void) {
    int M[4][4], i, j;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &M[i][j]);
        }
    }
    printf("Diagonal principal: ");
    for (i = 0; i < 4; i++){
        printf("%d ", M[i][i]);
    }
    printf("\n");
    for (i = 0; i < 4; i++){
        printf("\n");
        for (j = 0; j < 4; j++){
            printf("%d\t", M[i][j]);
        }
    }
    return 0;
}