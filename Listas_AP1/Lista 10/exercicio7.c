#include <stdio.h>
#include <string.h>

int main() {
    char usuario[50];
    char senha[50];
    const char usuario_correto[] = "admin";
    const char senha_correta[] = "alb2C3";

    printf("Digite o nome de usuario: ");
    scanf("%49s", usuario);

    printf("Digite a senha: ");
    scanf("%49s", senha);

    // strcmp retorna 0 se as strings forem iguais
    if (strcmp(usuario, usuario_correto) == 0 && strcmp(senha, senha_correta) == 0) {
        printf("Dados corretos. Acesso permitido!\n");
    } else {
        printf("Usuario ou senha incorretos. Acesso negado!\n");
    }

    return 0;
}