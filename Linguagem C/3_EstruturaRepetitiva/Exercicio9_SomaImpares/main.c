/* Professor: Nelio
Descrição: Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles.
Autor(a): João Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int x, y, troca, soma, i;

    printf("Digite dois numeros: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y){

        troca = x;
        x = y;
        y = troca;

    }

    soma = 0;

    for(i = x+1; i < y; i++){

        if(i%2 != 0){

            soma = soma + i;

        }
    }

    printf("Soma = %d", soma);

    return 0;
}
