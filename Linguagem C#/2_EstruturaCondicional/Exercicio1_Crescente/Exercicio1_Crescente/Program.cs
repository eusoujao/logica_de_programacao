/* Professor: Nelio
Descrição: Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

using System;

namespace Exercicio1_Crescente
{
    class Program
    {
        static void Main(string[] args)
        {

            int x, y;

            System.out.println("Digite dois numeros: ");
            x = sc.nextInt();
            y = sc.nextInt();

            while (x != y)
            {

                if (x < y)
                {
                    System.out.println("CRESCENTE!");
                }
                else
                {
                    System.out.println("DECRESCENTE!");
                }

                System.out.println("Digite outros dois numeros: ");
                x = sc.nextInt();
                y = sc.nextInt();
            }

        }
    }
}