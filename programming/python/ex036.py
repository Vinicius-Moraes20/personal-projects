valCasa = float(input("Digite o valor da casa: R$"))
salario = float(input("Digite o valor do seu salário: R$"))
anos = int(input("Em quantos anos você deseja pagar a sua casa? "))

prestacao = valCasa / (anos * 12)

print("Para pagar a casa no valor de R${:.2f}, em {} anos, a prestação será de R${:.2f}".format(valCasa, anos, prestacao))
if prestacao > (salario * 0.30):
    print("Emprestimo negado!")
else:
    print("Emprestimo aprovado!")
