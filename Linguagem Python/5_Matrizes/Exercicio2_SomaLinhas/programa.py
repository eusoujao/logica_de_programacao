"""Professor: Nelio
Descrição: Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int m, n, i, j
# float mat[10][10]
# float vet[10]

mat: [[float]] = [[0 for x in range(10)] for x in range(10)]
vet: [float] = [0 for x in range(10)]

m = int(input("Qual a quantidades de linha da matriz? "))
n = int(input("Qual a quantidades de colunas da matriz? "))

for i in range(0, m):
    print(f"Digite os elementos da {i+1}a linha: ")
    for j in range(0, n):
        mat[i][j] = float(input())

for i in range(0, m):
    vet[i] = 0
    for j in range(0, n):
        vet[i] = vet[i] + mat[i][j]

print("VETOR GERADO: ")

for i in range(0, m):
    print(f"{vet[i]:.1f}")
