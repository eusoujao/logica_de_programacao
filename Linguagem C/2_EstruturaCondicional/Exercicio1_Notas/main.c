/* Professor: Nelio
Descrição: Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO".
Autor(a): João Renato Sant'Ana
Data atual: 06/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double nota1, nota2, notaFinal;

    printf ("Digite a primeira nota: ");
    scanf ("%lf", &nota1);
    printf ("Digite a segunda nota: ");
    scanf ("%lf", &nota2);

    notaFinal = nota1 + nota2;

    if (notaFinal < 60.00) {

        printf("REPROVADO");

    } else {

        printf("APROVADO");

    }





    return 0;
}
