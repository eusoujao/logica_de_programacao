/* Professor: Nelio
Descrição: Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, abaixo, entre, acima;
    double totalC, totalV;
    double vetP[10], vetC[10], vetV[10];
    string vetN[10];

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> n;

    abaixo = 0;
    entre = 0;
    acima = 0;
    totalC = 0;
    totalV = 0;

    for(i = 0; i < n; i++){

        cout << "Produto " << i+1 << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, vetN[i]);
        cout << "Preco de compra: ";
        cin >> vetC[i];
        cout << "Preco de venda: ";
        cin >> vetV[i];

        vetP[i] = (100 * vetV[i] / vetC[i]) - 100;

    }

    for(i = 0; i < n; i++){

        if(vetP[i] < 10){

            abaixo = abaixo + 1;

        } else if(vetP[i] > 20){

            acima = acima + 1;

        } else {

            entre = entre  + 1;

        }
    }

    for(i = 0; i < n; i++){

        totalC = totalC + vetC[i];
        totalV = totalV + vetV[i];

    }

    cout << endl << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: " << abaixo << endl;
    cout << "Lucro entre de 10% e 20%: " << entre << endl;
    cout << "Lucro acima de 20%: " << acima << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compras: " << totalC << endl;
    cout << "Valor total de vendas: " << totalV << endl;
    cout << "Lucro total: " << (totalV - totalC) << endl;






    return 0;
}
