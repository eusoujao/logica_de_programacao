/* Professor: Nelio
Descri��o: Ler um n�mero inteiro N, da� mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i;

    cout << "Deseja a tabuada para qual valor?";
    cin >> n;

    for(i = 1; i <= 10; i++){

        cout << n << " X " << i << " = " << (n * i) << endl;

    };

    return 0;

}
