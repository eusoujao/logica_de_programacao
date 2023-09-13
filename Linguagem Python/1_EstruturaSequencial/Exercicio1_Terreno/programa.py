"""Professor: Nelio
Descrição: Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

largura = float(input("Digite a largura do terreno: "))
comprimento = float(input("Digite o comprimento do terreno: "))
valor = float(input("Digite o valor do metro quadrado: "))

area = largura * comprimento
preco = area * valor

print(f"Área do terreno = {area:.2f}")
print(f"Preço do terreno = {preco:.2f}")
