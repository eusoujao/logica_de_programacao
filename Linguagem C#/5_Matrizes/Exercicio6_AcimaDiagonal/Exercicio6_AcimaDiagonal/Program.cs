/* Professor: Nelio
Descrição: Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de números acima da diagonal
principal é mostrado ao lado (no caso as células com fundo cinza).
Autor(a): João Renato Sant'Ana
Data atual: 25/0672023 */

using System;

namespace Exercicio6_AcimaDiagonal
{
    class Program
    {
        static void Main(string[] args)
        {

            int n, i, j, soma;
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

            soma = 0;

            for (i = 0; i < n; i++)
            {

                for (j = 0; j < n; j++)
                {

                    if (j > i)
                    {

                        soma = soma + mat[i, j];

                    }
                }
            }

            Console.Write("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " + soma);

        }
    }
}