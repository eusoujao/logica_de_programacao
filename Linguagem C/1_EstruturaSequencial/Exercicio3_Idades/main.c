/* Professor: Nelio
Descrição: Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal.
Autor(a): João Renato Sant'Ana
Data atual: 25/05/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

   char nome1[50], nome2[50];
   int idade1, idade2;
   double media;

   printf ("Dados da primeira pessoa:\n");
   printf ("Nome: ");
   gets (nome1);
   printf ("Idade: ");
   scanf ("%d", &idade1);

   printf ("Dados da segunda pessoa:\n ");
   printf ("Nome: ");
   fseek (stdin, 0, SEEK_END);
   gets (nome2);
   printf ("Idade: ");
   scanf ("%d", &idade2);

   media = (idade1 + idade2) / 2.0;

   printf ("A idade media de %s e %s e de %.1lf anos.", nome1, nome2, media);


    return 0;
}
