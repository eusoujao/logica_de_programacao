/* Professor: Nelio
Descrição: Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
horas.
Autor(a): João Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int hora1, hora2, horaTotal;

    cout << "Hora inicial: ";
    cin >> hora1;
    cout << "Hora final: ";
    cin >> hora2;

    if (hora1 < hora2){

        horaTotal = hora2 - hora1;

    } else {

        horaTotal = (hora2 + 24) - hora1;

    }

    cout << "O JOGO DUROU " << horaTotal << " HORA(S)";

    return 0;
}
