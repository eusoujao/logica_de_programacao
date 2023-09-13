/* Professor: Nelio
Descrição: Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio9_MaisVelho
{
    class Program
    {
        static void Main(string[] args)
        {

            int n, i, posMaior, maior;
            String[] nomes = new String[9];
            int[] idades = new int[9];

            Console.Write("Quantas pessoas voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            for (i = 0; i < n; i++)
            {

                Console.WriteLine("Dados da " + (i + 1) + "a pessoa: ");
                Console.Write("Nome: ");
                nomes[i] = Console.ReadLine();
                Console.Write("Idade: ");
                idades[i] = int.Parse(Console.ReadLine());

            }

            maior = idades[0];
            posMaior = 0;

            for (i = 0; i < n; i++)
            {

                if (idades[i] > maior)
                {

                    maior = idades[i];
                    posMaior = i;

                }
            }

            Console.Write("PESSOA MAIS VELHA: " + nomes[posMaior]);

        }
    }
}