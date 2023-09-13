/* Professor: Nelio
Descrição: Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero).
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio5_MaiorPosicao
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, i, posicao;
            double maior;
            double[] vet = new double[9];

            Console.Write("Quantos numeros voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            posicao = 0;

            for (i = 0; i < n; i++)
            {

                Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);

            }

            maior = vet[0];

            for (i = 1; i < n; i++)
            {

                if (vet[i] > maior)
                {

                    maior = vet[i];
                    posicao = i;

                }
            }

            Console.WriteLine();
            Console.WriteLine("MAIOR VALOR = " + maior.ToString("F1", CI));
            Console.Write("POSICAO DO MAIOR VALOR = " + posicao);

        }
    }
}