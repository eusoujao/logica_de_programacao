"""Professor: Nelio
Descrição: Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis).
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i
# float media
# char nomes[10]
# float notas1[10], notas2[10]

nomes: [str] = [0 for x in range(10)]
notas1: [float] = [0 for x in range(10)]
notas2: [float] = [0 for x in range(10)]

n = int(input("Quantos alunos serao digitados? "))

for i in range(0, n):
    print(f"Digite nome, primeira e segunda nota do {i+1}o aluno: ")
    nomes[i] = input()
    notas1[i] = float(input())
    notas2[i] = float(input())

print("ALUNOS APROVADOS: ")

for i in range(0, n):
    media = (notas1[i] + notas2[i])/2
    if media >= 6:
        print(nomes[i])
