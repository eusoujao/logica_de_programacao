/* Professor: Nelio
Descrição: Uma lanchonete possui vários produtos. Cada produto possui um código
e um preço. Você deve fazer um programa para ler o código e a
quantidade comprada de um produto (suponha um código válido), e daí
informar qual o valor a ser pago.
Autor(a): João Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int cp, quantidade;
    double preco;

    cout << "Codigo do produto comprado: ";
    cin >> cp;
    cout << "Quantidade comprada: ";
    cin >> quantidade;

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

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$" << (preco * quantidade);



    return 0;
}
