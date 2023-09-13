/* Professor: Nelio
Descrição: Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose.
Autor(a): João Renato Sant'Ana
Data atual: 06/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double glicose;

    printf("Digite a medida de glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100) {

        printf("Classificacao: normal");

    } else if (glicose <= 140) {

        printf("Classificacao: elevado");

    } else {

        printf("Classificacao: diabetes");

    }

    return 0;
}
