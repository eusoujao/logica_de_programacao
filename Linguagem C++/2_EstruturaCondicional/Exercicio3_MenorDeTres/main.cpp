/* Professor: Nelio
Descrição: Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez.
Autor(a): João Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int valor1, valor2, valor3, menor;

    cout << "Primeiro valor: ";
    cin >> valor1;
    cout << "Segundo valor: ";
    cin >> valor2;
    cout << "Terceiro valor: ";
    cin >> valor3;

    if (valor1 < valor2 && valor1 < valor3){

        menor = valor1;

    } else if (valor2 < valor3){

        menor = valor2;

    } else {

        menor = valor3;

    }

    cout << "Menor = " << menor;

    return 0;
}
