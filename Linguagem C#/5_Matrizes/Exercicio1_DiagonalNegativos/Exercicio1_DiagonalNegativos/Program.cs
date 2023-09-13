/* Professor: Nelio
Descrição: Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio1_DiagonalNegativos
{
    class Program
    {
        static void Main(string[] args)
        {

            int n, i, j, neg;
            int[,] mat = new int[9, 9];

            Console.Write("Qual a ordem da matriz? ");
            n = int.Parse(Console.ReadLine());

            for (i = 0; i < n; i++)
            {

                for (j = 0; j < n; j++)
                {

                    Console.Write("Elemento [" + i + "," + j + "]:");
                    mat[i, j] = int.Parse(Console.ReadLine());

                }
            }

            Console.WriteLine("DIAGONAL PRINCIPAL");

            for (i = 0; i < n; i++)
            {

                for (j = 0; j < n; j++)
                {

                    if (i == j)
                    {

                        Console.Write(mat[i, j] + " ");

                    }
                }
            }

            neg = 0;

            for (i = 0; i < n; i++)
            {

                for (j = 0; j < n; j++)
                {

                    if (mat[i, j] < 0)
                    {

                        neg = neg + 1;

                    }
                }
            }

            Console.WriteLine();
            Console.Write("QUANTIDADE DE NEGATIVOS = " + neg);

        }
    }
}