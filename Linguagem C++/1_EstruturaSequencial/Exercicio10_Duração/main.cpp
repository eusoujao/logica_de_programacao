/* Professor: Nelio
Descri��o: Fazer um programa para ler uma dura��o de tempo em segundos, da� imprimir na tela esta dura��o no
formato horas:minutos:segundos.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int segundos, horas, resto, minutos, segundosC;

    cout << "Digite a duracao em segundos: ";
    cin >> segundos;

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundosC = resto % 60;

    cout << horas << ":" << minutos << ":" << segundosC << endl;

    return 0;
}
