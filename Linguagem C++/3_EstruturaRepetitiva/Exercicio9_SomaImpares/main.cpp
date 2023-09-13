/* Professor: Nelio
Descrição: Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, y, troca, soma, i;

    cout << "Digite dois numeros: " << endl;
    cin >> x;
    cin >> y;

    if(x > y){

        troca = x;
        x = y;
        y = troca;

    }

    soma = 0;

    for(i = x+1; i < y; i++){

        if(i%2 != 0){

            soma = soma + i;

        }
    }

    cout << "Soma = " << soma;

    return 0;
}
