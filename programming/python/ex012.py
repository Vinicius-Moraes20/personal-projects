valProd = float(input("Digite o valor do produto: R$"))
desconto = valProd - (valProd*0.05)
print("O valor final do produto com 5% de desconto fica R${:.2f}".format(desconto))