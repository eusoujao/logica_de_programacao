"""Professor: Nelio
Descrição: Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i

n = int(input("Quantos numeros voce vai digitar? "))

vet: [int] = [0 for x in range(n)]

for i in range(0, n):
    vet[i] = int(input("Digite um numero: "))

print("NUMEROS NEGATIVOS: ")

for i in range(0, n):
    if vet[i] < 0:
        print(vet[i])