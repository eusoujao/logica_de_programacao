/* Professor: Nelio
Descrição: Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
horas.
Autor(a): João Renato Sant'Ana
Data atual: 06/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int hora1, hora2, horaTotal;

    printf("Hora inicial: ");
    scanf("%d", &hora1);
    printf("Hora final: ");
    scanf("%d", &hora2);

    if (hora1 < hora2){

        horaTotal = hora2 - hora1;

    } else {

        horaTotal = (hora2 + 24) - hora1;

    }

    printf("O JOGO DUROU %d HORA(S)", horaTotal);

    return 0;
}
