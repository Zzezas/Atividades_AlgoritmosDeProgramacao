#include <stdio.h>

int main() {
    // Declara uma string com 11 posições para armazenar 10 caracteres
    // mais o caractere nulo '\0'.
    char STR[11];

    printf("Digite uma string de ate 10 caracteres: ");

    // Lê a string do teclado.
    // Usamos "%10s" para garantir que não mais de 10 caracteres sejam lidos.
    scanf("%10s", STR);

    printf("A string digitada foi: %s\n", STR);

    return 0;
}