"""  Professor: Nelio
Descrição: Uma lanchonete possui vários produtos. Cada produto possui um código
e um preço. Você deve fazer um programa para ler o código e a
quantidade comprada de um produto (suponha um código válido), e daí
informar qual o valor a ser pago.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int cp, quantidade;
# float preco;

cp = int(input("Codigo do produto comprado: "))
quantidade = int(input("Quantidade comprada: "))

def function1():
    preco = 5.00

def function2():
    preco = 3.50

def function3():
    preco = 4.80

def function4():
    preco = 8.90

def function5():
    preco = 7.32

print(f"Valor a pagar: R${(preco * quantidade):.2f}",)