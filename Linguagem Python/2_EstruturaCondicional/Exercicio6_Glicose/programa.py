""" Professor: Nelio
Descrição: Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# float glicose;

glicose = float(input("Digite a medida de glicose: "))

if glicose <= 100:
    print(f"Classificacao: normal")
elif glicose <= 140:
    print(f"Classificacao: elevado")
else:
    print(f"Classificacao: diabetes")
