/* Professor: Nelio
Descrição: Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
Autor(a): João Renato Sant'Ana
Data atual: 15/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int m, n, i, j;
    double mat[10][10];
    double vet[10];

    printf("Qual a quantidades de linha da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidades de colunas da matriz? ");
    scanf("%d", &n);

    for(i = 0; i < m; i++){

        printf("Digite os elementos da %da linha:\n ", i+1);

        for(j = 0; j < n; j++){

            scanf("%lf", &mat[i][j]);

        }
    }

    for(i = 0; i < m; i++){

        vet[i] = 0;

        for(j = 0; j < n; j++){

            vet[i] = vet[i] + mat[i][j];

        }
    }

    printf("VETOR GERADO: \n");

    for(i = 0; i < m; i++){

        printf("%.1lf\n", vet[i]);

    }


    return 0;
}
