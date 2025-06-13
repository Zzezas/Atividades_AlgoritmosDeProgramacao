#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int contador = 0;
    int i;

    printf("Digite uma string (ex: 011001): ");
    scanf("%99s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '1') {
            contador++;
        }
    }

    printf("A string \"%s\" tem %d numero(s) '1'.\n", str, contador);

    return 0;
}