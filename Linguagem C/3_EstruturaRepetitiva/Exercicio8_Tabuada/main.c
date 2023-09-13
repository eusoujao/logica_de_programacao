/* Professor: Nelio
Descrição: Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.
Autor(a): João Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i;

    printf("Deseja a tabuada para qual valor?");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++){

        printf("%d X %i = %d\n", n, i, (n * i));

    };

    return 0;
}
