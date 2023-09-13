/* Professor: Nelio
Descrição: Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
formato horas:minutos:segundos.
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;

namespace Exercicio10_Duracao
{
    class Program
    {
        static void Main(string[] args)
        {

            int segundos, horas, resto, minutos, segundosC;

            Console.Write("Digite a duracao em segundos: ");
            segundos = int.Parse(Console.ReadLine());

            horas = segundos / 3600;
            resto = segundos % 3600;
            minutos = resto / 60;
            segundosC = resto % 60;

            Console.WriteLine(horas + ":" + minutos + ":" + segundosC);

        }
    }
}