/* Professor: Nelio
Descrição: Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de números acima da diagonal
principal é mostrado ao lado (no caso as células com fundo cinza).
Autor(a): João Renato Sant'Ana
Data atual: 15/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, j, soma;
    int mat[10][10];

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            printf("Elemento [%d,%d]:", i, j);
            scanf("%d", &mat[i][j]);

        }
    }

    soma = 0;

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            if(j > i){

                soma = soma + mat[i][j];

            }
        }
    }

    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", soma);

    return 0;
}
