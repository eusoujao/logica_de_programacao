/* Professor: Nelio
Descrição: Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
Autor(a): João Renato Sant'Ana
Data atual: 15/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int m, n, i, j, maior;
    int matA[10][10], matB[10][10], matC[10][10];

    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d", &m);
    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d", &n);

    printf("Digite os valores da matriz A:\n ");

    for(i = 0; i < m; i++){

        for(j = 0; j < n; j++){

            printf("Elemento [%d,%d]:", i, j);
            scanf("%d", &matA[i][j]);

        }
    }

    printf("Digite os valores da matriz B:\n ");

    for(i = 0; i < m; i++){

        for(j = 0; j < n; j++){

            printf("Elemento [%d,%d]:", i, j);
            scanf("%d", &matB[i][j]);

        }
    }

    printf("MATRIZ SOMA:\n");

    for(i = 0; i < m; i++){

        for(j = 0; j < n; j++){

            matC[i][j] = matA[i][j] + matB[i][j];
            printf("%d ", matC[i][j]);

        }

        printf("\n");

    }

    return 0;
}
