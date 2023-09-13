""" Professor: Nelio
Descrição: Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

import math

# float a, b, c, x1, x2, delta;

a = float(input("Coeficiente a: "))
b = float(input("Coeficiente b: "))
c = float(input("Coeficiente c: "))

delta = math.pow(b, 2) - 4 * a * c

if a == 0 or delta < 0:
    print("Esta equacao nao possui raizes reais")
else:
    x1 = (- b + math.sqrt(delta)) / (2 * a)
    x2 = (- b - math.sqrt(delta)) / (2 * a)
    print(f"X1 = {x1:.4f}")
    print(f"X2 = {x2:.4f}")