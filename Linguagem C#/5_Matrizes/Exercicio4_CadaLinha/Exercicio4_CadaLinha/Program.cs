/* Professor: Nelio
Descrição: Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha não haver empates
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio4_CadaLinha
{
    class Program
    {
        static void Main(string[] args)
        {

            int n, i, j, maior;
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

            Console.WriteLine("MAIOR ELEMENTO DE CADA LINHA: ");

            for (i = 0; i < n; i++)
            {

                maior = 0;

                for (j = 0; j < n; j++)
                {

                    if (mat[i, j] > maior)
                    {

                        maior = mat[i, j];

                    }
                }

                Console.WriteLine(maior);

            }

        }
    }
}