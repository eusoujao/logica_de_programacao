/* Professor: Nelio
Descri��o: Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N, x, fora, dentro, i;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    fora = 0;
    dentro= 0;

    for(i = 1; i <= N; i++){

        cout << "Digite um numero: ";
        cin >> x;

        if(x >= 10 && x <= 20){

            dentro = dentro + 1;

        }else {

            fora = fora + 1;

        };
    };

    cout << dentro << " Dentro" << endl;
    cout << fora << " Fora";


    return 0;
}
