/* Professor: Nelio
Descrição: Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

using System;

namespace Exercicio5_TrocoVerificado
{
    class Program
    {
        static void Main(string[] args)
        {

            int quantidade;
            double preco, recebido, troco, total;

            System.out.print("Preco unitario do produto: ");
            preco = sc.nextDouble();
            System.out.print("Quantidade comprada: ");
            quantidade = sc.nextInt();
            System.out.print("Dinheiro recebido: ");
            recebido = sc.nextDouble();

            total = preco * quantidade;
            troco = recebido - total;

            if (total > recebido)
            {

                System.out.print("DINHEIRO INSULFICIENTE. FALTAM " + String.format("%.2f", (total - recebido)) + " REAIS");

            }
            else
            {

                System.out.print("Troco = " + String.format("%.2f", troco));

            }

        }
    }
}