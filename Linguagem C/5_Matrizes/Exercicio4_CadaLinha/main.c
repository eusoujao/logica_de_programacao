/* Professor: Nelio
Descrição: Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha não haver empates
Autor(a): João Renato Sant'Ana
Data atual: 15/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, j, maior;
    int mat[10][10];

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            printf("Elemento [%d,%d]:", i, j);
            scanf("%d", &mat[i][j]);

        }
    }

    printf("MAIOR ELEMENTO DE CADA LINHA: \n");

    for(i = 0; i < n; i++){

        maior = 0;

        for(j = 0; j < n; j++){

            if(mat[i][j] > maior){

                maior = mat[i][j];

            }
        }

        printf("%d\n", maior);

    }

    return 0;
}
