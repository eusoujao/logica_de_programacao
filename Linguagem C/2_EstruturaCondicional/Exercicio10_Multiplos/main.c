/* Professor: Nelio
Descri��o: Fazer um programa para ler dois n�meros inteiros, e dizer se um n�mero � m�ltiplo do outro. Os
n�meros podem ser digitados em qualquer ordem.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 06/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int numero1, numero2, divisao1, divisao2;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    divisao1 = numero1 % numero2;
    divisao2 = numero2 % numero1;

    if (divisao1 == 0 || divisao2 == 0){

        printf("Sao multiplos");

    } else {

        printf("Nao sao multiplos");

    };

    return 0;
}
