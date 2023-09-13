/* Professor: Nelio
Descrição: Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis).
Autor(a): João Renato Sant'Ana
Data atual: 14/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i;
    double media;
    char nomes[10][50];
    double notas1[10], notas2[10];

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){

        printf("Digite nome, primeira e segunda nota do %do aluno:\n ", i+1);
        scanf("%s", &nomes[i]);
        scanf("%lf", &notas1[i]);
        scanf("%lf", &notas2[i]);

    }

    printf("ALUNOS APROVADOS: \n");

    for(i = 0; i < n; i++){

        media = (notas1[i] + notas2[i])/2;

        if(media >= 6){

            printf("%s\n", nomes[i]);

        }
    }

    return 0;
}
