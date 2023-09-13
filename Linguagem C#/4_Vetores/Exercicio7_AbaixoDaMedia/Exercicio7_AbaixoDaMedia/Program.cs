/* Professor: Nelio
Descrição: Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.
Autor(a): João Renato Sant'Ana
Data atual: 25/06/2023 */

using System;
using System.Globalization;

namespace Exercicio7_AbaixoDaMedia
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, i;
            double soma, media;
            double[] vet = new double[9];

            Console.Write("Quantos elementos vai ter o vetor? ");
            n = int.Parse(Console.ReadLine());

            soma = 0;

            for (i = 0; i < n; i++)
            {

                Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);

            }

            for (i = 0; i < n; i++)
            {

                soma = soma + vet[i];

            }

            media = soma / n;

            Console.WriteLine("\nMEDIA DO VETOR = " + media.ToString("F3", CI));

            Console.WriteLine("ELEMENTOS ABAIXO DA MEDIA: ");

            for (i = 0; i < n; i++)
            {

                if (vet[i] < media)
                {

                    Console.WriteLine(vet[i].ToString("F1", CI));

                }
            }

        }
    }
}