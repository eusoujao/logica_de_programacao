/* Professor: Nelio
Descrição: Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com quatro casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio2_Retangulo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double baseValue, altura, area, perimetro, diagonal;

            Console.Write("Base do retangulo: ");
            baseValue = double.Parse(Console.ReadLine(), CI);

            Console.Write("Altura do retangulo: ");
            altura = double.Parse(Console.ReadLine(), CI);

            area = baseValue * altura;
            perimetro = 2 * (baseValue + altura);
            diagonal = Math.Sqrt(Math.Pow(altura, 2.0) + Math.Pow(baseValue, 2.0));

            Console.WriteLine("Area = " + area.ToString("F4", CI));
            Console.WriteLine("Perimetro = " + perimetro.ToString("F4", CI));
            Console.WriteLine("Diagonal = " + diagonal.ToString("F4", CI));
        }
    }
}