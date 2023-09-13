/* Professor: Nelio
Descri��o: Fazer um programa para ler tr�s medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a �rea do quadrado que tem lado A
b) a �rea do tri�ngulo ret�ngulo que base A e altura B
c) a �rea do trap�zio que tem bases A e B, e altura C
Autor(a): Jo�o Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    double a, b, c, areaQ, areaTri, areaTra;

    cout << "Digite a medida A: ";
    cin >> a;
    cout << "Digite a medida B: ";
    cin >> b;
    cout << "Digite a medida C: ";
    cin >> c;

    areaQ = pow(a , 2);
    areaTri = a * b / 2;
    areaTra = (a + b) * c / 2;

    cout << fixed << setprecision(4);
    cout << "Area do quadrado = " << areaQ << endl;
    cout << "Area do triangulo = " << areaTri << endl;
    cout << "Area do trapezio = " << areaTra << endl;


    return 0;
}

