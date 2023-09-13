/* Professor: Nelio
Descrição: Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio8_Tabuada
{
    class Program
    {
        static void Main(string[] args)
        {

            int n, i;

            Console.Write("Deseja a tabuada para qual valor?");
            n = int.Parse(Console.ReadLine());

            for (i = 1; i <= 10; i++)
            {

                Console.WriteLine(n + " X " + i + " = " + (n * i));

            }

        }
    }
}
