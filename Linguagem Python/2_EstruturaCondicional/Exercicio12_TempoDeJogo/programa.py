"""  Professor: Nelio
Descrição: Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
horas.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int hora1, hora2, horaTotal;

hora1 = int(input("Hora inicial: "))
hora2 = int(input("Hora final: "))

if hora1 < hora2:
    horaTotal = hora2 - hora1
else:
    horaTotal = (hora2 + 24) - hora1

print(f"O JOGO DUROU {horaTotal} HORA(S)")