/* Professor: Nelio
Descrição: No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.
Autor(a): João Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    double distancia1, distancia2, distancia3, maior;

    cout << "Digite as tres distancias: " << endl;
    cin >> distancia1;
    cin >> distancia2;
    cin >> distancia3;

    if (distancia1 > distancia2 && distancia1 > distancia3){

        maior = distancia1;

    } else if (distancia2 > distancia3){

        maior = distancia2;

    } else {

        maior = distancia3;

    };

    cout << fixed << setprecision(2);
    cout << "MAIOR DISTANCIA = " << maior;

    return 0;
}
