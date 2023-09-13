/* Professor: Nelio
Descrição: Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.
Autor(a): João Renato Sant'Ana
Data atual: 14/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, soma;
    double somaAlt, porcentagem;
    char nomes[10][50];
    int idades[10];
    double alturas[10];

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    somaAlt = 0;
    soma = 0;
    porcentagem = 0;

    for(i = 0; i < n; i++){

        printf("Dados da %da pessoa:\n", (i+1));
        printf("Nome: ");
        scanf(" %s", &nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);

    };

    for(i = 0; i < n; i++){

        somaAlt = somaAlt + alturas[i];

    };

    printf("\nAltura media: %.2lf\n", (somaAlt / n));

    for(i = 0; i < n; i++){

        if(idades[i] < 16){

            soma = soma + 1;

        };
    };

    porcentagem = 100.0 * soma / n;

    printf("Pessoas com menos de 16 anos: %.1lf %%\n", porcentagem);

    for(i = 0; i < n; i++){

        if(idades[i] < 16){

            printf(" %s\n", nomes[i]);

        };
    };


    return 0;
}
