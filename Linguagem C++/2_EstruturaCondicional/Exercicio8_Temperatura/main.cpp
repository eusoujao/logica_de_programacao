/* Professor: Nelio
Descrição: Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    char escala;
    double temperatura, convercao;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    cout << fixed << setprecision(2);

    if (escala != 'C'){

        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> temperatura;
        convercao = (temperatura - 32) / 1.8;
        cout << "Temperatura equivalente em Celsius: " << convercao;

    } else {

        cout << "Digite a temperatura em Celsius: ";
        cin >> temperatura;
        convercao = temperatura * 1.8 + 32;
        cout <<"Temperatura equivalente em Fahrenheit: " << convercao;

    }

    return 0;
}
