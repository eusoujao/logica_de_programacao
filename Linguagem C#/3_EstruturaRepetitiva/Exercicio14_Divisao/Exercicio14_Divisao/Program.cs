/* Professor: Nelio
Descrição: Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio14_Divisao
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, i;
            double x1, x2, divisao;

            Console.Write("Quantos casos voce vai digitar: ");
            n = int.Parse(Console.ReadLine());

            for (i = 1; i <= n; i++)
            {

                Console.Write("Entre com um numerador: ");
                x1 = double.Parse(Console.ReadLine(), CI);
                Console.Write("Entre com um denominador: ");
                x2 = double.Parse(Console.ReadLine(), CI);

                if (x2 == 0)
                {

                    Console.WriteLine("DIVISAO IMPOSSIVEL");

                }
                else
                {

                    divisao = x1 / x2;
                    Console.WriteLine("DIVISAO = " + divisao.ToString("F2", CI));

                }
            }

        }
    }
}