/* Professor: Nelio
Descri��o: Maria acabou de iniciar seu curso de gradua��o na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laborat�rio o qual ela � respons�vel. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laborat�rio e o percentual de cada tipo de cobaia utilizada. Este
laborat�rio em especial utiliza tr�s tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informa��es, ela sabe exatamente o n�mero de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Fa�a um programa que leia um
valor inteiro N que indica os v�rios casos de teste que vem a seguir. Cada caso de teste cont�m um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em rela��o ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois d�gitos ap�s o ponto.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, qtd, soma, c, r, s;
    double pc, pr, ps;
    char cob;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> n;

    c = 0;
    r = 0;
    s = 0;
    soma = 0;

    for(i = 1; i <= n; i++){

        cout << "Quantidade de cobaias: ";
        cin >> qtd;
        cout << "Tipo de cobaias: ";
        cin >> cob;

        soma = soma + qtd;

        if(cob == 'c'){

            c = c + qtd;

        } else if(cob == 'r'){

            r = r + qtd;

        } else if(cob == 's'){

            s = s + qtd;

        }
    }

    pc = (double) c / soma * 100.0;
    pr = (double) r / soma * 100.0;
    ps = (double) s / soma * 100.0;

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "RELATORIO FINAL: " << endl;
    cout << "Total: " << soma << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << pc << endl;
    cout << "Percentual de ratos: " << pr << endl;
    cout << "Percentual de sapos: " << ps << endl;



    return 0;
}
