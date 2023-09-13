/* Professor: Nelio
Descri��o: Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o pre�o unit�rio do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente n�o for suficiente, mostrar uma mensagem informando o
valor restante.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int quantidade;
    double preco, recebido, troco, total;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> recebido;

    total = preco * quantidade;
    troco = recebido - total;

    cout << fixed << setprecision(2);

    if (total > recebido){

        cout << "DINHEIRO INSULFICIENTE. FALTAM " << (total - recebido) << " REAIS";

    } else {

        cout << "Troco = " << troco;

    }

    return 0;
}
