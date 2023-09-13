/* Professor: Nelio
Descri��o: Fazer um programa para ler os tr�s coeficientes de uma equa��o do segundo grau. Usando a f�rmula
de Baskara, calcular e mostrar os valores das ra�zes x1 e x2 da equa��o com quatro casas decimais,
conforme exemplo. Se a equa��o n�o possuir ra�zes reais, mostrar uma mensagem.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    double a, b, c, x1, x2, delta;

    cout << "Coeficiente a: ";
    cin >> a;
    cout << "Coeficiente b: ";
    cin >> b;
    cout << "Coeficiente c: ";
    cin >> c;

    delta = pow(b, 2) - 4 * a * c;

    if (a == 0 || delta < 0 ){

        cout << "Esta equacao nao possui raizes reais";

    } else {

        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (- b - sqrt(delta)) / (2 * a);

        cout << fixed << setprecision(4);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;

    };


    return 0;
}
