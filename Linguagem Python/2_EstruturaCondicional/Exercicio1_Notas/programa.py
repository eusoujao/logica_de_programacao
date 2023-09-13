""" Professor: Nelio
Descrição: Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO".
Autor(a): João Renato Sant'Ana
Data atual: 01/08/2023 """

# float nota1, nota2, notaFinal;

nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))

notaFinal = nota1 + nota2

if notaFinal < 60.00:
    print("REPROVADO")
else:
    print("APROVADO")

