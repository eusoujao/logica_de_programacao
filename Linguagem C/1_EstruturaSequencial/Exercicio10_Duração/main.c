/* Professor: Nelio
Descrição: Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
formato horas:minutos:segundos.
Autor(a): João Renato Sant'Ana
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
