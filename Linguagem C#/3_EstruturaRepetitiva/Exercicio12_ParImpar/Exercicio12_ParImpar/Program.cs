/* Professor: Nelio
Descrição: Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
apenas NULO.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio12_ParImpar
{
    class Program
    {
        static void Main(string[] args)
        {

            int n, x, i;

            Console.Write("Quantos numeros voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            for (i = 1; i <= n; i++)
            {

                Console.Write("Digite um numero: ");
                x = int.Parse(Console.ReadLine());

                if (x % 2 != 0 && x < 0)
                {

                    Console.WriteLine("IMPAR NEGATIVO");

                }
                else if (x % 2 != 0 && x > 0)
                {

                    Console.WriteLine("IMPAR POSITIVO");

                }
                else if (x % 2 == 0 && x < 0)
                {

                    Console.WriteLine("PAR NEGATIVO");

                }
                else if (x % 2 == 0 && x > 0)
                {

                    Console.WriteLine("PAR POSITIVO");

                }
                else
                {

                    Console.WriteLine("NULO");

                }
            }

        }
    }
}