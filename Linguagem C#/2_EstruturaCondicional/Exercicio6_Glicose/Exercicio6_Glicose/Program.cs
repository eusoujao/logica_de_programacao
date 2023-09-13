/* Professor: Nelio
Descrição: Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio6_Glicose
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double glicose;

            Console.Write("Digite a medida de glicose: ");
            glicose = double.Parse(Console.ReadLine(), CI);

            if (glicose <= 100)
            {

                Console.Write("Classificacao: normal");

            }
            else if (glicose <= 140)
            {

                Console.Write("Classificacao: elevado");

            }
            else
            {

                Console.Write("Classificacao: diabetes");

            }

        }
    }
}