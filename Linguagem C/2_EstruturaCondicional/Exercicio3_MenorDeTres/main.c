/* Professor: Nelio
Descri��o: Fazer um programa para ler tr�s n�meros inteiros. Em seguida, mostrar qual o menor dentre os tr�s
n�meros lidos. Em caso de empate, mostrar apenas uma vez.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 06/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int valor1, valor2, valor3, menor;

    printf("Primeiro valor: ");
    scanf("%d", &valor1);
    printf("Segundo valor: ");
    scanf("%d", &valor2);
    printf("Terceiro valor: ");
    scanf("%d", &valor3);

    if (valor1 < valor2 && valor1 < valor3){

        menor = valor1;

    } else if (valor2 < valor3){

        menor = valor2;

    } else {

        menor = valor3;

    }

    printf("Menor = %d", menor);

    return 0;
}
