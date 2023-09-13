/* Professor: Nelio
Descri��o: Ler dois n�meros M e N (m�ximo = 10), e depois ler uma matriz MxN de n�meros inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os n�meros negativos da matriz.
Autor(a): Jo�o Renato Sant'Ana
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
