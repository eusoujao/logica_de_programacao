/* Professor: Nelio
Descrição: Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio4_Operadora
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int minutos;
            double pagar;

            Console.Write("Digite a quantidade de minutos: ");
            minutos = int.Parse(Console.ReadLine());

            if (minutos < 100)
            {

                pagar = 50.0;

            }
            else
            {

                pagar = 50.0 + 2 * (minutos - 100);

            }

            Console.Write("Valor a pagar: R$" + pagar.ToString("F2", CI));

        }
    }
}