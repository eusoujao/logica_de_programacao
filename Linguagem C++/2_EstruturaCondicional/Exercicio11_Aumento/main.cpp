/* Professor: Nelio
Descri��o: Uma empresa vai conceder um aumento percentual de
sal�rio aos seus funcion�rios dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o sal�rio de uma pessoa, da� mostrar
qual o novo sal�rio desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int porcentagem;
    double salario, nsalario, aumento;

    cout << "Digite o salario da pessoa: ";
    cin >> salario;

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

    cout << fixed << setprecision(2);
    cout << "Novo salario = R$" << nsalario << endl;
    cout << "Aumento = R$" << aumento << endl;
    cout << "Porcentagem = " << porcentagem << "%";


    return 0;
}
