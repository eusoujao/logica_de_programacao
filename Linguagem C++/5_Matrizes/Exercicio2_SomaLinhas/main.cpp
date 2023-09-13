/* Professor: Nelio
Descrição: Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
Autor(a): João Renato Sant'Ana
Data atual: 28/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int m, n, i, j;
    double mat[10][10];
    double vet[10];

    cout << "Qual a quantidades de linha da matriz? ";
    cin >> m;
    cout << "Qual a quantidades de colunas da matriz? ";
    cin >> n;

    for(i = 0; i < m; i++){

        cout << "Digite os elementos da " << (i+1) << "a linha: " << endl;

        for(j = 0; j < n; j++){

            cin >> mat[i][j];

        }
    }

    for(i = 0; i < m; i++){

        vet[i] = 0;

        for(j = 0; j < n; j++){

            vet[i] = vet[i] + mat[i][j];

        }
    }

    cout << "VETOR GERADO: " << endl;

    for(i = 0; i < m; i++){

        cout << fixed << setprecision(1);
        cout << vet[i] << endl;

    }


    return 0;
}
