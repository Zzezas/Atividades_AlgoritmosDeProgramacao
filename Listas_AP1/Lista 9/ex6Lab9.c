#include <stdio.h>

int main() {
    float notas[5];
    int i;
    float soma_das_notas = 0.0;
    float media;
    printf("Digite a nota da prova de 5 alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma_das_notas = soma_das_notas + notas[i];
    }
    media = soma_das_notas / 5.0;
    printf("\nAs notas digitadas foram: ");
    for (i = 0; i < 5; i++) {
        printf("%.1f; ", notas[i]);
    }
    printf("\nA média geral da turma é: %.2f\n", media);

    return 0;
}