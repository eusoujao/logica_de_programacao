/* Professor: Nelio
Descrição:Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
intervalo [0,10]). Cada nota deve ser validada separadamente.
Autor(a): João Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    while(nota1 > 10 || nota1 < 0){

        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &nota1);

    };

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    while(nota2 > 10 || nota2 < 0){

        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &nota2);

    };

    media = (nota1 + nota2) / 2;

    printf("MEDIA = %.2lf", media);

    return 0;
}
