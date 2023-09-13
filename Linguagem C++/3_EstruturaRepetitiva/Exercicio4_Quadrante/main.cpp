/* Professor: Nelio
Descrição:Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O
algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, y;

    cout << "Digite os valores das coordenadas X e Y: " << endl;
    cin >> x;
    cin >> y;

    while(x != 0 && y != 0){

        if(x > 0 && y > 0){

            cout << "QUADRANTE Q1" << endl;

        }else if(x < 0 && y > 0){

            cout << "QUADRANTE Q2" << endl;

        }else if(x < 0 && y < 0){

            cout << "QUADRANTE Q3" << endl;

        }else {

            cout << "QUADRANTE Q4" << endl;

        };

        cout << "Digite os valores das coordenadas X e Y: " << endl;
        cin >> x;
        cin >> y;

    };

    return 0;
}
