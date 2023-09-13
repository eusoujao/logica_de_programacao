/* Professor: Nelio
Descrição: Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente.
Autor(a): João Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    double precoDoProduto, recebido, troco;
    int quantidade;

    cout << "Preco unitario do produto: ";
    cin >> precoDoProduto;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> recebido;

    troco = recebido - precoDoProduto * quantidade;

    cout << fixed << setprecision(2);
    cout << "Troco = " << troco;

    return 0;
}
