/* Professor: Nelio
Descri��o: No arremesso de dardo, o atleta tem tr�s chances para lan�ar o dardo � maior dist�ncia que conseguir.
Voc� deve criar um programa para, dadas as medidas das tr�s tentativas de lan�amento, informar qual
foi a maior.
Autor(a): Jo�o Renato Sant'Ana
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
