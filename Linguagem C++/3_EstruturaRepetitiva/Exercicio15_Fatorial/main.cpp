/* Professor: Nelio
Descri��o: Fazer um programa para ler um n�mero natural N (valor m�ximo: 15), e depois calcular e mostrar o
fatorial de N.
Autor(a): Jo�o Renato Sant'Ana
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
