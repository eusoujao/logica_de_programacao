/* Professor: Nelio
Descrição: Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio3_MenorDeTres
{
    class Program
    {
        static void Main(string[] args)
        {

            int valor1, valor2, valor3, menor;

            Console.Write("Primeiro valor: ");
            valor1 = int.Parse(Console.ReadLine());
            Console.Write("Segundo valor: ");
            valor2 = int.Parse(Console.ReadLine());
            Console.Write("Terceiro valor: ");
            valor3 = int.Parse(Console.ReadLine());

            if (valor1 < valor2 && valor1 < valor3)
            {

                menor = valor1;

            }
            else if (valor2 < valor3)
            {

                menor = valor2;

            }
            else
            {

                menor = valor3;

            }

            Console.Write("Menor = " + menor);

        }
    }
}