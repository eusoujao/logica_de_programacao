/* Professor: Nelio
Descrição: Leia os valores das coordenadas X e Y de um ponto no plano
cartesiano. A seguir, determine qual o quadrante ao qual pertence o
ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva
“Eixo X” ou “Eixo Y”.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio13_Coordenadas
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double x, y;

            Console.Write("Valor de X: ");
            x = double.Parse(Console.ReadLine(), CI);
            Console.Write("Valor de Y: ");
            y = double.Parse(Console.ReadLine(), CI);

            if (x > 0 && y > 0)
            {

                Console.Write("Q1");

            }
            else if (x < 0 && y < 0)
            {

                Console.Write("Q3");

            }
            else if (x < 0 && y > 0)
            {

                Console.Write("Q2");

            }
            else if (x > 0 && y < 0)
            {

                Console.Write("Q4");

            }
            else if (x == 0 && y == 0)
            {

                Console.Write("Origem");

            }
            else if (x != 0 && y == 0)
            {

                Console.Write("Eixo X");

            }
            else
            {

                Console.Write("Eixo Y");

            }

        }
    }
}