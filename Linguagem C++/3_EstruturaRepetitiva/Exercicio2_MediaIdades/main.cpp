/* Professor: Nelio
Descri��o: Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada um, a idade de um
indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, cont�m um valor de idade negativa. Calcular
e imprimir a idade m�dia deste grupo de indiv�duos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".
Autor(a): Jo�o Renato Sant'Ana
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
