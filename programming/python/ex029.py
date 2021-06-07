km = int(input("Digite quantos KM/h você está: "))
if km > 80 :
    print("Multado!")
    valPagar = (km - 80) * 7
    print("Valor a pagar: R${:.2f}".format(valPagar))