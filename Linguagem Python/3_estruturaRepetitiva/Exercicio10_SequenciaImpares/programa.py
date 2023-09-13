"""Professor: Nelio
Descrição: Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
se for o caso.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int x, i;

x = int(input("Digite o valor de X: "))

for i in range(1, x):
    if i % 2 != 0:
        print(i)