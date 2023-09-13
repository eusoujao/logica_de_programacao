/* Professor: Nelio
Descri��o: Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo.
Autor(a): Jo�o Renato Sant'Ana
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
