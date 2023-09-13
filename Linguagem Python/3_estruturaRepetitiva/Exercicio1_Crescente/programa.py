"""  Professor: Nelio
Descrição: Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int x, y;

print("Digite dois numeros: ")
x = int(input())
y = int(input())

while x != y:
    if x < y:
        print("CRESCENTE!")
    else:
        print("DECRESCENTE!")

    print("Digite outros dois numeros: ");
    x = int(input())
    y = int(input())
