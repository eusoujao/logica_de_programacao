"""Professor: Nelio
Descrição: Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
uma mensagem explicativa.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# char nome[50];
# float valorPorHora, horasTrab, salario;

nome = input("Nome: ")
valorPorHora = float(input("Valor por hora: "))
horasTrab = float(input("Horas trabalhadas: "))

salario = valorPorHora * horasTrab

print(f"O pagamento para {nome} deve ser {salario:.2f}")