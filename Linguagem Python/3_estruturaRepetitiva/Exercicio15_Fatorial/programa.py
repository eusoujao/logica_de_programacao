"""Professor: Nelio
Descrição: Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int n, i, fatorial

n = int(input("Digite o valor de N: "))

fatorial = 1

for i in range(1, n+1):
    fatorial = fatorial * i

print(f"FATORIAL = {fatorial}")