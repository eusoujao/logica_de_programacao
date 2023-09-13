/* Professor: Nelio
Descri��o: Maria acabou de iniciar seu curso de gradua��o na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laborat�rio o qual ela � respons�vel. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laborat�rio e o percentual de cada tipo de cobaia utilizada. Este
laborat�rio em especial utiliza tr�s tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informa��es, ela sabe exatamente o n�mero de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Fa�a um programa que leia um
valor inteiro N que indica os v�rios casos de teste que vem a seguir. Cada caso de teste cont�m um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em rela��o ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois d�gitos ap�s o ponto.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, qtd, soma, c, r, s;
    double pc, pr, ps;
    char cob;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &n);

    c = 0;
    r = 0;
    s = 0;
    soma = 0;

    for(i = 1; i <= n; i++){

        printf("Quantidade de cobaias: ");
        scanf("%d", &qtd);
        printf("Tipo de cobaias: ");
        scanf(" %c", &cob);

        soma = soma + qtd;

        if(cob == 'c'){

            c = c + qtd;

        } else if(cob == 'r'){

            r = r + qtd;

        } else if(cob == 's'){

            s = s + qtd;

        }
    }

    pc = (double) c / soma * 100.0;
    pr = (double) r / soma * 100.0;
    ps = (double) s / soma * 100.0;

    printf("\n");
    printf("RELATORIO FINAL: \n");
    printf("Total: %d cobaias\n", soma);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2lf\n", pc);
    printf("Percentual de ratos: %.2lf\n", pr);
    printf("Percentual de sapos: %.2lf\n", ps);



    return 0;
}
