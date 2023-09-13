/* Professor: Nelio
Descrição: Uma empresa vai conceder um aumento percentual de
salário aos seus funcionários dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o salário de uma pessoa, daí mostrar
qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio11_Aumento
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int porcentagem;
            double salario, nsalario, aumento;

            Console.Write("Digite o salario da pessoa: ");
            salario = double.Parse(Console.ReadLine(), CI);

            if (salario <= 1000.00)
            {

                porcentagem = 20;

            }
            else if (salario <= 3000.00)
            {

                porcentagem = 15;

            }
            else if (salario <= 8000.00)
            {

                porcentagem = 10;

            }
            else
            {

                porcentagem = 5;

            };

            aumento = salario * porcentagem / 100;
            nsalario = salario + aumento;

            Console.WriteLine("Novo salario = R$" + nsalario.ToString("F2", CI));
            Console.WriteLine("Aumento = R$" + aumento.ToString("F2", CI));
            Console.Write("Porcentagem = " + porcentagem + "%");

        }
    }
}