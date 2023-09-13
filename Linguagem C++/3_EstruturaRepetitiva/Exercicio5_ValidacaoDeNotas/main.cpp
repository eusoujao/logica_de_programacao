/* Professor: Nelio
Descri��o:Fa�a um programa que leia as notas referentes �s duas avalia��es de um aluno. Calcule e imprima a
m�dia semestral. Fa�a com que o algoritmo s� aceite notas v�lidas (uma nota v�lida deve pertencer ao
intervalo [0,10]). Cada nota deve ser validada separadamente.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    double nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    while(nota1 > 10 || nota1 < 0){

        cout << "Valor invalido! Tente novamente: ";
        cin >> nota1;

    };

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    while(nota2 > 10 || nota2 < 0){

        cout << "Valor invalido! Tente novamente: ";
        cin >> nota2;

    };

    media = (nota1 + nota2) / 2;

    cout << fixed << setprecision(2);
    cout << "MEDIA = " << media;

    return 0;
}
