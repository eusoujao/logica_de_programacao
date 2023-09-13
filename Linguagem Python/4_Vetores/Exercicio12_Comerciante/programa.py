"""Professor: Nelio
Descrição: Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.
Autor(a): João Renato Sant'Ana
Data atual: 02/08/2023 """

# int n, i, abaixo, entre, acima
# float totalC, totalV
# float vetP[10], vetC[10], vetV[10]
# char vetN[10]

vetP: [float] = [0 for x in range(10)]
vetC: [float] = [0 for x in range(10)]
vetV: [float] = [0 for x in range(10)]
vetN: [str] = [0 for x in range(10)]

n = int(input("Serao digitados dados de quantos produtos? "))

abaixo = 0
entre = 0
acima = 0
totalC = 0
totalV = 0

for i in range(0, n):
    print(f"Produto {i+1}:")
    vetN[i] = input("Nome: ")
    vetC[i] = float(input("Preco de compra: "))
    vetV[i] = float(input("Preco de venda: "))
    vetP[i] = (100 * vetV[i] / vetC[i]) - 100

for i in range(0, n):
    if vetP[i] < 10:
        abaixo = abaixo + 1
    elif vetP[i] > 20:\
        acima = acima + 1
    else:
        entre = entre  + 1

for i in range(0, n):
    totalC = totalC + vetC[i]
    totalV = totalV + vetV[i]

print("\nRELATORIO")
print(f"Lucro abaixo de 10%: {abaixo}")
print(f"Lucro entre de 10% e 20%: {entre}")
print(f"Lucro acima de 20%: {acima}")
print(f"Valor total de compras: {totalC:.2f}")
print(f"Valor total de vendas: {totalV:.2f}")
print(f"Lucro total: {(totalV - totalC):.2f}")