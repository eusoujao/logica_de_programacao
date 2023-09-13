/* Professor: Nelio
Descrição: Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
números podem ser digitados em qualquer ordem.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio10_Multiplos
{
    class Program
    {
        static void Main(string[] args)
        {

            int numero1, numero2, divisao1, divisao2;

            Console.Write("Digite dois numeros inteiros: \n");
            numero1 = int.Parse(Console.ReadLine());
            numero2 = int.Parse(Console.ReadLine());

            divisao1 = numero1 % numero2;
            divisao2 = numero2 % numero1;

            if (divisao1 == 0 || divisao2 == 0)
            {

                Console.Write("Sao multiplos");

            }
            else
            {

                Console.Write("Nao sao multiplos");

            }

        }
    }
}