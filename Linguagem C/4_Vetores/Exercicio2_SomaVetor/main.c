/* Professor: Nelio
Descrição: Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor
Autor(a): João Renato Sant'Ana
Data atual: 14/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i;
    double soma;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    soma = 0;

    for(i = 0; i < n; i++){

        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);

    }


    printf("\nValores = ");

    for(i = 0; i < n; i++){

        printf("%.1lf ", vet[i]);
        soma = soma + vet[i];

    }

    printf("\n");
    printf("SOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf", (soma / n));



    return 0;
}
