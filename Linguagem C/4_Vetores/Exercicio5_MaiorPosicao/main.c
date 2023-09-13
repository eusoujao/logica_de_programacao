/* Professor: Nelio
Descri��o: Fa�a um programa que leia N n�meros reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior n�mero do vetor (supor n�o haver empates). Mostrar tamb�m a posi��o do maior elemento,
considerando a primeira posi��o como 0 (zero).
Autor(a): Jo�o Renato Sant'Ana
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
