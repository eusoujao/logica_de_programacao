/* Professor: Nelio
Descri��o: Leia um valor inteiro X. Em seguida mostre os �mpares de 1 at� X, um valor por linha, inclusive o X,
se for o caso.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, i;

    cout << "Digite o valor de X: ";
    cin >> x;

    for(i = 1; i <= x; i++){

        if(i%2 != 0){

            cout << i << endl;

        };
    };

    return 0;
}
