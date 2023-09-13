/* Professor: Nelio
Descrição: Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo.
Autor(a): João Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int N, x, fora, dentro, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    fora = 0;
    dentro= 0;

    for(i = 1; i <= N; i++){

        printf("Digite um numero: ");
        scanf("%d", &x);

        if(x >= 10 && x <= 20){

            dentro = dentro + 1;

        }else {

            fora = fora + 1;

        };
    };

    printf("%d Dentro\n", dentro);
    printf("%d Fora", fora);


    return 0;
}
