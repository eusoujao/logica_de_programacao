/* Professor: Nelio
Descri��o: Fazer um programa para ler a dist�ncia total (em km) percorrida por um carro, bem como o total de
combust�vel gasto por este carro ao percorrer tal dist�ncia. Seu programa deve mostrar o consumo
m�dio do carro, com tr�s casas decimais.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 30/05/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

    double distancia, combustivel, consumo;

    printf ("Distancia percorrida: ");
    scanf ("%lf", &distancia);
    printf ("Combustivel gasto: ");
    scanf ("%lf", &combustivel);

    consumo = distancia / combustivel;

    printf ("Consumo medio = %.3lf", consumo);

    return 0;
}
