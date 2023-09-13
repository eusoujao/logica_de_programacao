"""Professor: Nelio
Descrição: Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero).
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i, posicao
# float maior
# float vet[10]

vet: [float] = [0 for x in range(10)]

n = int(input("Quantos numeros voce vai digitar? "))

posicao = 0

for i in range(0, n):
    vet[i] = float(input("Digite um numero: "))

maior = vet[0]

for i in range(1, n):
    if vet[i] > maior:
        maior = vet[i]
        posicao = i

print()
print(f"MAIOR VALOR = {maior:.1f}")
print(f"POSICAO DO MAIOR VALOR = {posicao}")