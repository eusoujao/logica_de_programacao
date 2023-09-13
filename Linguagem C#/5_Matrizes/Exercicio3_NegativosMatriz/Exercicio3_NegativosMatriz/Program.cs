/* Professor: Nelio
Descrição: Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio3_NegativosMatriz
{
    class Program
    {
        static void Main(string[] args)
        {

            int m, n, i, j;
            int[,] mat = new int[9, 9];

            Console.Write("Qual a quantidades de linha da matriz? ");
            m = int.Parse(Console.ReadLine());
            Console.Write("Qual a quantidades de colunas da matriz? ");
            n = int.Parse(Console.ReadLine());

            for (i = 0; i < m; i++)
            {

                for (j = 0; j < n; j++)
                {

                    Console.Write("Elemento [" + i + "," + j + "]:");
                    mat[i, j] = int.Parse(Console.ReadLine());

                }
            }

            Console.WriteLine("VALORES NEGATIVOS:");

            for (i = 0; i < m; i++)
            {

                for (j = 0; j < n; j++)
                {

                    if (mat[i, j] < 0)
                    {

                        Console.WriteLine(mat[i, j]);

                    }
                }
            }

        }
    }
}