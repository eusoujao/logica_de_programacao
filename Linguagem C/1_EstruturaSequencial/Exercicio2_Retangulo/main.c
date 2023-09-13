/* Professor: Nelio
Descri��o: Fazer um programa para ler as medidas da base e altura de um ret�ngulo. Em seguida, mostrar o valor
da �rea, per�metro e diagonal deste ret�ngulo, com quatro casas decimais.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 25/05/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double base, altura, area, perimetro, diagonal;

    printf ("Base do retangulo: ");
    scanf ("%lf", &base);

    printf ("Altura do retangulo: ");
    scanf ("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(altura,2.0)+pow(base,2.0));

    printf ("Area = %.4lf\n", area);
    printf ("Perimetro = %.4lf\n", perimetro);
    printf ("Diagonal = %.4lf\n", diagonal);

    return 0;
}
