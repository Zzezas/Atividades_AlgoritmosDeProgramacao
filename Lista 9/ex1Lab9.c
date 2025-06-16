#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){

    setlocale(LC_ALL, "pt_BR.UTF-8");   

    int soma;
    int A[6] = {1, 0, 5, -2, -5, 7};
    
    soma = A[1] + A[2] + A[5];
    printf("A soma dos valores A[1], A[2] e A[5] é: %d\n", soma);
    A[4] = 100;
    for (int i = 0; i < 6; i++){
        printf("A[%d] = %d\n", i, A[i]);
    }  
}
