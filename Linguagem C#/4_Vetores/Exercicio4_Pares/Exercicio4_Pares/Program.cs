/* Professor: Nelio
Descrição: Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio4_Pares
{
    class Program
    {
        static void Main(string[] args)
        {

            int n, i, soma;
            int[] vet = new int[9];

            Console.Write("Quantos numeros voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            soma = 0;

            for (i = 0; i < n; i++)
            {

                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());

            }

            Console.WriteLine("\nNUMEROS PARES:");

            for (i = 0; i < n; i++)
            {

                if (vet[i] % 2 == 0)
                {

                    Console.Write(vet[i] + " ");
                    soma = soma + 1;

                }
            }

            Console.WriteLine();
            Console.Write("\nQUANTIDADE DE PARES = " + soma);

        }
    }
}