/* Professor: Nelio
Descrição: Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int vet[n];

    for(i = 0; i < n; i++){

        cout << "Digite um numero: ";
        cin >> vet[i];

    };

    cout << "NUMEROS NEGATIVOS: " << endl;

    for(i = 0; i < n; i++){

        if(vet[i] < 0){

            cout << vet[i] << endl;

        };
    };

    return 0;
}
