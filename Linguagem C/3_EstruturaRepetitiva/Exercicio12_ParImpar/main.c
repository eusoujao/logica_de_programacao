/* Professor: Nelio
Descri��o: Leia um valor inteiro N. Este valor ser� a quantidade de n�meros inteiros que ser�o lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido � PAR ou IMPAR, e tamb�m
se � POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa dever� imprimir
apenas NULO.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, x, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        printf("Digite um numero: ");
        scanf("%d", &x);

        if(x%2 != 0 && x < 0){

            printf("IMPAR NEGATIVO\n");

        }else if(x%2 != 0 && x > 0){

            printf("IMPAR POSITIVO\n");

        }else if(x%2 == 0 && x < 0){

            printf("PAR NEGATIVO\n");

        }else if(x%2 == 0 && x > 0){

            printf("PAR POSITIVO\n");

        }else {

            printf("NULO\n");

        };
    };

    return 0;
}
