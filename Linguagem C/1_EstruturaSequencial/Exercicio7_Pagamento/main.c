/* Professor: Nelio
Descri��o: Fazer um programa para ler o nome de um(a) funcion�rio(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcion�rio com
uma mensagem explicativa.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 30/05/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    char nome[50];
    double valorPorHora, horasTrab, salario;

    printf ("Nome: ");
    gets (nome);
    printf ("Valor por hora: ");
    scanf ("%lf", &valorPorHora);
    printf ("Horas trabalhadas: ");
    scanf ("%lf", &horasTrab);

    salario = valorPorHora * horasTrab;

    printf ("O pagamento para %s deve ser %.2lf", nome, salario);

    return 0;
}
