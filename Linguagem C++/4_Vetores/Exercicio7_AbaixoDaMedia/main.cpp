/* Professor: Nelio
Descri��o: Fazer um programa para ler um n�mero inteiro N e depois um vetor de N n�meros reais. Em seguida,
mostrar na tela a m�dia aritm�tica de todos elementos com tr�s casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da m�dia, com uma casa decimal cada.
Autor(a): Jo�o Renato Sant'Ana
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
