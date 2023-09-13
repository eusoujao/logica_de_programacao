/* Professor: Nelio
Descrição: Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
Autor(a): João Renato Sant'Ana
Data atual: 28/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int m, n, i, j, maior;
    int matA[10][10], matB[10][10], matC[10][10];

    cout << "Quantas linhas vai ter a matriz? ";
    cin >> m;
    cout << "Quantas colunas vai ter a matriz? ";
    cin >> n;

    cout << "Digite os valores da matriz A: " << endl;

    for(i = 0; i < m; i++){

        for(j = 0; j < n; j++){

            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matA[i][j];

        }
    }

    cout << "Digite os valores da matriz B: " << endl;

    for(i = 0; i < m; i++){

        for(j = 0; j < n; j++){

            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matB[i][j];

        }
    }

    cout << "MATRIZ SOMA: " << endl;

    for(i = 0; i < m; i++){

        for(j = 0; j < n; j++){

            matC[i][j] = matA[i][j] + matB[i][j];
            cout << matC[i][j] << " ";

        }

        cout << endl;

    }

    return 0;
}
