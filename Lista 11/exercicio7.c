#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

int main() {
    int matriz[N][N];
    int i, j;

    srand((unsigned)time(NULL));

    printf("Matriz original:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matriz[i][j] = 1 + rand() % 20;
            printf("%3d\t", matriz[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            matriz[i][j] = 0;
        }
    }
    printf("\nMatriz triangular inferior:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}