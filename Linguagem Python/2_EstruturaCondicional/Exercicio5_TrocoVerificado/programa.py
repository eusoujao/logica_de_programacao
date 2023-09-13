""" Professor: Nelio
Descrição: Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int quantidade;
# float preco, recebido, troco, total;

preco = float(input("Preco unitario do produto: "))
quantidade = int(input("Quantidade comprada: "))
recebido = float(input("Dinheiro recebido: "))

total = preco * quantidade
troco = recebido - total

if total > recebido:
    print(f"DINHEIRO INSULFICIENTE. FALTAM {(total - recebido):.2f} REAIS")
else:
    print(f"Troco = {troco:.2f}")