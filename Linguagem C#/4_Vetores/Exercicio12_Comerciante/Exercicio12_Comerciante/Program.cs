/* Professor: Nelio
Descrição: Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio12_Comerciante
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, i, abaixo, entre, acima;
            double totalC, totalV;
            double[] vetP = new double[9];
            double[] vetC = new double[9];
            double[] vetV = new double[9];
            String[] vetN = new String[9];

            Console.Write("Serao digitados dados de quantos produtos? ");
            n = int.Parse(Console.ReadLine());

            abaixo = 0;
            entre = 0;
            acima = 0;
            totalC = 0;
            totalV = 0;

            for (i = 0; i < n; i++)
            {

                Console.WriteLine("Produto " + (i + 1) + ":");
                Console.Write("Nome: ");
                vetN[i] = Console.ReadLine();
                Console.Write("Preco de compra: ");
                vetC[i] = double.Parse(Console.ReadLine(), CI);
                Console.Write("Preco de venda: ");
                vetV[i] = double.Parse(Console.ReadLine(), CI);

                vetP[i] = (100 * vetV[i] / vetC[i]) - 100;

            }

            for (i = 0; i < n; i++)
            {

                if (vetP[i] < 10)
                {

                    abaixo = abaixo + 1;

                }
                else if (vetP[i] > 20)
                {

                    acima = acima + 1;

                }
                else
                {

                    entre = entre + 1;

                }
            }

            for (i = 0; i < n; i++)
            {

                totalC = totalC + vetC[i];
                totalV = totalV + vetV[i];

            }

            Console.WriteLine("\nRELATORIO");
            Console.WriteLine("Lucro abaixo de 10%: " + abaixo);
            Console.WriteLine("Lucro entre de 10% e 20%: " + entre);
            Console.WriteLine("Lucro acima de 20%: " + acima);
            Console.WriteLine("Valor total de compras: " + totalC.ToString("F2", CI));
            Console.WriteLine("Valor total de vendas: " + totalV.ToString("F2", CI));
            Console.WriteLine("Lucro total: " + (totalV - totalC).ToString("F2", CI));

        }
    }
}