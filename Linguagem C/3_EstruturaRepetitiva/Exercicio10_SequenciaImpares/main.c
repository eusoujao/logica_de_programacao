/* Professor: Nelio
Descrição: Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
se for o caso.
Autor(a): João Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int x, i;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    for(i = 1; i <= x; i++){

        if(i%2 != 0){

            printf("%d\n", i);

        };
    };

    return 0;
}
