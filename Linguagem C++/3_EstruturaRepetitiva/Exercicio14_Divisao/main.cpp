/* Professor: Nelio
Descrição: Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i;
    double x1, x2, divisao;

    cout << "Quantos casos voce vai digitar: ";
    cin >> n;

    for(i = 1; i <= n; i++){

        cout << "Entre com um numerador: ";
        cin >> x1;
        cout << "Entre com um denominador: ";
        cin >> x2;

        if(x2 == 0){

            cout << "DIVISAO IMPOSSIVEL" << endl;

        }else {

            divisao = x1/x2;
            cout << "DIVISAO = " << divisao << endl;

        };
    };

    return 0;
}
