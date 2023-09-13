/* Professor: Nelio
Descrição: Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio3_Alturas
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, i, soma;
            double somaAlt, porcentagem, med;
            String[] nomes = new String[9];
            int[] idades = new int[9];
            double[] alturas = new double[9];

            Console.Write("Quantas pessoas serao digitadas? ");
            n = int.Parse(Console.ReadLine());

            somaAlt = 0;
            soma = 0;
            porcentagem = 0;

            for (i = 0; i < n; i++)
            {

                Console.WriteLine("Dados da " + (i + 1) + "a pessoa:");
                Console.Write("Nome: ");
                nomes[i] = Console.ReadLine();
                Console.Write("Idade: ");
                idades[i] = int.Parse(Console.ReadLine());
                Console.Write("Altura: ");
                alturas[i] = double.Parse(Console.ReadLine(), CI);

            }

            for (i = 0; i < n; i++)
            {

                somaAlt = somaAlt + alturas[i];

            }

            med = somaAlt / n;

            Console.WriteLine("\nAltura media: " + med.ToString("F2", CI));

            for (i = 0; i < n; i++)
            {

                if (idades[i] < 16)
                {

                    soma = soma + 1;

                }
            }

            porcentagem = 100.0 * soma / n;

            Console.WriteLine("Pessoas com menos de 16 anos: " + porcentagem.ToString("F1", CI) + "%");

            for (i = 0; i < n; i++)
            {

                if (idades[i] < 16)
                {

                    Console.WriteLine(nomes[i]);

                }
            }

        }
    }
}