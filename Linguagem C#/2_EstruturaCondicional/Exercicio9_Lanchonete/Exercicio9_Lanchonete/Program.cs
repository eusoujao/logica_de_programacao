/* Professor: Nelio
Descrição: Uma lanchonete possui vários produtos. Cada produto possui um código
e um preço. Você deve fazer um programa para ler o código e a
quantidade comprada de um produto (suponha um código válido), e daí
informar qual o valor a ser pago.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio9_Lanchonete
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int cp, quantidade;
            double preco, pagar;

            Console.Write("Codigo do produto comprado: ");
            cp = int.Parse(Console.ReadLine());
            Console.Write("Quantidade comprada: ");
            quantidade = int.Parse(Console.ReadLine());

            preco = 0;

            switch (cp)
            {

                case 1:
                    preco = 5.00;
                    break;

                case 2:
                    preco = 3.50;
                    break;

                case 3:
                    preco = 4.80;
                    break;

                case 4:
                    preco = 8.90;
                    break;

                case 5:
                    preco = 7.32;
                    break;

            }

            pagar = preco * quantidade;

            Console.Write("Valor a pagar: R$" + pagar.ToString("F2", CI));

        }
    }
}