/* Professor: Nelio
Descrição: Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal.
Autor(a): João Renato Sant'Ana
Data atual: 26/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

   string nome1, nome2;
   int idade1, idade2;
   double media;

   cout << "Dados da primeira pessoa:" << endl;
   cout << "Nome: ";
   getline(cin, nome1);
   cout << "Idade: ";
   cin >> idade1;

   cout << "Dados da segunda pessoa: " << endl;
   cout << "Nome: ";
   cin.ignore();
   getline(cin, nome2);
   cout << "Idade: ";
   cin >> idade2;

   media = (idade1 + idade2) / 2.0;

   cout << "A idade media de " << nome1 << " e " << nome2 << "e de " << media << ".";


    return 0;
}
