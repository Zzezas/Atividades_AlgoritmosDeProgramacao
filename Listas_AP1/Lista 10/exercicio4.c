#include <stdio.h>
#include <string.h>

int main() {
    // String original
    char STR[] = "Exercicio4";
    // String de destino com tamanho suficiente
    char STR2[11];

    // Copia o conteúdo de STR para STR2
    strcpy(STR2, STR);

    printf("String Original (STR): %s\n", STR);
    printf("String Copiada (STR2): %s\n", STR2);

    return 0;
}