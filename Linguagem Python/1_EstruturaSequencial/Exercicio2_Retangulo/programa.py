"""Professor: Nelio
Descrição: Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com quatro casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# float base, altura, area, perimetro, diagonal

import math

base = float(input("Base do retangulo: "))
altura = float(input("Altura do retangulo: "))

area = base * altura
perimetro = 2 * (base + altura)
diagonal = math.sqrt(math.pow(altura,2.0)+math.pow(base,2.0))

print(f"Area = {area:.4f}")
print(f"Perimetro = {perimetro:.4f}")
print(f"Diagonal = {diagonal:.4f}")