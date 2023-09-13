/* Professor: Nelio
Descrição: Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente.
Autor(a): João Renato Sant'Ana
Data atual: 30/05/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

    double precoDoProduto, recebido, troco;
    int quantidade;

    printf ("Preco unitario do produto: ");
    scanf ("%lf", &precoDoProduto);
    printf ("Quantidade comprada: ");
    scanf ("%d", &quantidade);
    printf ("Dinheiro recebido: ");
    scanf ("%lf", &recebido);

    troco = recebido - precoDoProduto * quantidade;

    printf ("Troco = %.2lf", troco);

    return 0;
}
