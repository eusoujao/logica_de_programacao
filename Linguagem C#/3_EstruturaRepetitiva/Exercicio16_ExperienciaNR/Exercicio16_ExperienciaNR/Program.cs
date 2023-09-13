/* Professor: Nelio
Descrição: Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio16_ExperienciaNR
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, i, qtd, soma, c, r, s;
            double pc, pr, ps;
            char cob;

            Console.Write("Quantos casos de teste serao digitados? ");
            n = int.Parse(Console.ReadLine());

            c = 0;
            r = 0;
            s = 0;
            soma = 0;

            for (i = 1; i <= n; i++)
            {

                Console.Write("Quantidade de cobaias: ");
                qtd = int.Parse(Console.ReadLine());
                Console.Write("Tipo de cobaias: ");
                cob = char.Parse(Console.ReadLine());

                soma = soma + qtd;

                if (cob == 'c')
                {

                    c = c + qtd;

                }
                else if (cob == 'r')
                {

                    r = r + qtd;

                }
                else if (cob == 's')
                {

                    s = s + qtd;

                }
            }

            pc = (double)c / soma * 100.0;
            pr = (double)r / soma * 100.0;
            ps = (double)s / soma * 100.0;

            Console.WriteLine();
            Console.WriteLine("RELATORIO FINAL: ");
            Console.WriteLine("Total: " + soma + " cobaias");
            Console.WriteLine("Total de coelhos: " + c);
            Console.WriteLine("Total de ratos: " + r);
            Console.WriteLine("Total de sapos: " + s);
            Console.WriteLine("Percentual de coelhos: " + pc.ToString("F2", CI));
            Console.WriteLine("Percentual de ratos: " + pr.ToString("F2", CI));
            Console.WriteLine("Percentual de sapos: " + ps.ToString("F2", CI));

        }
    }
}