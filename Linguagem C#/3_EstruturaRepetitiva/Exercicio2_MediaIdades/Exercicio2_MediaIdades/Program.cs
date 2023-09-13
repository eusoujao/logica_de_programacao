/* Professor: Nelio
Descrição: Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio2_MediaIdades
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int idades, soma, quantidadeID;
            double media;

            Console.WriteLine("Digite as idades: ");
            idades = int.Parse(Console.ReadLine());

            soma = 0;
            quantidadeID = 0;

            while (idades >= 0)
            {

                soma = soma + idades;
                quantidadeID = quantidadeID + 1;
                idades = int.Parse(Console.ReadLine());

            }

            if (quantidadeID == 0)
            {

                Console.Write("IMPOSSIVEL CALCULAR");

            }
            else
            {

                media = (double)soma / quantidadeID;
                Console.Write("MEDIA = " + media.ToString("F2", CI));

            }

        }
    }
}