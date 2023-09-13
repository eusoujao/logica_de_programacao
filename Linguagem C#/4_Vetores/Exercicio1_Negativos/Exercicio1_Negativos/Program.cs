/* Professor: Nelio
Descrição: Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio1_Negativos
{
    class Program
    {
        static void Main(string[] args)
        {

            int n, i;
            int[] vet = new int[9];

            Console.Write("Quantos numeros voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            for (i = 0; i < n; i++)
            {

                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());

            };

            Console.WriteLine("NUMEROS NEGATIVOS: ");

            for (i = 0; i < n; i++)
            {

                if (vet[i] < 0)
                {

                    Console.WriteLine(vet[i]);

                }
            }

        }
    }
}