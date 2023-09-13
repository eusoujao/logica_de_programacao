/* Professor: Nelio
Descrição: Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado.
Autor(a): João Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i;
    int vetA[10], vetB[10], vetC[10];

    cout << "Quantos valores vai ter cada vetor? ";
    cin >> n;

    cout << "Digite os valores do vetor A: " << endl;

    for(i = 0; i < n; i++){

        cin >> vetA[i];

    }

    cout << "Digite os valores do vetor B: " << endl;

    for(i = 0; i < n; i++){

        cin >> vetB[i];

    }

    cout << "VETORES RESULTANTE: " << endl;

    for(i = 0; i < n; i++){

        vetC[i] = vetA[i] + vetB[i];
        cout << vetC[i] << endl;

    }

    return 0;
}
