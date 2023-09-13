/* Professor: Nelio
Descrição: Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes
números.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

using System;

namespace Exercicio4_Soma
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, y, soma;

            Console.Write("Digite o valor de X: ");
            x = int.Parse(Console.ReadLine());
            Console.Write("Digite o valor de Y: ");
            y = int.Parse(Console.ReadLine());

            soma = x + y;

            Console.WriteLine("Soma = " + soma);

        }
    }
}