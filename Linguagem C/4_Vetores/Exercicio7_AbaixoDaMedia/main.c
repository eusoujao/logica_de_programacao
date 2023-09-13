/* Professor: Nelio
Descrição: Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.
Autor(a): João Renato Sant'Ana
Data atual: 14/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i;
    double soma, media;
    double vet[10];

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    soma = 0;

    for( i = 0; i < n; i++){

        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);

    }

    for(i = 0; i < n; i++){

        soma = soma + vet[i];

    }

    media = soma / n;

    printf("\nMEDIA DO VETOR = %.3lf\n", media);

    printf("ELEMENTOS ABAIXO DA MEDIA: \n");

    for(i = 0; i < n; i++){

        if(vet[i] < media){

            printf("%.1lf\n", vet[i]);

        }
    }



    return 0;
}
