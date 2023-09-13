/* Professor: Nelio
Descrição: Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".
Autor(a): João Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int idades, soma, quantidadeID;
    double media;

    printf("Digite as idades:\n ");
    scanf("%d", &idades);

    soma = 0;
    quantidadeID = 0;

    while(idades >= 0){

        soma = soma + idades;
        quantidadeID = quantidadeID + 1;
        scanf("%d", &idades);

    }

    if(quantidadeID == 0){

        printf("IMPOSSIVEL CALCULAR");

    } else {

        media =  (double) soma / quantidadeID;
        printf("MEDIA = %.2lf", media);

    }



    return 0;
}
