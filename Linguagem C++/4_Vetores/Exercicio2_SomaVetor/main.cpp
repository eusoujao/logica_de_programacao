/* Professor: Nelio
Descrição: Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i;
    double soma;


    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    soma = 0;

    for(i = 0; i < n; i++){

        cout << "Digite um numero: ";
        cin >> vet[i];

    }


    cout << fixed << setprecision(1);
    cout << endl << "Valores = ";

    for(i = 0; i < n; i++){

        cout << vet[i] << " ";
        soma = soma + vet[i];

    }

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "SOMA = " << soma << endl;
    cout << "MEDIA = " << (soma / n);



    return 0;
}
