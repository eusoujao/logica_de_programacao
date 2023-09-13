/* Professor: Nelio
Descrição: Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR".
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio8_MediasPares
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, i, somaV;
            double somaM, media;
            int[] vet = new int[9];

            Console.Write("Quantos elementos vai ter o vetor? ");
            n = int.Parse(Console.ReadLine());

            somaM = 0;
            somaV = 0;

            for (i = 0; i < n; i++)
            {

                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());

            }

            for (i = 0; i < n; i++)
            {

                if (vet[i] % 2 == 0)
                {

                    somaV = somaV + vet[i];
                    somaM = somaM + 1;

                }
            }

            media = somaV / somaM;

            if (somaV == 0)
            {

                Console.Write("NENHUM NUMERO PAR");

            }
            else
            {

                Console.Write("MEDIA DOS PARES = " + media.ToString("F1", CI));

            }

        }
    }
}