#include <stdio.h>

#define LINHAS 5
#define COLUNAS 4

int main() {
    int matriz_alunos[LINHAS][COLUNAS];
    int maior_nota_final = -1;
    int matricula_maior_nota = -1;
    printf("Digite os dados dos alunos:\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Numero de matricula: ");
        scanf("%d", &matriz_alunos[i][0]);
        printf("Media das provas: ");
        scanf("%d", &matriz_alunos[i][1]);
        printf("Media dos trabalhos: ");
        scanf("%d", &matriz_alunos[i][2]);
        matriz_alunos[i][3] = matriz_alunos[i][1] + matriz_alunos[i][2];
        if (matriz_alunos[i][3] > maior_nota_final) {
            maior_nota_final = matriz_alunos[i][3];
            matricula_maior_nota = matriz_alunos[i][0];
        }
    }
    printf("\n\n--- Matriz de Dados dos Alunos ---\n");
    printf("Matricula | Media Provas | Media Trab. | Nota Final\n");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("%-9d | %-12d | %-11d | %-10d\n",
               matriz_alunos[i][0],
               matriz_alunos[i][1],
               matriz_alunos[i][2],
               matriz_alunos[i][3]);
    }
    printf("---------------------------------------------------\n");
    printf("\nA matricula do aluno com a maior nota final e: %d\n", matricula_maior_nota);
    printf("Maior nota final: %d\n", maior_nota_final);
    return 0;
}