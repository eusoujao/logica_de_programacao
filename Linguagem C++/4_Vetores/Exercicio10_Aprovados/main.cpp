/* Professor: Nelio
Descrição: Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis).
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i;
    double media;
    string nomes[10];
    double notas1[10], notas2[10];

    cout << "Quantos alunos serao digitados? ";
    cin >> n;

    for(i = 0; i < n; i++){

        cout << "Digite nome, primeira e segunda nota do " << (i+1) << "o aluno: " << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cin >> notas1[i];
        cin >> notas2[i];

    }

    cout << "ALUNOS APROVADOS: " << endl;

    for(i = 0; i < n; i++){

        media = (notas1[i] + notas2[i])/2;

        if(media >= 6){

            cout << nomes[i] << endl;

        }
    }

    return 0;
}
