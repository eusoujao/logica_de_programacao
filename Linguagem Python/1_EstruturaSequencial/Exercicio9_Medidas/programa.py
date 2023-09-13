""" Professor: Nelio
Descrição: Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

import math

# float a, b, c, areaQ, areaTri, areaTra;

a = float(input("Digite a medida A: "))
b = float(input("Digite a medida B: "))
c = float(input("Digite a medida C: "))

areaQ = math.pow(a, 2)
areaTri = a * b / 2
areaTra = (a + b) * c / 2

print(f"Area do quadrado = {areaQ:.4f}")
print(f"Area do triangulo = {areaTri:.4f}")
print(f"Area do trapezio = {areaTra:.4f}")