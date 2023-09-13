/* Professor: Nelio
Descrição:Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O
algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio4_Quadrante
{
    class Program
    {
        static void Main(string[] args)
        {

            int x, y;

            Console.WriteLine("Digite os valores das coordenadas X e Y:  ");
            x = int.Parse(Console.ReadLine());
            y = int.Parse(Console.ReadLine());

            while (x != 0 && y != 0)
            {

                if (x > 0 && y > 0)
                {

                    Console.WriteLine("QUADRANTE Q1");

                }
                else if (x < 0 && y > 0)
                {

                    Console.WriteLine("QUADRANTE Q2");

                }
                else if (x < 0 && y < 0)
                {

                    Console.WriteLine("QUADRANTE Q3");

                }
                else
                {

                    Console.WriteLine("QUADRANTE Q4");

                }

                Console.WriteLine("Digite os valores das coordenadas X e Y:  ");
                x = int.Parse(Console.ReadLine());
                y = int.Parse(Console.ReadLine());

            }

        }
    }
}