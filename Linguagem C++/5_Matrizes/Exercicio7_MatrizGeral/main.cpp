/* Professor: Nelio
Descrição: Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.
Autor(a): João Renato Sant'Ana
Data atual: 28/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, j, linha, coluna;
    double soma;
    double mat[10][10], matAlt[10][10];

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];

        }
    }

    soma = 0;

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            if(mat[i][j] > 0){

                soma = soma + mat[i][j];

            }
        }
    }

    cout << fixed << setprecision(1);
    cout << endl << "SOMA DOS POSITIVOS: " << soma << endl;

    cout << endl << "Escolha uma linha: ";
    cin >> linha;
    cout << "LINHA ESCOLHIDA: ";


    for(j = 0; j < n; j++){

        cout <<  mat[linha][j] << " ";

    }

    cout << endl;
    cout << endl << "Escolha uma coluna: ";
    cin >> coluna;
    cout << "COLUNA ESCOLHIDA: ";


    for(i = 0; i < n; i++){

        cout << mat[i][coluna] << " ";

    }

    cout << endl;
    cout << endl << "DIAGONAL PRINCIPAL: ";


    for(i = 0; i < n; i++){

        cout << mat[i][i] << " ";

    }

    cout << endl;
    cout << endl << "MATRIZ ALTERNADA: " << endl;

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            if(mat[i][j] < 0){

                matAlt[i][j] = pow(mat[i][j], 2);

            }else {

                matAlt[i][j] = mat[i][j];

            }

            cout << matAlt[i][j] << " ";

        }

        cout << endl;

    }


    return 0;
}
