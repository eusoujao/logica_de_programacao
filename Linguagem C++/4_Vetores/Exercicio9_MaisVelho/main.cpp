/* Professor: Nelio
Descrição: Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, posMaior, maior;
    string nomes[10];
    int idades[10];

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> n;

    for(i = 0; i < n; i++){

        cout << "Dados da " << (i+1) << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];

    }

    maior = idades[0];
    posMaior = 0;

    for(i = 0; i < n; i++){

        if(idades[i] > maior){

            maior = idades[i];
            posMaior = i;

        }
    }

    cout << "PESSOA MAIS VELHA: " << nomes[posMaior];

    return 0;
}
