"""Professor: Nelio
Descrição: Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

#int n, i, soma
# float somaAlt, porcentagem

nomes: [str] = [0 for x in range(10)]
idades: [int] = [0 for x in range(10)]
alturas: [float] = [0 for x in range(10)]

n = int(input("Quantas pessoas serao digitadas? "))

somaAlt = 0
soma = 0
porcentagem = 0

for i in range(0, n):
    print(f"Dados da {i+1}a pessoa:")
    nomes[i] = input("Nome: ")
    idades[i] = int(input("Idade: "))
    alturas[i] = float(input("Altura: "))

for i in range(0, n):
    somaAlt = somaAlt + alturas[i]

print(f"\nAltura media: {(somaAlt/n):.2f}")

for i in range(0, n):
    if idades[i] < 16:
        soma = soma + 1

porcentagem = 100.0 * soma / n

print(f"Pessoas com menos de 16 anos: {porcentagem:.1f}%")

for i in range(0, n):
    if idades[i] < 16:
        print(nomes[i] )