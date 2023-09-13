"""Professor: Nelio
Descrição:Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
intervalo [0,10]). Cada nota deve ser validada separadamente.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# float nota1, nota2, media;

nota1 = float(input("Digite a primeira nota: "))

while nota1 > 10 or nota1 < 0:
    nota1 = float(input("Valor invalido! Tente novamente: "))

nota2 = float(input("Digite a segunda nota: "))

while nota2 > 10 or nota2 < 0:
    nota2 = float(input("Valor invalido! Tente novamente: "))

media = (nota1 + nota2) / 2

print(f"MEDIA = {media:.2f}")