/* Professor: Nelio
Descri��o: Ler um inteiro N e uma matriz quadrada de ordem N (m�ximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha n�o haver empates
Autor(a): Jo�o Renato Sant'Ana
Data atual: 28/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, j, maior;
    int mat[10][10];

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];

        }
    }

    cout << "MAIOR ELEMENTO DE CADA LINHA: " << endl;

    for(i = 0; i < n; i++){

        maior = 0;

        for(j = 0; j < n; j++){

            if(mat[i][j] > maior){

                maior = mat[i][j];

            }
        }

        cout << maior << endl;

    }

    return 0;
}
