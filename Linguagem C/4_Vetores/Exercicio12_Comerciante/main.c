/* Professor: Nelio
Descrição: Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.
Autor(a): João Renato Sant'Ana
Data atual: 14/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, abaixo, entre, acima;
    double totalC, totalV;
    double vetP[10], vetC[10], vetV[10];
    char vetN[10][50];

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &n);

    abaixo = 0;
    entre = 0;
    acima = 0;
    totalC = 0;
    totalV = 0;

    for(i = 0; i < n; i++){

        printf("Produto %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", &vetN[i]);
        printf("Preco de compra: ");
        scanf("%lf", &vetC[i]);
        printf("Preco de venda: ");
        scanf("%lf", &vetV[i]);

        vetP[i] = (100 * vetV[i] / vetC[i]) - 100;

    }

    for(i = 0; i < n; i++){

        if(vetP[i] < 10){

            abaixo = abaixo + 1;

        } else if(vetP[i] > 20){

            acima = acima + 1;

        } else {

            entre = entre  + 1;

        }
    }

    for(i = 0; i < n; i++){

        totalC = totalC + vetC[i];
        totalV = totalV + vetV[i];

    }

    printf("\nRELATORIO\n");
    printf("Lucro abaixo de 10%%: %d\n", abaixo);
    printf("Lucro entre de 10%% e 20%%: %d\n", entre);
    printf("Lucro acima de 20%%: %d\n", acima);
    printf("Valor total de compras: %.2lf\n", totalC);
    printf("Valor total de vendas: %.2lf\n", totalV);
    printf("Lucro total: %.2lf\n", (totalV - totalC));






    return 0;
}
