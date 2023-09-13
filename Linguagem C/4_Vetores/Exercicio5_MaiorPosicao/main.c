/* Professor: Nelio
Descrição: Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero).
Autor(a): João Renato Sant'Ana
Data atual: 14/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, posicao;
    double maior;
    double vet[10];

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    posicao = 0;

    for(i = 0; i < n; i++){

        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);

    }

    maior = vet[0];

    for(i = 1; i < n; i++){

        if(vet[i] > maior){

            maior = vet[i];
            posicao = i;

        }
    }

    printf("\n");
    printf("MAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d", posicao);

    return 0;
}
