/* Professor: Nelio
Descrição: Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
Autor(a): João Renato Sant'Ana
Data atual: 15/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, j, neg;
    int mat[10][10];

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            printf("Elemento [%d,%d]:", i, j);
            scanf("%d", &mat[i][j]);

        }
    }

    printf("DIAGONAL PRINCIPAL\n");

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            if(i == j){

                printf("%d ", mat[i][j]);

            }
        }
    }

    neg = 0;

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            if(mat[i][j] < 0){

                neg = neg + 1;

            }
        }
    }

    printf("\n");
    printf("QUANTIDADE DE NEGATIVOS = %d", neg);

    return 0;
}
