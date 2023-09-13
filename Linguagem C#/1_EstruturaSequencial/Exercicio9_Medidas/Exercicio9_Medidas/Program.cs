/* Professor: Nelio
Descrição: Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio9_Medidas
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double a, b, c, areaQ, areaTri, areaTra;

            Console.Write("Digite a medida A: ");
            a = double.Parse(Console.ReadLine(), CI);
            Console.Write("Digite a medida B: ");
            b = double.Parse(Console.ReadLine(), CI);
            Console.Write("Digite a medida C: ");
            c = double.Parse(Console.ReadLine(), CI);

            areaQ = Math.Pow(a, 2);
            areaTri = a * b / 2;
            areaTra = (a + b) * c / 2;

            Console.WriteLine("Area do quadrado = " + areaQ.ToString("F4", CI));
            Console.WriteLine("Area do triangulo = " + areaTri.ToString("F4", CI));
            Console.WriteLine("Area do trapezio = " + areaTra.ToString("F4", CI));

        }
    }
}