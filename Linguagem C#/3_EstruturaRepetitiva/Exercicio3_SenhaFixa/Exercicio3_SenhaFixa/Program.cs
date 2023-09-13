/* Professor: Nelio
Descrição:Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de
senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
encerrado. Considere que a senha correta é o valor 2002.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio3_SenhaFixa
{
    class Program
    {
        static void Main(string[] args)
        {

            int senha, tentativa;

            senha = 2002;

            Console.Write("Digite a senha: ");
            tentativa = int.Parse(Console.ReadLine());

            while (tentativa != senha)
            {

                Console.Write("Senha invalida! Tente novamente: ");
                tentativa = int.Parse(Console.ReadLine());

            }

            Console.Write("Acesso permitido! ");

        }
    }
}