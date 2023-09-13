/* Professor: Nelio
Descrição: Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.
Autor(a): João Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int x, y;

    printf("Digite dois numeros: \n ");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y){

        if (x < y){
            printf("CRESCENTE!\n");
        } else {
            printf("DECRESCENTE!\n");
        }

        printf("Digite outros dois numeros: \n");
        scanf("%d", &x);
        scanf("%d", &y);
    }

    return 0;
}
