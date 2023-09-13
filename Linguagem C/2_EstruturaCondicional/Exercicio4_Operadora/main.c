/* Professor: Nelio
Descrição: Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.
Autor(a): João Renato Sant'Ana
Data atual: 06/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int minutos;
    double pagar;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    if (minutos < 100){

        pagar = 50.0;

    } else {

        pagar = 50.0 + 2 * (minutos - 100);

    }

    printf("Valor a pagar: R$%.2lf", pagar);




    return 0;
}
