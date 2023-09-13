"""Professor: Nelio
Descrição: Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i, j, neg
# int mat[10][10];

mat: [[int]] = [[0 for x in range(10)] for x in range(10)]

n = int(input("Qual a ordem da matriz? "))

for i in range(0, n):
    for j in range(0, n):
        mat[i][j] = int(input(f"Elemento [{i},{j}]:"))

print("DIAGONAL PRINCIPAL")

for i in range(0, n):
    for j in range(0, n):
        if i == j:
            print(f"{mat[i][j]} ", end="")

neg = 0

for i in range(0, n):
    for j in range(0, n):
        if mat[i][j] < 0:
            neg = neg + 1

print()
print(f"QUANTIDADE DE NEGATIVOS = {neg}")
