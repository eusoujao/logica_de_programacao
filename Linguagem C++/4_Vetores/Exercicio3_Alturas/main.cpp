/* Professor: Nelio
Descrição: Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, soma;
    double somaAlt, porcentagem;
    string nomes[10];
    int idades[10];
    double alturas[10];

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    somaAlt = 0;
    soma = 0;
    porcentagem = 0;

    for(i = 0; i < n; i++){

        cout << "Dados da " << (i+1) << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];

    };

    for(i = 0; i < n; i++){

        somaAlt = somaAlt + alturas[i];

    };

    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << (somaAlt / n) << endl;

    for(i = 0; i < n; i++){

        if(idades[i] < 16){

            soma = soma + 1;

        };
    };

    porcentagem = 100.0 * soma / n;

    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;

    for(i = 0; i < n; i++){

        if(idades[i] < 16){

            cout << nomes[i] << endl;

        };
    };


    return 0;
}
