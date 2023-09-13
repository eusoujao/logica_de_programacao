"""Professor: Nelio
Descrição: Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i, homem, mulher
# float somaM, maior, menor, media
# float vetA[10]
# char vetG[10];

vetG: [str] = [0 for x in range(10)]
vetA: [float] = [0 for x in range(10)]

n = int(input("Quantas pessoas serao digitadas? "))

for i in range(0, n):
    vetA[i] = float(input(f"Altura da {i+1}a pessoa: "))
    vetG[i] = input(f"Genero da {i+1}a pessoa (M/F): ")

somaM = 0
mulher = 0
homem = 0

for i in range(0, n):
    if vetG[i] == 'F':
        somaM = somaM + vetA[i]
        mulher = mulher + 1
    else:
        homem = homem + 1

maior = vetA[0]
menor = vetA[0]

for i in range(1, n):
    if vetA[i] > maior:
        maior = vetA[i]
    if vetA[i] < menor:
        menor = vetA[i]

media = somaM/mulher

print(f"Menor altura = {menor:.2f}")
print(f"Maior altura = {maior:.2f}")
print(f"Media das alturas das mulheres = {media:.2f}")
print(f"Numero de homens = {homem}")