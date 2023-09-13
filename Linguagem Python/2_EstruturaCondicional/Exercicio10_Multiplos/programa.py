"""  Professor: Nelio
Descrição: Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
números podem ser digitados em qualquer ordem.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int numero1, numero2, divisao1, divisao2;

print("Digite dois numeros inteiros: ")
numero1 = int(input())
numero2 = int(input())

divisao1 = numero1 % numero2
divisao2 = numero2 % numero1

if divisao1 == 0 or divisao2 == 0:
    print("Sao multiplos")
else:
    print("Nao sao multiplos")
