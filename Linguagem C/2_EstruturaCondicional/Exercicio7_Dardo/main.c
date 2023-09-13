/* Professor: Nelio
Descri��o: No arremesso de dardo, o atleta tem tr�s chances para lan�ar o dardo � maior dist�ncia que conseguir.
Voc� deve criar um programa para, dadas as medidas das tr�s tentativas de lan�amento, informar qual
foi a maior.
Autor(a): Jo�o Renato Sant'Ana
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
