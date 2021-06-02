co = float(input("Comprimento do cateto oposto: "))
ca = float(input("Comprimento do cateto adjacente: "))
hi = ((co ** 2) + (ca ** 2)) ** (1/2)
print("O comprimento da hipotenusa é de {:.2f}".format(hi))
