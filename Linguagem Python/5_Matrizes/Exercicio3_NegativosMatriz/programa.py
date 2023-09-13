"""Professor: Nelio
Descrição: Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int m, n, i, j
# int mat[10][10];

mat: [[int]] = [[0 for x in range(10)] for x in range(10)]

m = int(input("Qual a quantidades de linha da matriz? "))
n = int(input("Qual a quantidades de colunas da matriz? "))

for i in range(0, m):
    for j in range(0, n):
        mat[i][j] = int(input(f"Elemento [{i},{j}]:"))

print("VALORES NEGATIVOS: ")

for i in range(0, m):
    for j in range(0, n):
        if mat[i][j] < 0:
            print(mat[i][j])
