/* Professor: Nelio
Descrição: Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.
Autor(a): João Renato Sant'Ana
Data atual: 28/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int m, n, i, j;
    int mat[10][10];

    cout << "Qual a quantidades de linha da matriz? ";
    cin >> m;
    cout << "Qual a quantidades de colunas da matriz? ";
    cin >> n;

    for(i = 0; i < m; i++){

        for(j = 0; j < n; j++){

            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];

        }
    }

    cout << "VALORES NEGATIVOS: " << endl;

    for(i = 0; i < m; i++){

        for(j = 0; j < n; j++){

            if(mat[i][j] < 0){

                cout << mat[i][j] << endl;

            }
        }
    }

    return 0;
}
