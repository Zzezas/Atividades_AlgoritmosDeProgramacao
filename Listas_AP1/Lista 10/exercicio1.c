#include <stdio.h>
#include <string.h>

int main() {
    // Exemplo com 'A' (char)
    char caractere = 'A';
    printf("--- Exemplo com 'A' ---\n");
    printf("Caractere: %c\n", caractere);
    printf("Tamanho em bytes: %zu byte\n", sizeof(caractere)); // Geralmente 1

    printf("\n");

    // Exemplo com "A" (string ou vetor de caracteres)
    char string[] = "A";
    printf("--- Exemplo com \"A\" ---\n");
    printf("String: %s\n", string);
    printf("Tamanho em bytes (incluindo \\0): %zu bytes\n", sizeof(string)); // Geralmente 2
    printf("Comprimento da string (sem \\0): %zu\n", strlen(string)); // Retorna 1

    return 0;
}