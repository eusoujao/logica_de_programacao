/* Professor: Nelio
Descri��o: Fa�a um programa que leia N n�meros inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os n�meros pares, e tamb�m a quantidade de n�meros pares.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, soma;
    int vet[10];

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    soma = 0;

    for(i = 0; i < n; i++)
    {

        cout << "Digite um numero: ";
        cin >> vet[i];

    }

    cout << endl << "NUMEROS PARES:" << endl;

    for(i = 0; i < n; i++)
    {

        if(vet[i]%2 == 0)
        {

            cout << vet[i] << " ";
            soma = soma + 1;

        }
    }

    cout <<  endl;
    cout << endl << "QUANTIDADE DE PARES = " << soma;

    return 0;
}
