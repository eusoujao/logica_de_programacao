/* Professor: Nelio
Descrição: Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i;
    double soma, media;
    double vet[10];

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    soma = 0;

    for( i = 0; i < n; i++){

        cout << "Digite um numero: ";
        cin >> vet[i];

    }

    for(i = 0; i < n; i++){

        soma = soma + vet[i];

    }

    media = soma / n;

    cout << fixed << setprecision(3);
    cout << endl << "MEDIA DO VETOR = " << media;

    cout << endl << "ELEMENTOS ABAIXO DA MEDIA: " << endl;

    for(i = 0; i < n; i++){

        if(vet[i] < media){

            cout << fixed << setprecision(1);
            cout << vet[i] << endl;

        }
    }



    return 0;
}
