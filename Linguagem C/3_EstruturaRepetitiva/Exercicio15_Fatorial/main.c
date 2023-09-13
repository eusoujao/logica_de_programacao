/* Professor: Nelio
Descri��o: Fazer um programa para ler um n�mero natural N (valor m�ximo: 15), e depois calcular e mostrar o
fatorial de N.
Autor(a): Jo�o Renato Sant'Ana
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
