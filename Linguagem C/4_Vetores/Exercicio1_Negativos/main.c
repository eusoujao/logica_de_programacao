/* Professor: Nelio
Descri��o: Fa�a um programa que leia um n�mero inteiro positivo N (m�ximo = 10) e depois N n�meros inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os n�meros negativos lidos.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 14/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for(i = 0; i < n; i++){

        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

    };

    printf("NUMEROS NEGATIVOS: \n");

    for(i = 0; i < n; i++){

        if(vet[i] < 0){

            printf("%d\n", vet[i]);

        };
    };

    return 0;
}
