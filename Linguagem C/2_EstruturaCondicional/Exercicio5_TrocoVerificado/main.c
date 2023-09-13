/* Professor: Nelio
Descrição: Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante.
Autor(a): João Renato Sant'Ana
Data atual: 06/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int quantidade;
    double preco, recebido, troco, total;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &recebido);

    total = preco * quantidade;
    troco = recebido - total;

    if (total > recebido){

        printf("DINHEIRO INSULFICIENTE. FALTAM %.2lf REAIS", (total - recebido));

    } else {

        printf("Troco = %.2lf", troco);

    }

    return 0;
}
