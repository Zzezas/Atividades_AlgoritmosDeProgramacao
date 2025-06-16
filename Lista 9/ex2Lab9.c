#include <stdio.h>

int main(void){
    int V[10];
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &V[i]);
    }
    printf("Os numeros digitados na ordem direta foram: ");
    for(i = 0; i < 10; i++){
        printf("%d ", V[i]);
    }
    printf("\n");
    printf("Os numeros digitados na ordem inversa foram: ");
    for(i = 9; i >= 0; i--){
        printf("%d ", V[i]);
    }
    printf("\n");

    return 0;
}
