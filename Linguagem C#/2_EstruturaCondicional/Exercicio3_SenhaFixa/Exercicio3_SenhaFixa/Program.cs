/* Professor: Nelio
Descrição:Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de
senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
encerrado. Considere que a senha correta é o valor 2002.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

using System;

namespace Exercicio3_SenhaFixa
{
    class Program
    {
        static void Main(string[] args)
        {

            int senha, tentativa;

            senha = 2002;

            System.out.print("Digite a senha: ");
            tentativa = sc.nextInt();

            while (tentativa != senha)
            {

                System.out.print("Senha invalida! Tente novamente: ");
                tentativa = sc.nextInt();

            }

            System.out.print("Acesso permitido! ");

        }
    }
}