"""Professor: Nelio
Descrição: Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int n, i

n = int(input("Deseja a tabuada para qual valor?"))

for i in range(1, 11):
    print(f"{n} X {i} = {(n*i)}")