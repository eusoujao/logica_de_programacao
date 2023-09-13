/* Professor: Nelio
Descrição: Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha.
Autor(a): João Renato Sant'Ana
Data atual: 14/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, posMaior, maior;
    char nomes[10][50];
    int idades[10];

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){

        printf("Dados da %da pessoa: \n", i+1);
        printf("Nome: ");
        scanf(" %s", &nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);

    }

    maior = idades[0];
    posMaior = 0;

    for(i = 0; i < n; i++){

        if(idades[i] > maior){

            maior = idades[i];
            posMaior = i;

        }
    }

    printf("PESSOA MAIS VELHA: %s", nomes[posMaior]);

    return 0;
}
