/* Professor: Nelio
Descrição: Uma empresa vai conceder um aumento percentual de
salário aos seus funcionários dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o salário de uma pessoa, daí mostrar
qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.
Autor(a): João Renato Sant'Ana
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
