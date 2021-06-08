salario = float(input("Digite o seu salário: R$"))
if salario < 1250.0:
    novSalario = salario + (salario * 0.15)
else:
    novSalario = salario + (salario * 0.10)
print("Seu novo salario será no valor de R${:.2f}".format(novSalario))