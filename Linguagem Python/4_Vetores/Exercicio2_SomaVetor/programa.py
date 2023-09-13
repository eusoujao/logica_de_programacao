"""Professor: Nelio
Descrição: Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i
# float soma

n = int(input("Quantos numeros voce vai digitar? "))

vet: [float] = [0 for x in range(n)]

soma = 0

for i in range(0, n):
    vet[i] = float(input("Digite um numero: "))

print("Valores = ", end="")

for i in range(0, n):
    print(f"{vet[i]:.1f}  ", end="")
    soma = soma + vet[i]

print("\n")
print(f"SOMA = {soma:.2f}")
print(f"MEDIA = {(soma/n):.2f}")