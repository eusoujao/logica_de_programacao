/* Professor: Nelio
Descri��o: Fazer um programa para ler um vetor de N n�meros inteiros. Em seguida, mostrar na tela a m�dia
aritm�tica somente dos n�meros pares lidos, com uma casa decimal. Se nenhum n�mero par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR".
Autor(a): Jo�o Renato Sant'Ana
Data atual: 14/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, somaV;
    double somaM, media;
    int vet[10];

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    somaM = 0;
    somaV = 0;

    for(i = 0; i < n; i++){

        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

    }

    for(i = 0; i < n; i++){

        if(vet[i]%2 == 0){

            somaV = somaV + vet[i];
            somaM = somaM + 1;

        }
    }

    media = somaV / somaM;

    if(somaV == 0){

        printf("NENHUM NUMERO PAR");

    } else {

        printf("MEDIA DOS PARES = %.1lf", media);

    }



    return 0;
}
