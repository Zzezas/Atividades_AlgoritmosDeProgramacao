#include <stdio.h>
#include <string.h>

int main() {
    char texto[51]; // 50 posições + 1 para o '\0'
    int opcao;
    int comprimento = 0;
    int i;

    printf("Digite um texto de ate 50 caracteres: ");
    // fgets é mais seguro para ler strings com espaços
    fgets(texto, 50, stdin);
    // Remove o '\n' que o fgets adiciona no final
    texto[strcspn(texto, "\n")] = 0;


    printf("\n--- MENU ---\n");
    printf("1) Exibir comprimento (com funcao strlen)\n");
    printf("2) Exibir comprimento (sem funcao pronta)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            // a) Usando a função strlen
            printf("O comprimento do texto e: %zu\n", strlen(texto));
            break;

        case 2:
            // b) Sem usar função pronta
            for (i = 0; texto[i] != '\0'; i++) {
                comprimento++;
            }
            printf("O comprimento do texto e: %d\n", comprimento);
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}