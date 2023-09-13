/* Professor: Nelio
Descrição: No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.
Autor(a): João Renato Sant'Ana
Data atual: 06/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double distancia1, distancia2, distancia3, maior;

    printf("Digite as tres distancias: \n");
    scanf("%lf", &distancia1);
    scanf("%lf", &distancia2);
    scanf("%lf", &distancia3);

    if (distancia1 > distancia2 && distancia1 > distancia3){

        maior = distancia1;

    } else if (distancia2 > distancia3){

        maior = distancia2;

    } else {

        maior = distancia3;

    };

    printf("MAIOR DISTANCIA = %.2lf", maior);

    return 0;
}
