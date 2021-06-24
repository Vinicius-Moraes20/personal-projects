from datetime import date

anoNasc = int(input("Digite seu ano de nascimento: "))

anoAtual = date.today().year
idade = anoAtual - anoNasc

print("O atleta tem {} anos.\nClassificação: ".format(idade), end='')
if idade <= 9:
    print("Mirim")
elif idade <= 14:
    print("infantil")
elif idade <= 10:
    print("Junior")
elif idade <= 25:
    print("Sênior")
else:
    print("Master")