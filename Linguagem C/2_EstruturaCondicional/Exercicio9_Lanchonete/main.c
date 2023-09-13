/* Professor: Nelio
Descrição: Uma lanchonete possui vários produtos. Cada produto possui um código
e um preço. Você deve fazer um programa para ler o código e a
quantidade comprada de um produto (suponha um código válido), e daí
informar qual o valor a ser pago.
Autor(a): João Renato Sant'Ana
Data atual: 06/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int cp, quantidade;
    double preco;

    printf("Codigo do produto comprado: ");
    scanf("%d", &cp);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    switch (cp){

        case 1:
            preco = 5.00;
        break;

        case 2:
            preco = 3.50;
        break;

        case 3:
            preco = 4.80;
        break;

        case 4:
            preco = 8.90;
        break;

        case 5:
            preco = 7.32;
        break;

    };

    printf("Valor a pagar: R$%.2lf", (preco * quantidade));



    return 0;
}
