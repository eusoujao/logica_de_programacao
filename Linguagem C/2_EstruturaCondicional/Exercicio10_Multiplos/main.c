/* Professor: Nelio
Descrição: Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
números podem ser digitados em qualquer ordem.
Autor(a): João Renato Sant'Ana
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
