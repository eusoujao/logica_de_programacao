/* Professor: Nelio
Descrição: Leia os valores das coordenadas X e Y de um ponto no plano
cartesiano. A seguir, determine qual o quadrante ao qual pertence o
ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva
“Eixo X” ou “Eixo Y”.
Autor(a): João Renato Sant'Ana
Data atual: 06/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double x, y;

    printf("Valor de X: ");
    scanf("%lf", &x);
    printf("Valor de Y: ");
    scanf("%lf", &y);

    if (x > 0 && y > 0){

        printf("Q1");

    } else if (x < 0 && y < 0){

        printf("Q3");

    } else if (x < 0 && y > 0){

        printf("Q2");

    } else if (x > 0 && y < 0){

        printf("Q4");

    } else if (x == 0 && y == 0){

       printf("Origem");

    } else if (x != 0 && y == 0){

       printf("Eixo X");

    } else {

        printf("Eixo Y");

    };


    return 0;
}
