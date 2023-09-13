/* Professor: Nelio
Descrição: Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combustível.
Autor(a): João Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int comb, soma1, soma2, soma3;

    soma1 = 0;
    soma2 = 0;
    soma3 = 0;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &comb);

    while(comb != 4){

        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &comb);

        if(comb == 1){

            soma1 = soma1 + 1;

        }else if(comb == 2){

            soma2 = soma2 + 1;

        } else if(comb == 3){

            soma3 = soma3 + 1;

        };
    };

    printf("MUITO OBRIGADO\n");

    printf("Alcool: %d\n", soma1);
    printf("Gasolina: %d\n", soma2);
    printf("Diesel: %d", soma3);

    return 0;
}
