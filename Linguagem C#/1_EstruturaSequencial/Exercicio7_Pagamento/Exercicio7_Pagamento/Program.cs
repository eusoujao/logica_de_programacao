/* Professor: Nelio
Descrição: Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
uma mensagem explicativa.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio7_Pagamento
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            String nome;
            double valorPorHora, horasTrab, salario;

            Console.Write("Nome: ");
            nome = Console.ReadLine();
            Console.Write("Valor por hora: ");
            valorPorHora = double.Parse(Console.ReadLine(), CI);
            Console.Write("Horas trabalhadas: ");
            horasTrab = double.Parse(Console.ReadLine(), CI);

            salario = valorPorHora * horasTrab;

            Console.Write("O pagamento para " + nome + " deve ser " + salario.ToString("F3", CI));

        }
    }
}