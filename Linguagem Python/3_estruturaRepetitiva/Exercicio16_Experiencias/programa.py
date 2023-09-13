"""Professor: Nelio
Descrição: Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int n, i, qtd, soma, c, r, s
# float pc, pr, ps
# char cob

n = int(input("Quantos casos de teste serao digitados? "))

c = 0
r = 0
s = 0
soma = 0

for i in range(0, n):
    qtd = int(input("Quantidade de cobaias: "))
    cob = input("Tipo de cobaias: ")
    soma = soma + qtd
    if cob == 'c':
        c = c + qtd
    elif cob == 'r':
        r = r + qtd
    elif cob == 's':
        s = s + qtd

pc = c / soma * 100.0
pr = r / soma * 100.0
ps = s / soma * 100.0

print("\n")
print("RELATORIO FINAL: ")
print(f"Total: {soma} cobaias")
print(f"Total de coelhos: {c}")
print(f"Total de ratos: {r}")
print(f"Total de sapos: {s}")
print(f"Percentual de coelhos: {pc:.2f}")
print(f"Percentual de ratos: {pr:.2f}")
print(f"Percentual de sapos: {ps:.2f}")