/* Professor: Nelio
Descrição: Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.
Autor(a): João Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int minutos;
    double pagar;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    if (minutos < 100){

        pagar = 50.0;

    } else {

        pagar = 50.0 + 2 * (minutos - 100);

    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$" << pagar;




    return 0;
}
