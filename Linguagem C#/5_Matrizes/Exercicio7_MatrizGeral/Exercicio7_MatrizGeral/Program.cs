/* Professor: Nelio
Descrição: Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio7_MatrizGeral
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, i, j, linha, coluna;
            double soma;
            double[,] mat = new double[9, 9];
            double[,] matAlt = new double[9, 9];

            Console.Write("Qual a ordem da matriz? ");
            n = int.Parse(Console.ReadLine());

            for (i = 0; i < n; i++)
            {

                for (j = 0; j < n; j++)
                {

                    Console.Write("Elemento [" + i + "," + j + "]:");
                    mat[i, j] = double.Parse(Console.ReadLine(), CI);

                }
            }

            soma = 0;

            for (i = 0; i < n; i++)
            {

                for (j = 0; j < n; j++)
                {

                    if (mat[i, j] > 0)
                    {

                        soma = soma + mat[i, j];

                    }
                }
            }

            Console.WriteLine("\nSOMA DOS POSITIVOS: " + soma.ToString("F1", CI));

            Console.Write("\nEscolha uma linha: ");
            linha = int.Parse(Console.ReadLine());
            Console.Write("LINHA ESCOLHIDA: ");


            for (j = 0; j < n; j++)
            {

                Console.Write(mat[linha, j].ToString("F1", CI) + " ");

            }

            Console.WriteLine();
            Console.Write("\nEscolha uma coluna: ");
            coluna = int.Parse(Console.ReadLine());
            Console.Write("COLUNA ESCOLHIDA: ");


            for (i = 0; i < n; i++)
            {

                Console.Write(mat[i, coluna].ToString("F1", CI) + " ");

            }

            Console.WriteLine();
            Console.Write("\nDIAGONAL PRINCIPAL: ");

            for (i = 0; i < n; i++)
            {

                Console.Write(mat[i, i].ToString("F1", CI) + " ");

            }

            Console.WriteLine();
            Console.WriteLine("\nMATRIZ ALTERNADA:  ");

            for (i = 0; i < n; i++)
            {

                for (j = 0; j < n; j++)
                {

                    if (mat[i, j] < 0)
                    {

                        matAlt[i, j] = Math.Pow(mat[i, j], 2);

                    }
                    else
                    {

                        matAlt[i, j] = mat[i, j];

                    }

                    Console.Write(matAlt[i, j].ToString("F1", CI) + " ");

                }

                Console.WriteLine();

            }

        }
    }
}