/* Professor: Nelio
Descrição: Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio5_Troco
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double precoDoProduto, recebido, troco;
            int quantidade;

            Console.Write("Preco unitario do produto: ");
            precoDoProduto = double.Parse(Console.ReadLine(), CI);

            Console.Write("Quantidade comprada: ");
            quantidade = int.Parse(Console.ReadLine());

            Console.Write("Dinheiro recebido: ");
            recebido = double.Parse(Console.ReadLine(), CI);

            troco = recebido - precoDoProduto * quantidade;

            Console.Write("Troco = " + troco.ToString("F2", CI));

        }
    }
}