/* Professor: Nelio
Descrição: Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.
Autor(a): João Renato Sant'Ana
Data atual: 15/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int m, n, i, j;
    int mat[10][10];

    printf("Qual a quantidades de linha da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidades de colunas da matriz? ");
    scanf("%d", &n);

    for(i = 0; i < m; i++){

        for(j = 0; j < n; j++){

            printf("Elemento [%d,%d]:", i, j);
            scanf("%d", &mat[i][j]);

        }
    }

    printf("VALORES NEGATIVOS: \n");

    for(i = 0; i < m; i++){

        for(j = 0; j < n; j++){

            if(mat[i][j] < 0){

                printf("%d\n", mat[i][j]);

            }
        }
    }

    return 0;
}
