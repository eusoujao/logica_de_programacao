"""Professor: Nelio
Descrição: Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# char nome1, nome2
# int idade1, idade2
# float media;

print("Dados da primeira pessoa:")
nome1 = input("Nome: ")
idade1 = int(input("Idade: "))

print("Dados da segunda pessoa:")
nome2 = input("Nome: ")
idade2 = int(input("Idade: "))

media = (idade1 + idade2) / 2.0

print(f"A idade media de {nome1} e {nome2} e de {media:.1f} anos.")