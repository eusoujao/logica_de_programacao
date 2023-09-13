/* Professor: Nelio
Descri��o: Um posto de combust�veis deseja determinar qual de seus produtos tem a prefer�ncia de seus clientes.
Escreva um algoritmo para ler o tipo de combust�vel abastecido (codificado da seguinte forma:
1.�lcool 2.Gasolina 3.Diesel 4.Fim). Caso o usu�rio informe um c�digo inv�lido (fora da faixa de 1 a
4) deve ser solicitado um novo c�digo (at� que seja v�lido). O programa ser� encerrado quando o
c�digo informado for o n�mero 4, devendo ent�o mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combust�vel.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int comb, soma1, soma2, soma3;

    soma1 = 0;
    soma2 = 0;
    soma3 = 0;

    cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
    cin >> comb;

    while(comb != 4){

        cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
        cin >> comb;

        if(comb == 1){

            soma1 = soma1 + 1;

        }else if(comb == 2){

            soma2 = soma2 + 1;

        } else if(comb == 3){

            soma3 = soma3 + 1;

        };
    };

    cout << "MUITO OBRIGADO" << endl;

    cout << "Alcool: " << soma1 << endl;
    cout << "Gasolina: " << soma2 << endl;
    cout << "Diesel: " << soma3;

    return 0;
}
