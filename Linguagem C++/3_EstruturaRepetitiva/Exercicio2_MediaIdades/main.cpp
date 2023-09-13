/* Professor: Nelio
Descrição: Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int idades, soma, quantidadeID;
    double media;

    cout << "Digite as idades: " << endl;
    cin >> idades;

    soma = 0;
    quantidadeID = 0;

    while(idades >= 0){

        soma = soma + idades;
        quantidadeID = quantidadeID + 1;
        cin >> idades;

    }

    if(quantidadeID == 0){

        cout << "IMPOSSIVEL CALCULAR";

    } else {

        media =  (double) soma / quantidadeID;
        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media;

    }



    return 0;
}
