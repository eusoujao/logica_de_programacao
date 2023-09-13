/* Professor: Nelio
Descrição: Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio5_SomaMatrizes
{
    class Program
    {
        static void Main(string[] args)
        {

            int m, n, i, j;
            int[,] matA = new int[9, 9];
            int[,] matB = new int[9, 9];
            int[,] matC = new int[9, 9];

            Console.Write("Quantas linhas vai ter a matriz? ");
            m = int.Parse(Console.ReadLine());
            Console.Write("Quantas colunas vai ter a matriz? ");
            n = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite os valores da matriz A: ");

            for (i = 0; i < m; i++)
            {

                for (j = 0; j < n; j++)
                {

                    Console.Write("Elemento [" + i + "," + j + "]:");
                    matA[i, j] = int.Parse(Console.ReadLine());

                }
            }

            Console.WriteLine("Digite os valores da matriz B: ");

            for (i = 0; i < m; i++)
            {

                for (j = 0; j < n; j++)
                {

                    Console.Write("Elemento [" + i + "," + j + "]:");
                    matB[i, j] = int.Parse(Console.ReadLine());

                }
            }

            Console.WriteLine("MATRIZ SOMA:");

            for (i = 0; i < m; i++)
            {

                for (j = 0; j < n; j++)
                {

                    matC[i, j] = matA[i, j] + matB[i, j];
                    Console.Write(matC[i, j] + " ");

                }

                Console.WriteLine();

            }

        }
    }
}