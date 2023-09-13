/* Professor: Nelio
Descrição: Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
apenas NULO.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, x, i;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    for(i = 1; i <= n; i++){

        cout << "Digite um numero: ";
        cin >> x;

        if(x%2 != 0 && x < 0){

            cout << "IMPAR NEGATIVO" << endl;

        }else if(x%2 != 0 && x > 0){

            cout << "IMPAR POSITIVO" << endl;

        }else if(x%2 == 0 && x < 0){

            cout << "PAR NEGATIVO" << endl;

        }else if(x%2 == 0 && x > 0){

            cout << "PAR POSITIVO" << endl;

        }else {

            cout << "NULO" << endl;

        };
    };

    return 0;
}
