/* Professor: Nelio
Descri��o: Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a
classifica��o desta glicose.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    double glicose;

    cout << "Digite a medida de glicose: ";
    cin >> glicose;

    if (glicose <= 100) {

        cout << "Classificacao: normal";

    } else if (glicose <= 140) {

        cout << "Classificacao: elevado";

    } else {

        cout << "Classificacao: diabetes";

    }

    return 0;
}
