/* Professor: Nelio
Descrição: Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
Autor(a): João Renato Sant'Ana
Data atual: 19/07/2023 */

using System;
using System.Globalization;

namespace Exercicio2_SomaLinhas
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int m, n, i, j;
            double[,] mat = new double[9, 9];
            double[] vet = new double[9];

            Console.Write("Qual a quantidades de linha da matriz? ");
            m = int.Parse(Console.ReadLine());
            Console.Write("Qual a quantidades de colunas da matriz? ");
            n = int.Parse(Console.ReadLine());

            for (i = 0; i < m; i++)
            {

                Console.WriteLine("Digite os elementos da " + (i + 1) + "a linha: ");

                for (j = 0; j < n; j++)
                {

                    mat[i, j] = double.Parse(Console.ReadLine(), CI);

                }
            }

            for (i = 0; i < m; i++)
            {

                vet[i] = 0;

                for (j = 0; j < n; j++)
                {

                    vet[i] = vet[i] + mat[i, j];

                }
            }

            Console.WriteLine("VETOR GERADO: ");

            for (i = 0; i < m; i++)
            {

                Console.WriteLine(vet[i].ToString("F1", CI));

            }

        }
    }
}