/* Professor: Nelio
Descri��o:Escreva um programa que repita a leitura de uma senha at� que ela seja v�lida. Para cada leitura de
senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
encerrado. Considere que a senha correta � o valor 2002.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 27/06/2023 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int senha, tentativa;

    senha = 2002;

    cout << "Digite a senha: ";
    cin >> tentativa;

    while(tentativa != senha){

        cout << "Senha invalida! Tente novamente: ";
        cin >> tentativa;

    };

    cout << "Acesso permitido! ";


    return 0;
}
