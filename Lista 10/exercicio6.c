#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite um nome: ");
    scanf("%49s", nome);

    printf("As 4 primeiras letras sao: %.4s\n", nome);

    return 0;
}