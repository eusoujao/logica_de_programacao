"""Professor: Nelio
Descrição: Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
círculo com três casas decimais. A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋. 𝑟2. Você pode
usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
diretamente o valor 3.14159.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

import math

# float raio, area

raio = float(input("Digite o valor do raio do circulo: "))

area = 3.14159 * math.pow(raio, 2.0)

print(f"Area = {area:.3f}")