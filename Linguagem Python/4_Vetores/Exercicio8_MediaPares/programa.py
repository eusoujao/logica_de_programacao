"""Professor: Nelio
Descrição: Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR".
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i, somaV
# float somaM, media
# int vet[10];

vet = [0 for x in range(10)]  # Create a list with 10 zeros

n = int(input("Quantos elementos vai ter o vetor? "))  # Get the number of elements from the user

somaM = 0
somaV = 0

for i in range(0, n):
    vet[i] = int(input("Digite um numero: "))

for i in range(0, n):
    if vet[i] % 2 == 0:
        somaV = somaV + vet[i]
        somaM = somaM + 1

media = (somaV / somaM)

if somaV == 0:
    print("NENHUM NUMERO PAR")
else:
    print(f"MEDIA DOS PARES = {media:.1f}")
