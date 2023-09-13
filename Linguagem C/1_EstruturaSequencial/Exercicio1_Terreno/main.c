/* Professor: Nelio
Descri��o: Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da �rea do terreno, bem como o valor do pre�o do terreno, ambos com
duas casas decimais.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 25/05/2023 */

#include <stdio.h>

int main()
{

    double largura, comprimento, valor, area, preco;

    printf ("Digite a largura do terreno: ");
    scanf ("%lf", &largura);

    printf ("Digite o comprimento do terreno: ");
    scanf ("%lf", &comprimento);

    printf ("Digite o valor do metro quadrado: ");
    scanf ("%lf", &valor);

    area = largura*comprimento;
    preco = area*valor;

    printf ("Area do terreno = %.2lf\n", area);
    printf ("Pre�o do terreno = %.2lf\n", preco);


    return 0;
}
