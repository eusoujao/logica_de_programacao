/* Professor: Nelio
Descrição: No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio7_Dardo
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double distancia1, distancia2, distancia3, maior;

            Console.Write("Digite as tres distancias: \n");
            distancia1 = double.Parse(Console.ReadLine(), CI);
            distancia2 = double.Parse(Console.ReadLine(), CI);
            distancia3 = double.Parse(Console.ReadLine(), CI);

            if (distancia1 > distancia2 && distancia1 > distancia3)
            {

                maior = distancia1;

            }
            else if (distancia2 > distancia3)
            {

                maior = distancia2;

            }
            else
            {

                maior = distancia3;

            };

            Console.Write("MAIOR DISTANCIA = " + maior.ToString("F2", CI));

        }
    }
}