/* Professor: Nelio
Descri��o: Ler dois n�meros M e N (m�ximo = 10), e depois ler uma matriz MxN de n�meros inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os n�meros negativos da matriz.
Autor(a): Jo�o Renato Sant'Ana
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
