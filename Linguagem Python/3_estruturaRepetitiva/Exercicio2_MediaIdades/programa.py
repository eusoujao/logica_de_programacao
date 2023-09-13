"""  Professor: Nelio
Descrição: Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int idades, soma, quantidadeID;
# float media;

idades = int(input("Digite as idades: \n "))

soma = 0
quantidadeID = 0

while idades >= 0:
    soma = soma + idades
    quantidadeID = quantidadeID + 1
    idades = int(input())

if quantidadeID == 0:
    print("IMPOSSIVEL CALCULAR")
else:
    media =  soma / quantidadeID
    print(f"MEDIA = {media:.2f}")