/* Professor: Nelio
Descri��o: Fazer um programa para ler tr�s medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a �rea do quadrado que tem lado A
b) a �rea do tri�ngulo ret�ngulo que base A e altura B
c) a �rea do trap�zio que tem bases A e B, e altura C
Autor(a): Jo�o Renato Sant'Ana
Data atual: 30/05/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a, b, c, areaQ, areaTri, areaTra;

    printf ("Digite a medida A: ");
    scanf ("%lf", &a);
    printf ("Digite a medida B: ");
    scanf ("%lf", &b);
    printf ("Digite a medida C: ");
    scanf ("%lf", &c);

    areaQ = pow(a , 2);
    areaTri = a * b / 2;
    areaTra = (a + b) * c / 2;

    printf ("Area do quadrado = %.4lf\n", areaQ);
    printf ("Area do triangulo = %.4lf\n", areaTri);
    printf ("Area do trapezio = %.4lf\n", areaTra);


    return 0;
}
