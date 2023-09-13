"""Professor: Nelio
Descrição: Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i, soma
# int vet[10]

vet: [int] = [0 for x in range(10)]

n = int(input("Quantos numeros voce vai digitar? "))

soma = 0

for i in range(0, n):
    vet[i] = int(input("Digite um numero: "))

print("\nNUMEROS PARES:")

for i in range(0, n):
    if vet[i] % 2 == 0:
        print(f"{vet[i]}  ", end="")
        soma = soma + 1

print()
print(" QUANTIDADE DE PARES = ", soma)
