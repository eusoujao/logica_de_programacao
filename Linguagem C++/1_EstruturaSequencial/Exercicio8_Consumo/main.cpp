/* Professor: Nelio
Descri��o: Fazer um programa para ler a dist�ncia total (em km) percorrida por um carro, bem como o total de
combust�vel gasto por este carro ao percorrer tal dist�ncia. Seu programa deve mostrar o consumo
m�dio do carro, com tr�s casas decimais.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    double distancia, combustivel, consumo;

    cout << "Distancia percorrida: ";
    cin >> distancia;
    cout << "Combustivel gasto: ";
    cin >> combustivel;

    consumo = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumo;

    return 0;
}
