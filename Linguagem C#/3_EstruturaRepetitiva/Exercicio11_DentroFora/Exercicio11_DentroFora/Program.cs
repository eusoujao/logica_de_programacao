/* Professor: Nelio
Descrição: Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio11_DentroFora
{
    class Program
    {
        static void Main(string[] args)
        {

            int N, x, fora, dentro, i;

            Console.Write("Quantos numeros voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            fora = 0;
            dentro = 0;

            for (i = 1; i <= N; i++)
            {

                Console.Write("Digite um numero: ");
                x = int.Parse(Console.ReadLine());

                if (x >= 10 && x <= 20)
                {

                    dentro = dentro + 1;

                }
                else
                {

                    fora = fora + 1;

                };
            };

            Console.WriteLine(dentro + " Dentro");
            Console.Write(fora + " Fora");

        }
    }
}