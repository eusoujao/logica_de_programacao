"""Professor: Nelio
Descrição: Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de números acima da diagonal
principal é mostrado ao lado (no caso as células com fundo cinza).
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i, j, soma
# int mat[10][10]

mat: [[int]] = [[0 for x in range(10)] for x in range(10)]

n = int(input("Qual a ordem da matriz? "))

for i in range(0, n):
    for j in range(0, n):
        mat[i][j] = int(input(f"Elemento [{i},{j}]:"))

soma = 0

for i in range(0, n):
    for j in range(0, n):
        if j > i:
            soma = soma + mat[i][j]

print(f"SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = {soma}")