"""  Professor: Nelio
Descrição: Uma empresa vai conceder um aumento percentual de
salário aos seus funcionários dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o salário de uma pessoa, daí mostrar
qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# int porcentagem;
# float salario, nsalario, aumento;

salario = float(input("Digite o salario da pessoa: "))

if salario <= 1000.00:
    porcentagem = 20
elif salario <= 3000.00:
    porcentagem = 15
elif salario <= 8000.00:
    porcentagem = 10
else:
    porcentagem = 5

aumento = salario * porcentagem / 100
nsalario = salario + aumento

print(f"Novo salario = R${nsalario:.2f}")
print(f"Aumento = R${aumento:.2f}")
print(f"Porcentagem = {porcentagem}%")