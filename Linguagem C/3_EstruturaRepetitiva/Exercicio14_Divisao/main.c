/* Professor: Nelio
Descrição: Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
Autor(a): João Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i;
    double x1, x2, divisao;

    printf("Quantos casos voce vai digitar: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        printf("Entre com um numerador: ");
        scanf("%lf", &x1);
        printf("Entre com um denominador: ");
        scanf("%lf", &x2);

        if(x2 == 0){

            printf("DIVISAO IMPOSSIVEL\n");

        }else {

            divisao = x1/x2;
            printf("DIVISAO = %.2lf\n", divisao);

        };
    };

    return 0;
}
