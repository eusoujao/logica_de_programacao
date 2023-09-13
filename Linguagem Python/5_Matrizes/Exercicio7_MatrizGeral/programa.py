"""Professor: Nelio
Descrição: Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

import math

# int n, i, j, linha, coluna
# float soma
# float mat[10][10], matAlt[10][10];

mat: [[float]] = [[0 for x in range(10)] for x in range(10)]
matAlt: [[float]] = [[0 for x in range(10)] for x in range(10)]

n = int(input("Qual a ordem da matriz? "))

for i in range(0, n):
    for j in range(0, n):
        mat[i][j] = float(input(f"Elemento [{i},{j}]:"))

soma = 0

for i in range(0, n):
    for j in range(0, n):
        if mat[i][j] > 0:
            soma = soma + mat[i][j]

print(f"\nSOMA DOS POSITIVOS: {soma:.1f}")

linha = int(input("\nEscolha uma linha: "))
print("LINHA ESCOLHIDA: ", end="")

for j in range(0, n):
    print(f"{mat[linha][j]:.1f} ", end="")

print()
coluna = int(input("\nEscolha uma coluna: "))
print("COLUNA ESCOLHIDA: ", end="")

for i in range(0, n):
    print(f"{mat[i][coluna]:.1f} ", end="")

print()
print("\nDIAGONAL PRINCIPAL: ", end="")

for i in range(0, n):
    print(f"{mat[i][i]:.1f} ", end="")

print()
print("\nMATRIZ ALTERNADA: ")

for i in range(0, n):
    for j in range(0, n):
        if mat[i][j] < 0:
            matAlt[i][j] = math.pow(mat[i][j], 2)
        else:
            matAlt[i][j] = mat[i][j]
        print(f"{matAlt[i][j]:.1f} ", end="")
    print()
