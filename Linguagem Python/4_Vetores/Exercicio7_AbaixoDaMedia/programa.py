"""Professor: Nelio
Descrição: Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i
# float soma, media
# float vet[10]

vet: [float] = [0 for x in range(10)]

n = int(input("Quantos elementos vai ter o vetor? "))

soma = 0

for i in range(0, n):
    vet[i] = float(input("Digite um numero: "))

for i in range(0, n):
    soma = soma + vet[i]

media = soma / n

print(f"\nMEDIA DO VETOR = {media:.3f}")

print("ELEMENTOS ABAIXO DA MEDIA: ")

for i in range(0, n):
    if vet[i] < media:
        print(vet[i])
