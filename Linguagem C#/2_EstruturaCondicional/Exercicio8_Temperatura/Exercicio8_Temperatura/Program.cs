/* Professor: Nelio
Descrição: Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio8_Temperatura
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            char escala;
            double temperatura, conver;

            Console.Write("Voce vai digitar a temperatura em qual escala (C/F)? ");
            escala = char.Parse(Console.ReadLine());

            if (escala != 'C')
            {

                Console.Write("Digite a temperatura em Fahrenheit: ");
                temperatura = double.Parse(Console.ReadLine(), CI);
                conver = (temperatura - 32) / 1.8;
                Console.Write("Temperatura equivalente em Celsius: " + conver.ToString("F2", CI));

            }
            else
            {

                Console.Write("Digite a temperatura em Celsius: ");
                temperatura = double.Parse(Console.ReadLine(), CI);
                conver = temperatura * 1.8 + 32;
                Console.Write("Temperatura equivalente em Fahrenheit: " + conver.ToString("F2", CI));

            }

        }
    }
}
