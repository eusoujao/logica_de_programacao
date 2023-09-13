/* Professor: Nelio
Descrição: Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combustível.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio6_Combustivel
{
    class Program
    {
        static void Main(string[] args)
        {

            int comb, soma1, soma2, soma3;

            soma1 = 0;
            soma2 = 0;
            soma3 = 0;

            Console.Write("Informe um codigo (1, 2, 3) ou 4 para parar: ");
            comb = int.Parse(Console.ReadLine());

            while (comb != 4)
            {

                Console.Write("Informe um codigo (1, 2, 3) ou 4 para parar: ");
                comb = int.Parse(Console.ReadLine());

                if (comb == 1)
                {

                    soma1 = soma1 + 1;

                }
                else if (comb == 2)
                {

                    soma2 = soma2 + 1;

                }
                else if (comb == 3)
                {

                    soma3 = soma3 + 1;

                };
            };

            Console.WriteLine("MUITO OBRIGADO");

            Console.WriteLine("Alcool: " + soma1);
            Console.WriteLine("Gasolina: " + soma2);
            Console.WriteLine("Diesel: " + soma3);

        }
    }
}