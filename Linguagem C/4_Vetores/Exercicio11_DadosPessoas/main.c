/* Professor: Nelio
Descrição: Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.
Autor(a): João Renato Sant'Ana
Data atual: 14/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, homem, mulher;
    double somaM, maior, menor, media;
    double vetA[10];
    char vetG[10];

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){

        printf("Altura da %da pessoa: ", i+1);
        scanf("%lf", &vetA[i]);
        printf("Genero da %da pessoa (M/F): ");
        scanf(" %c", &vetG[i]);

    }

    somaM = 0;
    mulher = 0;
    homem = 0;

    for(i = 0; i < n; i++){

        if(vetG[i] == 'F'){

            somaM = somaM + vetA[i];
            mulher = mulher + 1;

        } else {

            homem = homem + 1;

        }
    }

    maior = vetA[0];
    menor = vetA[0];

    for(i = 1; i < n; i++){

        if(vetA[i] > maior){

            maior = vetA[i];

        }

        if(vetA[i] < menor){

            menor = vetA[i];

        }
    }

    media = somaM/mulher;

    printf("Menor altura = %.2lf\n", menor);
    printf("Maior altura = %.2lf\n", maior);
    printf("Media das alturas das mulheres = %.2lf\n", media);
    printf("Numero de homens = %d", homem);



    return 0;
}
