/* Professor: Nelio
Descri��o:Escreva um programa que repita a leitura de uma senha at� que ela seja v�lida. Para cada leitura de
senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
encerrado. Considere que a senha correta � o valor 2002.
Autor(a): Jo�o Renato Sant'Ana
Data atual: 13/06/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int senha, tentativa;

    senha = 2002;

    printf("Digite a senha: ");
    scanf("%d", &tentativa);

    while(tentativa != senha){

        printf("Senha invalida! Tente novamente: ");
        scanf("%d", &tentativa);

    };

    printf("Acesso permitido! ");


    return 0;
}
