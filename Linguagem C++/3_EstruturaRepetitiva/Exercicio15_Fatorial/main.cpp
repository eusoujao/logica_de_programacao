/* Professor: Nelio
Descrição: Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, fatorial;

    cout << "Digite o valor de N: ";
    cin >> n;

    fatorial = 1;

    for(i = 1; i <= n; i++){

        fatorial = fatorial * i;

    };

    cout << "FATORIAL = " << fatorial;

    return 0;
}
