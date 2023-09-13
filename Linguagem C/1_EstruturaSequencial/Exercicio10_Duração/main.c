/* Professor: Nelio
Descri��o: Fazer um programa para ler uma dura��o de tempo em segundos, da� imprimir na tela esta dura��o no
formato horas:minutos:segundos.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 30/05/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int segundos, horas, resto, minutos, segundosC;

    printf ("Digite a duracao em segundos: ");
    scanf ("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundosC = resto % 60;

    printf ("%d:%d:%d\n", horas, minutos, segundosC);

    return 0;
}
