/* Professor: Nelio
Descri��o: Fazer um programa para ler o nome de um(a) funcion�rio(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcion�rio com
uma mensagem explicativa.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string nome;
    double valorPorHora, horasTrab, salario;

    cout << "Nome: ";
    getline (cin, nome);
    cout << "Valor por hora: ";
    cin >> valorPorHora;
    cout << "Horas trabalhadas: ";
    cin >> horasTrab;

    salario = valorPorHora * horasTrab;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << salario;

    return 0;
}
