#include <stdio.h>

int main(void) {
    int M[3][3], i, j;
    for (i = 0; i < 3; i++){
        for (j = 0;j < 3; j++){
            scanf("%d", & M[i][j]);
        }
    }
    for (i = 0; i < 3; i++){
        printf("\n");
        for (j = 0;j < 3; j++){
            printf("%d\t", M[i][j]);
        }
    }
}