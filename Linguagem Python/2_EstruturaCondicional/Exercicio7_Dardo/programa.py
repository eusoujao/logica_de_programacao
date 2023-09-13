""" Professor: Nelio
Descrição: No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# float distancia1, distancia2, distancia3, maior;

print(f"Digite as tres distancias: ")
distancia1 = float(input())
distancia2 = float(input())
distancia3 = float(input())

if distancia1 > distancia2 and distancia1 > distancia3:
    maior = distancia1
elif distancia2 > distancia3:
    maior = distancia2
else:
    maior = distancia3

print(f"MAIOR DISTANCIA = {maior:.2f}")