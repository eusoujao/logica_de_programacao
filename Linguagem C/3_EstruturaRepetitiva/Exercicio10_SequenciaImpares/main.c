/* Professor: Nelio
Descri��o: Leia um valor inteiro X. Em seguida mostre os �mpares de 1 at� X, um valor por linha, inclusive o X,
se for o caso.
Autor(a): Jo�o Renato Sant'Ana
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
