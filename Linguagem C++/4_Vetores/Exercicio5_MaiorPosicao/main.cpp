/* Professor: Nelio
Descrição: Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero).
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, posicao;
    double maior;
    double vet[10];

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    posicao = 0;

    for(i = 0; i < n; i++){

        cout << "Digite um numero: ";
        cin >> vet[i];

    }

    maior = vet[0];

    for(i = 1; i < n; i++){

        if(vet[i] > maior){

            maior = vet[i];
            posicao = i;

        }
    }

    cout << fixed << setprecision(1);
    cout << endl;
    cout << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posicao;

    return 0;
}
