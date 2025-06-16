#include <stdio.h>
#include <stdlib.h> 
#include <math.h>   
#include <locale.h> 

int main(void) {
    int op;
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); 

    do {
        printf("\n========= MENU PRINCIPAL =========\n");
        printf("1  - Exercicio 1  (Info Menu - ja implementado pela estrutura)\n");
        printf("2  - Exercicio 2  (Valores de 100 a 1)\n");
        printf("3  - Exercicio 3  (Impares 101-201)\n");
        printf("4  - Exercicio 4  (Soma Pares Mult. 5, 1-500)\n");
        printf("5  - Exercicio 5  (Meio Triangulo de Asteriscos)\n");
        printf("6  - Exercicio 6  (Alturas de 5 Pessoas)\n");
        printf("7  - Exercicio 7  (Progressao Geometrica)\n");
        printf("8  - Exercicio 8  (Somatorio Eq. 2)\n");
        printf("9  - Exercicio 9  (Serie de Fibonacci)\n");
        printf("10 - Exercicio 10 (Beecrowd 1073 - Quadrado Pares)\n");
        printf("Digite -1 para SAIR\n");
        printf("==================================\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &op) != 1) {
            printf("Entrada invalida. Por favor, digite um numero.\n");
            
            while (getchar() != '\n'); 
            op = 0; 
            continue; 
        }
        
        while (getchar() != '\n');

        switch (op) {
            case 1: {
                printf("\n--- Exercicio 1: Informacao do Menu ---\n");
                printf("Voce esta utilizando o menu iterativo solicitado.\n");
                printf("O menu permite escolher os exercicios da lista e encerra com a opcao -1. [cite: 3]\n");
                break;
            }
            case 2: {                
                printf("\n--- Exercicio 2: Valores de 100 a 1 ---\n");
                for (int val = 100; val >= 1; val--) {
                    printf("%d ", val);
                }
                printf("\n");
                break;
            }
            case 3: {
                printf("\n--- Exercicio 3: Numeros impares entre 101 e 201 ---\n");
                for (int val = 101; val <= 201; val += 2) {
                    printf("%d ", val);
                }
                printf("\n");
                break;
            }
            case 4: {
                printf("\n--- Exercicio 4: Soma de pares multiplos de 5 (1 a 500) ---\n");
                int soma_ex4 = 0;
                for (int i = 1; i <= 500; i++) {
                    if (i % 2 == 0 && i % 5 == 0) {
                        soma_ex4 += i;
                    }
                }
                printf("A soma dos numeros pares multiplos de 5 entre 1 e 500 e: %d\n", soma_ex4);
                break;
            }
            case 5: {
                printf("\n--- Exercicio 5: Meio Triangulo de Asteriscos ---\n");
                int n_tri;
                printf("Digite um valor N positivo para o triangulo: ");
                if (scanf("%d", &n_tri) != 1) {
                     printf("Entrada invalida.\n");
                     while (getchar() != '\n'); 
                     break;
                }
                while (getchar() != '\n'); 

                if (n_tri <= 0) {
                    printf("N deve ser um valor positivo.\n");
                } else {
                    for (int i = 1; i <= n_tri; i++) {
                        for (int j = 1; j <= i; j++) {
                            printf("*");
                        }
                        printf("\n");
                    }
                }
                break;
            }
            case 6: {
                printf("\n--- Exercicio 6: Alturas de 5 Pessoas ---\n");
                float altura_ex6, menor_alt = 0.0f, maior_alt = 0.0f, soma_alt = 0.0f;
                int alturas_validas = 0;

                for (int i = 1; i <= 5; i++) {
                    printf("Digite a altura da %dª pessoa (em metros, ex: 1.75): ", i);
                    if (scanf("%f", &altura_ex6) != 1 || altura_ex6 <= 0) {
                        printf("Altura invalida. Por favor, insira um valor positivo.\n");
                        while (getchar() != '\n'); 
                        i--; 
                        continue;
                    }
                    while (getchar() != '\n'); 

                    soma_alt += altura_ex6;
                    alturas_validas++;

                    if (alturas_validas == 1) { 
                        menor_alt = altura_ex6;
                        maior_alt = altura_ex6;
                    } else {
                        if (altura_ex6 < menor_alt) {
                            menor_alt = altura_ex6;
                        }
                        if (altura_ex6 > maior_alt) {
                            maior_alt = altura_ex6;
                        }
                    }
                }

                if (alturas_validas == 5) {
                    float media_alt = soma_alt / 5;
                    printf("\nA menor altura do grupo e: %.2fm\n", menor_alt);
                    printf("A maior altura do grupo e: %.2fm\n", maior_alt);
                    printf("A altura media do grupo e: %.2fm\n", media_alt);
                } else {
                    printf("\nNao foi possivel calcular os resultados pois nem todas as alturas foram inseridas corretamente.\n");
                }
                break;
            }
            case 7: {
                printf("\n--- Exercicio 7: Progressao Geometrica ---\n");
                double a1_pg, q_pg, an_pg;
                int n_termos_pg;

                printf("Digite o valor inicial (a1) da PG: ");
                if (scanf("%lf", &a1_pg) != 1) {
                    printf("Entrada invalida para a1.\n");
                    while (getchar() != '\n'); break;
                }
                while (getchar() != '\n');

                printf("Digite o valor da razao (q) da PG: ");
                if (scanf("%lf", &q_pg) != 1) {
                    printf("Entrada invalida para q.\n");
                    while (getchar() != '\n'); break;
                }
                while (getchar() != '\n');

                printf("Digite o numero de termos (N) da PG: ");
                if (scanf("%d", &n_termos_pg) != 1 || n_termos_pg <= 0) {
                    printf("Numero de termos invalido. Deve ser um inteiro positivo.\n");
                    if (n_termos_pg <=0 && getchar() == '\n');
                    else while (getchar() != '\n'); 
                    break;
                }
                while (getchar() != '\n');


                printf("Os %d termos da PG sao:\n", n_termos_pg);
                for (int i = 0; i < n_termos_pg; i++) { 
                    an_pg = a1_pg * pow(q_pg, i); 
                    printf("a%d = %.2lf", (i + 1), an_pg);
                    if (i < n_termos_pg - 1) {
                        printf(" | ");
                    }
                }
                printf("\n");
                break;
            }
            case 8: {
                printf("\n--- Exercicio 8: Somatorio Especifico (Eq. 2) ---\n");
                int n_soma_ex8;
                long long somatorio_ex8 = 0;

                printf("Digite o valor de N para o somatorio (N deve ser > 5): ");
                if (scanf("%d", &n_soma_ex8) != 1) {
                    printf("Entrada invalida para N.\n");
                    while (getchar() != '\n'); break;
                }
                while (getchar() != '\n');

                if (n_soma_ex8 <= 5) {
                    printf("O valor de N deve ser maior do que 5. [cite: 10]\n");
                } else {
                    for (int i = 5; i <= n_soma_ex8; i++) {
                        somatorio_ex8 += (2LL * i * i) + (5LL * i) + 3;
                    }
                    printf("O resultado do somatorio de i=5 ate N=%d para a expressao (2*i^2 + 5*i + 3) e: %lld\n", n_soma_ex8, somatorio_ex8);
                }
                break;
            }
            case 9: {
                printf("\n--- Exercicio 9: Serie de Fibonacci ---\n");
                int n_fibo;
                long long t1 = 1, t2 = 1, proximo_t;

                printf("Digite o numero de termos (N) da serie de Fibonacci a serem exibidos: ");
                if (scanf("%d", &n_fibo) != 1 || n_fibo <= 0) {
                    printf("Numero de termos invalido. Deve ser um inteiro positivo.\n");
                    if (n_fibo <=0 && getchar() == '\n');
                    else while (getchar() != '\n');
                    break;
                }
                while (getchar() != '\n');

                printf("Os %d primeiros termos da Serie de Fibonacci sao:\n", n_fibo);
                for (int i = 1; i <= n_fibo; i++) {
                    if (i == 1) {
                        printf("%lld", t1);
                    } else if (i == 2) {
                        printf("%lld", t2);
                    } else {
                        proximo_t = t1 + t2;
                        printf("%lld", proximo_t);
                        t1 = t2;
                        t2 = proximo_t;
                    }
                    if (i < n_fibo) {
                        printf("-");
                    }
                }
                printf("\n");
                break;
            }
            case 10: {
                printf("\n--- Exercicio 10: Beecrowd 1073 - Quadrado dos Pares ---\n");
                int n_bee1073;

                printf("Digite um valor inteiro N (5 < N < 2000): ");
                if (scanf("%d", &n_bee1073) != 1) {
                    printf("Entrada invalida para N.\n");
                    while (getchar() != '\n'); break;
                }
                while (getchar() != '\n');

                if (n_bee1073 <= 5 || n_bee1073 >= 2000) {
                    printf("Valor de N fora do intervalo permitido (5 < N < 2000). [cite: 18]\n");
                } else {
                    printf("Quadrado de cada valor par de 1 ate %d:\n", n_bee1073);
                    for (int i = 1; i <= n_bee1073; i++) {
                        if (i % 2 == 0) {
                            long long quadrado_ex10 = (long long)i * i;
                            printf("%d^2 = %lld\n", i, quadrado_ex10);
                        }
                    }
                }
                break;
            }
            case -1: {
                printf("Saindo do programa.\n");
                break;
            }
            default: {
                printf("Opcao invalida! Tente novamente.\n");
                break;
            }
        }

        if (op != -1) {
            printf("\nPressione Enter para continuar...");
        }

    } while (op != -1);

    return 0;
}