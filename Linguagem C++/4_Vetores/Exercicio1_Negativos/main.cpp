/* Professor: Nelio
Descri��o: Fa�a um programa que leia um n�mero inteiro positivo N (m�ximo = 10) e depois N n�meros inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os n�meros negativos lidos.
Autor(a): Jo�o Renato Sant'Ana
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
