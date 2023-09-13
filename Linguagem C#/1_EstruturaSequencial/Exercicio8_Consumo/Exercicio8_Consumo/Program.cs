/* Professor: Nelio
Descrição: Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio8_Consumo
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int distancia;
            double combustivel, consumo;

            Console.Write("Distancia percorrida: ");
            distancia = int.Parse(Console.ReadLine());
            Console.Write("Combustivel gasto: ");
            combustivel = double.Parse(Console.ReadLine(), CI);

            consumo = distancia / combustivel;

            Console.Write("Consumo medio = " + consumo.ToString("F3", CI));

        }
    }
}