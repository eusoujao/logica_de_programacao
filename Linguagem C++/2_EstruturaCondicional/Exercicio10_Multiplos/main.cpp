/* Professor: Nelio
Descrição: Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
números podem ser digitados em qualquer ordem.
Autor(a): João Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int numero1, numero2, divisao1, divisao2;

    cout << "Digite dois numeros inteiros: " << endl;
    cin >> numero1;
    cin >> numero2;

    divisao1 = numero1 % numero2;
    divisao2 = numero2 % numero1;

    if (divisao1 == 0 || divisao2 == 0){

        cout << "Sao multiplos";

    } else {

        cout << "Nao sao multiplos";

    };

    return 0;
}
