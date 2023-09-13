/* Professor: Nelio
Descrição: Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
se for o caso.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio10_SequenImpares
{
    class Program
    {
        static void Main(string[] args)
        {

            int x, i;

            Console.Write("Digite o valor de X: ");
            x = int.Parse(Console.ReadLine());

            for (i = 1; i <= x; i++)
            {

                if (i % 2 != 0)
                {

                    Console.WriteLine(i);

                }
            }

        }
    }
}