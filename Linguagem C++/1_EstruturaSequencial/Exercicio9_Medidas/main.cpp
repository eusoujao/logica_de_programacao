/* Professor: Nelio
Descrição: Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C
Autor(a): João Renato Sant'Ana
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

