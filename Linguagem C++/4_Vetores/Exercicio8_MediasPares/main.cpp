/* Professor: Nelio
Descrição: Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR".
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, somaV;
    double somaM, media;
    int vet[10];

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    somaM = 0;
    somaV = 0;

    for(i = 0; i < n; i++){

        cout << "Digite um numero: ";
        cin >> vet[i];

    }

    for(i = 0; i < n; i++){

        if(vet[i]%2 == 0){

            somaV = somaV + vet[i];
            somaM = somaM + 1;

        }
    }

    media = somaV / somaM;

    if(somaV == 0){

        cout << "NENHUM NUMERO PAR";

    } else {

        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << media;

    }



    return 0;
}
