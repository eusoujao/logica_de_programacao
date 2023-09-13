/* Professor: Nelio
Descrição: Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.
Autor(a): João Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, fatorial;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    fatorial = 1;

    for(i = 1; i <= n; i++){

        fatorial = fatorial * i;

    };

    printf("FATORIAL = %d", fatorial);

    return 0;
}
