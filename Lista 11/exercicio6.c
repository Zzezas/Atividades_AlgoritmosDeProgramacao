#include <stdio.h>

int main() {
    int M[5][5];
    int i, j;
    int soma_linha4 = 0, soma_coluna2 = 0;
    int soma_diag_principal = 0, soma_diag_secundaria = 0;
    int soma_total = 0;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    for(j = 0; j < 5; j++) {
        soma_linha4 += M[3][j];
    }
    for(i = 0; i < 5; i++) {
        soma_coluna2 += M[i][1];
    }
    for(i = 0; i < 5; i++) {
        soma_diag_principal += M[i][i];
    }
    for(i = 0; i < 5; i++) {
        soma_diag_secundaria += M[i][4 - i];
    }
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            soma_total += M[i][j];
        }
    }
    printf("Matriz M:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
    printf("Soma da linha 4: %d\n", soma_linha4);
    printf("Soma da coluna 2: %d\n", soma_coluna2);
    printf("Soma da diagonal principal: %d\n", soma_diag_principal);
    printf("Soma da diagonal secundaria: %d\n", soma_diag_secundaria);
    printf("Soma de todos os elementos: %d\n", soma_total);

    return 0;
}