#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para usar tolower

int main() {
    char palavra[100];
    char palavra_invertida[100];
    int i, j, tam;
    int eh_palindromo = 1; // Começa assumindo que é um palíndromo

    printf("Digite uma palavra para verificar se e um palindromo: ");
    scanf("%99s", palavra);

    tam = strlen(palavra);

    // Inverte a palavra
    for (i = tam - 1, j = 0; i >= 0; i--, j++) {
        palavra_invertida[j] = palavra[i];
    }
    palavra_invertida[j] = '\0'; // Finaliza a string invertida

    // Compara a palavra original com a invertida (ignorando maiúsculas/minúsculas)
    for (i = 0; i < tam; i++) {
        if (tolower(palavra[i]) != tolower(palavra_invertida[i])) {
            eh_palindromo = 0; // Não é um palíndromo
            break;
        }
    }

    if (eh_palindromo) {
        printf("A palavra \"%s\" e um palindromo.\n", palavra);
    } else {
        printf("A palavra \"%s\" nao e um palindromo.\n", palavra);
    }

    return 0;
}