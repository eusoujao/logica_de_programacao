/* Professor: Nelio
Descrição: Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.
Autor(a): João Renato Sant'Ana
Data atual: 15/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, j, linha, coluna;
    double soma;
    double mat[10][10], matAlt[10][10];

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            printf("Elemento [%d,%d]:", i, j);
            scanf("%lf", &mat[i][j]);

        }
    }

    soma = 0;

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            if(mat[i][j] > 0){

                soma = soma + mat[i][j];

            }
        }
    }

    printf("\nSOMA DOS POSITIVOS: %.1lf\n", soma);

    printf("\nEscolha uma linha: ");
    scanf("%d", &linha);
    printf("LINHA ESCOLHIDA: ");


    for(j = 0; j < n; j++){

        printf("%.1lf ", mat[linha][j]);

    }

    printf("\n");
    printf("\nEscolha uma coluna: ");
    scanf("%d", &coluna);
    printf("COLUNA ESCOLHIDA: ");


    for(i = 0; i < n; i++){

        printf("%.1lf ", mat[i][coluna]);

    }

    printf("\n");
    printf("\nDIAGONAL PRINCIPAL: ");

    for(i = 0; i < n; i++){

        printf("%.1lf ", mat[i][i]);

    }

    printf("\n");
    printf("\nMATRIZ ALTERNADA: \n ");

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            if(mat[i][j] < 0){

                matAlt[i][j] = pow(mat[i][j], 2);

            }else {

                matAlt[i][j] = mat[i][j];

            }

            printf("%.1lf ", matAlt[i][j]);

        }

        printf("\n");

    }


    return 0;
}
