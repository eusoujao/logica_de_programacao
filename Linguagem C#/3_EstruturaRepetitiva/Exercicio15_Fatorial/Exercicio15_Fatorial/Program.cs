/* Professor: Nelio
Descrição: Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio15_Fatorial
{
    class Program
    {
        static void Main(string[] args)
        {

            int n, i, fatorial;

            Console.Write("Digite o valor de N: ");
            n = int.Parse(Console.ReadLine());

            fatorial = 1;

            for (i = 1; i <= n; i++)
            {

                fatorial = fatorial * i;

            };

            Console.Write("FATORIAL = " + fatorial);

        }
    }
}