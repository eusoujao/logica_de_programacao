"""Professor: Nelio
Descrição: Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
apenas NULO.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int n, x, i

n = int(input("Quantos numeros voce vai digitar? "))

for i in range(0, n):
    x = int(input("Digite um numero: "))
    if x % 2 != 0 and x < 0:
        print("IMPAR NEGATIVO")
    elif x % 2 != 0 and x > 0:
        print("IMPAR POSITIVO")
    elif x % 2 == 0 and x < 0:
        print("PAR NEGATIVO")
    elif x % 2 == 0 and x > 0:
        print("PAR POSITIVO")
    else:
        print("NULO")