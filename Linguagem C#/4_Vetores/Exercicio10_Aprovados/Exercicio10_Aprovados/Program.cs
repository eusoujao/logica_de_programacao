/* Professor: Nelio
Descrição: Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis).
Autor(a): João Renato Sant'Ana
Data atual: 25/07/2023 */

using System;
using System.Globalization;

namespace Exercicio10_Aprovados
{
    class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, i;
            double media;
            String[] nomes = new String[9];
            double[] notas1 = new double[9];
            double[] notas2 = new double[9];

            Console.Write("Quantos alunos serao digitados? ");
            n = int.Parse(Console.ReadLine());

            for (i = 0; i < n; i++)
            {

                Console.WriteLine("Digite nome, primeira e segunda nota do " + (i + 1) + "o aluno: ");
                nomes[i] = Console.ReadLine();
                notas1[i] = double.Parse(Console.ReadLine(), CI);
                notas2[i] = double.Parse(Console.ReadLine(), CI);

            }

            Console.WriteLine("ALUNOS APROVADOS: ");

            for (i = 0; i < n; i++)
            {

                media = (notas1[i] + notas2[i]) / 2;

                if (media >= 6)
                {

                    Console.WriteLine(nomes[i]);

                }
            }

        }
    }
}