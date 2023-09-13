"""Professor: Nelio
Descrição: Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int n, i
# float x1, x2, divisao

n = int(input("Quantos casos voce vai digitar: "))

for i in range(0, n):
    x1 = float(input("Entre com um numerador: "))
    x2 = float(input("Entre com um denominador: "))
    if x2 == 0:
        print("DIVISAO IMPOSSIVEL")
    else:
        divisao = x1/x2
        print(f"DIVISAO = {divisao:.2f}")