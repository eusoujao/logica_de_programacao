/* Professor: Nelio
Descrição: Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais.
Autor(a): João Renato Sant'Ana
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
