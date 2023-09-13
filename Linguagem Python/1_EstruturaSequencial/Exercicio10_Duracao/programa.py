""" Professor: Nelio
Descrição: Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
formato horas:minutos:segundos.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int segundos, horas, resto, minutos, segundosC

segundos = int(input("Digite a duracao em segundos: "))

horas = segundos // 3600
resto = segundos % 3600
minutos = resto // 60
segundosC = resto % 60

print(f"{horas}:{minutos}:{segundosC}")