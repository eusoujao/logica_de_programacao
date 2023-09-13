/* Professor: Nelio
Descrição: Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, y;

    cout << "Digite dois numeros: " << endl;
    cin >> x;
    cin >> y;

    while (x != y){

        if (x < y){
            cout << "CRESCENTE!" << endl;
        } else {
            cout << "DECRESCENTE!" << endl;
        }

        cout << "Digite outros dois numeros: " << endl;
        cin >> x;
        cin >> y;
    }

    return 0;
}
