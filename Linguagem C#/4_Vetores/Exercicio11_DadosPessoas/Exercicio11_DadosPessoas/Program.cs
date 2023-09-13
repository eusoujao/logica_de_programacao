/* Professor: Nelio
Descrição: Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio11_DadosPessoas
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, i, homem, mulher;
            double somaM, maior, menor, media;
            double[] vetA = new double[9];
            char[] vetG = new char[9];

            Console.Write("Quantas pessoas serao digitadas? ");
            n = int.Parse(Console.ReadLine());

            for (i = 0; i < n; i++)
            {

                Console.Write("Altura da " + (i + 1) + "a pessoa: ");
                vetA[i] = double.Parse(Console.ReadLine(), CI);
                Console.Write("Genero da " + (i + 1) + "a pessoa (M/F): ");
                vetG[i] = char.Parse(Console.ReadLine());

            }

            somaM = 0;
            mulher = 0;
            homem = 0;

            for (i = 0; i < n; i++)
            {

                if (vetG[i] == 'F')
                {

                    somaM = somaM + vetA[i];
                    mulher = mulher + 1;

                }
                else
                {

                    homem = homem + 1;

                }
            }

            maior = vetA[0];
            menor = vetA[0];

            for (i = 1; i < n; i++)
            {

                if (vetA[i] > maior)
                {

                    maior = vetA[i];

                }

                if (vetA[i] < menor)
                {

                    menor = vetA[i];

                }
            }

            media = somaM / mulher;

            Console.WriteLine("Menor altura = " + menor.ToString("F2", CI));
            Console.WriteLine("Maior altura = " + maior.ToString("F2", CI));
            Console.WriteLine("Media das alturas das mulheres = " + media.ToString("F2", CI));
            Console.Write("Numero de homens = " + homem);

        }
    }
}