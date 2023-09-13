"""Professor: Nelio
Descrição: Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int x, y, troca, soma, i;

print("Digite dois numeros: ")
x = int(input())
y = int(input())

if x > y:
    troca = x
    x = y
    y = troca

soma = 0

for i in range(x + 1, y):
    if i % 2 != 0:
        soma = soma + i

print(f"Soma = {soma}")