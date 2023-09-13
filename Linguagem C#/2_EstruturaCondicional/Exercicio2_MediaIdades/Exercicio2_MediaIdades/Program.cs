/* Professor: Nelio
Descrição: Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

using System;

namespace Exercicio2_MediaIdades
{
    class Program
    {
        static void Main(string[] args)
        {

            int idades, soma, quantidadeID;
            double media;

            System.out.println("Digite as idades: ");
            idades = sc.nextInt();

            soma = 0;
            quantidadeID = 0;

            while (idades >= 0)
            {

                soma = soma + idades;
                quantidadeID = quantidadeID + 1;
                idades = sc.nextInt();

            }

            if (quantidadeID == 0)
            {

                System.out.print("IMPOSSIVEL CALCULAR");

            }
            else
            {

                media = (double)soma / quantidadeID;
                System.out.print("MEDIA = " + String.format("%.2f", media));

            }

        }
    }
}