"""Professor: Nelio
Descrição: Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int N, x, fora, dentro, i

N = int(input("Quantos numeros voce vai digitar? "))

fora = 0
dentro= 0

for i in range(0, N):
    x = int(input("Digite um numero: "))
    if x >= 10 and x <= 20:
        dentro = dentro + 1
    else:
        fora = fora + 1

print(f"{dentro} Dentro")
print(f"{fora} Fora")
