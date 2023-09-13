"""Professor: Nelio
Descrição: Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i, posMaior, maior
# char nomes[10]
# int idades[10]

nomes: [str] = [0 for x in range(10)]
idades: [int] = [0 for x in range(10)]

n = int(input("Quantas pessoas voce vai digitar? "))

for i in range(0, n):
    print(f"Dados da {i+1}a pessoa:")
    nomes[i] = input("Nome: ")
    idades[i] = int(input("Idade: "))


maior = idades[0]
posMaior = 0

for i in range(0, n):
    if idades[i] > maior:
        maior = idades[i]
        posMaior = i

print(f"PESSOA MAIS VELHA: {nomes[posMaior]}")
