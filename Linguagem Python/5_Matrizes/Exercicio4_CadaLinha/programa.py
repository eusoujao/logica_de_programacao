"""Professor: Nelio
Descrição: Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha não haver empates
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i, j, maior
# int mat[10][10]

mat: [[int]] = [[0 for x in range(10)] for x in range(10)]

n = int(input("Qual a ordem da matriz? "))

for i in range(0, n):
    for j in range(0, n):
        mat[i][j] = int(input(f"Elemento [{i},{j}]:"))

print("MAIOR ELEMENTO DE CADA LINHA: ")

for i in range(0, n):
    maior = 0;
    for j in range(0, n):
        if mat[i][j] > maior:
            maior = mat[i][j]
    print(maior)
