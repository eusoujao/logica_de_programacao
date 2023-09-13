/* Professor: Nelio
Descri��o: Uma lanchonete possui v�rios produtos. Cada produto possui um c�digo
e um pre�o. Voc� deve fazer um programa para ler o c�digo e a
quantidade comprada de um produto (suponha um c�digo v�lido), e da�
informar qual o valor a ser pago.
Autor(a): Jo�o Renato Sant'Ana
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
