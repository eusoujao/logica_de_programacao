""" Professor: Nelio
Descrição: Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int valor1, valor2, valor3, menor;

valor1 = int(input("Primeiro valor: "))
valor2 = int(input("Segundo valor: "))
valor3 = int(input("Terceiro valor: "))

if valor1 <= valor2 and valor1 <= valor3:
    menor = valor1
elif valor2 < valor3:
    menor = valor2
else:
    menor = valor3

print(f"Menor = {menor}")