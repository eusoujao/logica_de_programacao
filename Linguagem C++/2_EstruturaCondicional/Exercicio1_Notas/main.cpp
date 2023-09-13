/* Professor: Nelio
Descrição: Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO".
Autor(a): João Renato Sant'Ana
Data atual: 26/06/2023 */

#include <iostream>

using namespace std;

int main()
{

    double nota1, nota2, notaFinal;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    notaFinal = nota1 + nota2;

    if (notaFinal < 60.00) {

        cout << "REPROVADO";

    } else {

        cout << "APROVADO";

    }

    return 0;
}
