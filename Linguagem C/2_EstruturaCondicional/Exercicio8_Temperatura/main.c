/* Professor: Nelio
Descrição: Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 06/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    char escala;
    double temperatura, convercao;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escala);

    if (escala != 'C'){

        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &temperatura);
        convercao = (temperatura - 32) / 1.8;
        printf("Temperatura equivalente em Celsius: %.2lf", convercao);

    } else {

        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &temperatura);
        convercao = temperatura * 1.8 + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf", convercao);

    }

    return 0;
}
