/* Professor: Nelio
Descri��o: Leia a hora inicial e a hora final de um jogo. A seguir calcule a dura��o do jogo, sabendo que o mesmo
pode come�ar em um dia e terminar em outro, tendo uma dura��o m�nima de 1 hora e m�xima de 24
horas.
Autor(a): Jo�o Renato Sant'Ana
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
