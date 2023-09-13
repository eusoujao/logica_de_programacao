/* Professor: Nelio
Descrição: Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
pela soma dos pesos.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,i;
    double x1, x2, x3, media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    for(i = 1; i <= n; i++){

        cout << "Digite tres numeros: " << endl;
        cin >> x1;
        cin >> x2;
        cin >> x3;

        media = (x1 * 2 + x2 * 3 + x3 * 5) / 10;

        cout << fixed << setprecision(1);
        cout << "MEDIA = " << media << endl;

    };

    return 0;
}
