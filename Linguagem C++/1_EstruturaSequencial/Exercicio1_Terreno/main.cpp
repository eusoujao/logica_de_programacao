/* Professor: Nelio
Descrição: Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    double largura, comprimento, valor, area, preco;

    cout << fixed << setprecision(2);

    cout << "Digite a largura do terreno: ";
    cin >> largura;

    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;

    cout <<"Digite o valor do metro quadrado: ";
    cin >> valor;

    area = largura*comprimento;
    preco = area*valor;

    cout << "Area do terreno = " << area << endl;
    cout << "Preço do terreno = " << preco << endl;


    return 0;
}
