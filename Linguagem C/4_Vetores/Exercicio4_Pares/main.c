/* Professor: Nelio
Descri��o: Fa�a um programa que leia N n�meros inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os n�meros pares, e tamb�m a quantidade de n�meros pares.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 14/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, soma;
    int vet[10];

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    soma = 0;

    for(i = 0; i < n; i++)
    {

        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

    }

    printf("\nNUMEROS PARES:\n");

    for(i = 0; i < n; i++)
    {

        if(vet[i]%2 == 0)
        {

            printf("%d ", vet[i]);
            soma = soma + 1;

        }
    }

    printf("\n");
    printf("\nQUANTIDADE DE PARES = %d", soma);

    return 0;
}
