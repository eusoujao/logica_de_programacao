"""Professor: Nelio
Descrição: Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
pela soma dos pesos.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int n,i
# float x1, x2, x3, media

n = int(input("Quantos casos voce vai digitar? "))

for i in range(0, n):
    print("Digite tres numeros:")
    x1 = float(input())
    x2 = float(input())
    x3 = float(input())
    media = (x1 * 2 + x2 * 3 + x3 * 5) / 10
    print(f"MEDIA = {media:.1f}")