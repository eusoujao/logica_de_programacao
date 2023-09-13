"""Professor: Nelio
Descrição: Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int m, n, i, j, maior
# int matA[10][10], matB[10][10], matC[10][10]

matA: [[int]] = [[0 for x in range(10)] for x in range(10)]
matB: [[int]] = [[0 for x in range(10)] for x in range(10)]
matC: [[int]] = [[0 for x in range(10)] for x in range(10)]

m = int(input("Quantas linhas vai ter a matriz? "))
n = int(input("Quantas colunas vai ter a matriz? "))

print("Digite os valores da matriz A: ")

for i in range(0, m):
    for j in range(0, n):
        matA[i][j] = int(input(f"Elemento [{i},{j}]:"))

print("Digite os valores da matriz B: ")

for i in range(0, m):
    for j in range(0, n):
        matB[i][j] = int(input(f"Elemento [{i},{j}]:"))

print("MATRIZ SOMA:")

for i in range(0, m):
    for j in range(0, n):
        matC[i][j] = matA[i][j] + matB[i][j]
        print(f"{matC[i][j]} ", end="")
    print()