"""  Professor: Nelio
Descrição: Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# char escala;
# float temperatura, convercao;

escala = input("Voce vai digitar a temperatura em qual escala (C/F)? ")

if escala != 'C':
    temperatura = float(input("Digite a temperatura em Fahrenheit: "))
    convercao = (temperatura - 32) / 1.8
    print(f"Temperatura equivalente em Celsius: {convercao:.2f}")
else:
    temperatura = float(input("Digite a temperatura em Celsius: "))
    convercao = temperatura * 1.8 + 32
    print(f"Temperatura equivalente em Fahrenheit: {convercao:.2f}")