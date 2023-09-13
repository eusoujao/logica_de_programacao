/* Professor: Nelio
Descrição: Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
círculo com três casas decimais. A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋. 𝑟2. Você pode
usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
diretamente o valor 3.14159.
Autor(a): João Renato Sant'Ana
Data atual: 30/05/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double raio, area;

    printf ("Digite o valor do raio do circulo: ");
    scanf ("%lf", &raio);

    area = 3.14159 * pow(raio, 2.0);

    printf ("Area = %.3lf", area);

    return 0;
}
