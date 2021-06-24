valCompras = float(input("Digite o valor total das compras: R$"))
print ("""---- Formas de pagamento ----
[1] à vista dinheiro/cheque
[2] à vista cartão
[3] 2x no cartão
[4] 3x ou mais no cartão""")
op = int(input("> "))

if op == 1:
    valPagar = valCompras - (valCompras * 0.10)
elif op == 2:
    valPagar = valCompras - (valCompras * 0.05)
elif op == 3:
    valPagar = valCompras
    print("Você pagara 2 parcelas de R${:.2f}".format(valCompras / 2))
elif op == 4:
    valPagar = valCompras + (valCompras * 0.20)
    parcelas = int(input("Quantidade de parcelas: "))
    print("Você pagara {} parcelas de R${}".format(parcelas, valPagar / parcelas))
print("Sua compra de R${:.2f}, custará R${:.2f}".format(valCompras, valPagar))