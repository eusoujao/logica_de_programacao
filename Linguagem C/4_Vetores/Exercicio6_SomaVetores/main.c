/* Professor: Nelio
Descrição: Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado.
Autor(a): João Renato Sant'Ana
Data atual: 14/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i;
    int vetA[10], vetB[10], vetC[10];

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &n);

    printf("Digite os valores do vetor A:\n ");

    for(i = 0; i < n; i++){

        scanf("%d", &vetA[i]);

    }

    printf("Digite os valores do vetor B:\n ");

    for(i = 0; i < n; i++){

        scanf("%d", &vetB[i]);

    }

    printf("VETORES RESULTANTE:\n ");

    for(i = 0; i < n; i++){

        vetC[i] = vetA[i] + vetB[i];
        printf("%d\n", vetC[i]);

    }

    return 0;
}
