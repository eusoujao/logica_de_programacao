/* Professor: Nelio
Descrição: Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */


using System;
using System.Globalization;

namespace Exercicio2_SomaVetor
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, i;
            double soma, media;
            double[] vet = new double[9];

            Console.Write("Quantos numeros voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            soma = 0;

            for (i = 0; i < n; i++)
            {

                Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine());

            }


            Console.Write("\nValores = ");

            for (i = 0; i < n; i++)
            {

                Console.Write(vet[i].ToString("F1", CI) + " ");
                soma = soma + vet[i];

            }

            media = soma / n;

            Console.Write("\n");
            Console.WriteLine("SOMA = " + soma.ToString("F2", CI));
            Console.WriteLine("MEDIA = " + media.ToString("F2", CI));

        }
    }
}
