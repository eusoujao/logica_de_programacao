"""Professor: Nelio
Descrição: Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# float precoDoProduto, recebido, troco
# int quantidade

precoDoProduto = float(input("Preco unitario do produto: "))
quantidade = int(input("Quantidade comprada: "))
recebido = float(input("Dinheiro recebido: "))

troco = recebido - precoDoProduto * quantidade

print(f"Troco = {troco:.2f}")