/* Professor: Nelio
Descrição: Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio6_SomaVetores
{
    class Program
    {
        static void Main(string[] args)
        {

            int n, i;
            int[] vetA = new int[9];
            int[] vetB = new int[9];
            int[] vetC = new int[9];

            Console.Write("Quantos valores vai ter cada vetor? ");
            n = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite os valores do vetor A: ");

            for (i = 0; i < n; i++)
            {

                vetA[i] = int.Parse(Console.ReadLine());

            }

            Console.WriteLine("Digite os valores do vetor B: ");

            for (i = 0; i < n; i++)
            {

                vetB[i] = int.Parse(Console.ReadLine());

            }

            Console.WriteLine("VETORES RESULTANTE: ");

            for (i = 0; i < n; i++)
            {

                vetC[i] = vetA[i] + vetB[i];
                Console.WriteLine(vetC[i]);

            }

        }
    }
}