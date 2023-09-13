/* Professor: Nelio
Descri��o: Ler um inteiro N (m�ximo = 10) e uma matriz quadrada de ordem N
contendo n�meros inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de n�meros acima da diagonal
principal � mostrado ao lado (no caso as c�lulas com fundo cinza).
Autor(a): Jo�o Renato Sant'Ana
Data atual: 28/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, j, soma;
    int mat[10][10];

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

            if(j > i){

                soma = soma + mat[i][j];

            }
        }
    }

    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma;

    return 0;
}
