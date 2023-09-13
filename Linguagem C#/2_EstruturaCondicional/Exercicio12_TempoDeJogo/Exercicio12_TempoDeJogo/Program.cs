/* Professor: Nelio
Descrição: Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
horas.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

using System;

namespace Exercicio12_TempoDeJogo
{
    class Program
    {
        static void Main(string[] args)
        {

            int hora1, hora2, horaTotal;

            Console.Write("Hora inicial: ");
            hora1 = int.Parse(Console.ReadLine());
            Console.Write("Hora final: ");
            hora2 = int.Parse(Console.ReadLine());

            if (hora1 < hora2)
            {

                horaTotal = hora2 - hora1;

            }
            else
            {

                horaTotal = (hora2 + 24) - hora1;

            }

            Console.Write("O JOGO DUROU " + horaTotal + " HORA(S)");

        }
    }
}