/* Professor: Nelio
Descrição: Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, homem, mulher;
    double somaM, maior, menor, media;
    double vetA[10];
    char vetG[10];

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    for(i = 0; i < n; i++){

        cout << "Altura da " << (i+1) << "a pessoa: ";
        cin >> vetA[i];
        cout << "Genero da " << (i+1) << "a pessoa (M/F): ";
        cin >> vetG[i];

    }

    somaM = 0;
    mulher = 0;
    homem = 0;

    for(i = 0; i < n; i++){

        if(vetG[i] == 'F'){

            somaM = somaM + vetA[i];
            mulher = mulher + 1;

        } else {

            homem = homem + 1;

        }
    }

    maior = vetA[0];
    menor = vetA[0];

    for(i = 1; i < n; i++){

        if(vetA[i] > maior){

            maior = vetA[i];

        }

        if(vetA[i] < menor){

            menor = vetA[i];

        }
    }

    media = somaM/mulher;

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menor << endl;
    cout << "Maior altura = " << maior << endl;
    cout << "Media das alturas das mulheres = " << media << endl;
    cout << "Numero de homens = " << homem;



    return 0;
}
