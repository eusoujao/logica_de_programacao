/* Professor: Nelio
Descrição: Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio1_Terreno
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double largura, comprimento, valor, area, preco;

            Console.Write("Digite a largura do terreno: ");
            largura = double.Parse(Console.ReadLine(), CI);

            Console.Write("Digite o comprimento do terreno: ");
            comprimento = double.Parse(Console.ReadLine(), CI);

            Console.Write("Digite o valor do metro quadrado: ");
            valor = double.Parse(Console.ReadLine(), CI);

            area = largura * comprimento;
            preco = area * valor;


            Console.WriteLine("Area do terreno = " + area.ToString("F2", CI));
            Console.WriteLine("Preço do terreno = " + preco.ToString("F2", CI));

        }
    }
}