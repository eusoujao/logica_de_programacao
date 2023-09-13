/* Professor: Nelio
Descri��o: Uma empresa vai conceder um aumento percentual de
sal�rio aos seus funcion�rios dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o sal�rio de uma pessoa, da� mostrar
qual o novo sal�rio desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 06/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int porcentagem;
    double salario, nsalario, aumento;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if (salario <= 1000.00){

        porcentagem = 20;

    } else if (salario <= 3000.00){

        porcentagem = 15;

    } else if (salario <= 8000.00){

        porcentagem = 10;

    } else {

        porcentagem = 5;

    };

    aumento = salario * porcentagem / 100;
    nsalario = salario + aumento;

    printf("Novo salario = R$%.2lf\n", nsalario);
    printf("Aumento = R$%.2lf\n", aumento);
    printf("Porcentagem = %d %%", porcentagem);


    return 0;
}
