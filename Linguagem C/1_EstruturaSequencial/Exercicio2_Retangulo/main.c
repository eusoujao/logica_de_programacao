/* Professor: Nelio
Descrição: Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com quatro casas decimais.
Autor(a): João Renato Sant'Ana
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
