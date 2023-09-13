/* Professor: Nelio
Descrição: Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
pela soma dos pesos.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace MediaPonderad
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, i;
            double x1, x2, x3, media;

            Console.Write("Quantos casos voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            for (i = 1; i <= n; i++)
            {

                Console.WriteLine("Digite tres numeros: ");
                x1 = double.Parse(Console.ReadLine(), CI);
                x2 = double.Parse(Console.ReadLine(), CI);
                x3 = double.Parse(Console.ReadLine(), CI);

                media = (x1 * 2 + x2 * 3 + x3 * 5) / 10;

                Console.WriteLine("MEDIA = " +  media.ToString("F1", CI));

            }

        }
    }
}