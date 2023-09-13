""" Professor: Nelio
Descrição: Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# float distancia, combustivel, consumo

distancia = float(input("Distancia percorrida: "))
combustivel = float(input("Combustivel gasto: "))

consumo = distancia / combustivel

print(f"Consumo medio = {consumo:.3f}")