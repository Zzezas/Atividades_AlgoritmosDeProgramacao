#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200];
    char frase_sem_espacos[200];
    int i, j = 0;

    printf("Digite uma frase (Ex: Subi no onibus): ");
    fgets(frase, 200, stdin);

    // Remove espaços e caracteres de nova linha
    for (i = 0; frase[i] != '\0'; i++) {
        if (isalnum(frase[i])) { // isalnum verifica se é letra ou número
            frase_sem_espacos[j++] = tolower(frase[i]);
        }
    }
    frase_sem_espacos[j] = '\0';

    // Agora, verifica se a string sem espaços é um palíndromo
    int tam = strlen(frase_sem_espacos);
    int eh_palindromo = 1;

    for (i = 0, j = tam - 1; i < j; i++, j--) {
        if (frase_sem_espacos[i] != frase_sem_espacos[j]) {
            eh_palindromo = 0;
            break;
        }
    }

    if (eh_palindromo) {
        printf("A frase forma um palindromo.\n");
    } else {
        printf("A frase NAO forma um palindromo.\n");
    }

    return 0;
}