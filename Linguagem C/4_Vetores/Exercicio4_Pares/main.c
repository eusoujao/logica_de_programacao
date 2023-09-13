/* Professor: Nelio
Descrição: Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares.
Autor(a): João Renato Sant'Ana
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
