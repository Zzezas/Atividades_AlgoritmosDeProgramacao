#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
    int M[N][N], i, j;
    srand((unsigned)time(NULL));
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i < j) {
                M[i][j] = 2 * i + 7 * j - 2;
            } else if (i == j) {
                M[i][j] = 3 * i * i - 1;
            } else { // i > j
                M[i][j] = 4 * i * i * i - 5 * j * j + 1;
            }
        }
    }

    // Imprimir a matriz
    printf("Matriz 10x10:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%6d ", M[i][j]);
        }
        printf("\n");
    }
}