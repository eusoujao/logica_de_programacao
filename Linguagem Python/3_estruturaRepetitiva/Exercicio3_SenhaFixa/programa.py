"""  Professor: Nelio
Descrição:Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de
senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
encerrado. Considere que a senha correta é o valor 2002.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int senha, tentativa;

senha = 2002

tentativa = int(input("Digite a senha: "))

while tentativa != senha:
    tentativa = int(input("Senha invalida! Tente novamente: "))

print("Acesso permitido! ")