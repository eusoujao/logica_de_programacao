/* Professor: Nelio
Descrição: Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
Autor(a): João Renato Sant'Ana
Data atual: 28/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, j, neg;
    int mat[10][10];

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            cout << "Elemento [" << i << "," << j << "]:";
            cin >> mat[i][j];

        }
    }

    cout << "DIAGONAL PRINCIPAL" << endl;

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            if(i == j){

                cout << mat[i][j] << " ";

            }
        }
    }

    neg = 0;

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            if(mat[i][j] < 0){

                neg = neg + 1;

            }
        }
    }

    cout << endl;
    cout << "QUANTIDADE DE NEGATIVOS = " << neg;

    return 0;
}
