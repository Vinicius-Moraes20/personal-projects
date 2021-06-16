from datetime import date

nasc = int(input("Digite o ano do seu nascimento: "))
data = date.today().year
idade = data - nasc

print("Você nasceu em {}, e tem {} anos em {}".format(nasc, idade, data))
if idade == 18:
    print("Você tem que se alistar imediatamente!")
elif idade < 18:
    diferenca = 18 - idade
    print("Ainda faltam {} ano(s) para seu alistamento".format(diferenca))
    print("Seu alistamento será no ano de {}".format(data + diferenca))
elif idade > 18:
    diferenca = idade - 18
    print("Você deveria ter se alistado a {} ano(s)".format(diferenca))
    print("Seu alistamento deveria ter sido feito no ano de {}".format(data - diferenca))
