/* Professor: Nelio
Descri��o: Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes
n�meros.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 30/05/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int x, y, soma;

    printf ("Digite o valor de X: ");
    scanf ("%d", &x);
    printf ("Digite o valor de Y: ");
    scanf ("%d", &y);

    soma = x + y;

    printf ("Soma = %d\n", soma);



    return 0;
}
