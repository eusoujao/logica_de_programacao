"""Professor: Nelio
Descrição: Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i
# int vetA[10], vetB[10], vetC[10]

vetA = [0 for x in range(10)]
vetB = [0 for x in range(10)]
vetC = [0 for x in range(10)]

n = int(input("Quantos valores vai ter cada vetor? "))

print("Digite os valores do vetor A: ")

for i in range(0, n):
    vetA[i] = int(input())

print("Digite os valores do vetor B: ")

for i in range(0, n):
    vetB[i] = int(input())

print("VETORES RESULTANTE: ")

for i in range(0, n):
    vetC[i] = vetA[i] + vetB[i]
    print(f"{vetC[i]}")
