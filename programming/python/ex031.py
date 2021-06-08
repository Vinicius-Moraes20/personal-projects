distancia = int(input("Digite a distancia da viagem (Km): "))
if (distancia <= 250):
    valTotal = distancia * 0.50
else:
    valTotal = distancia * 0.45
print("Valor total a pagar: R${}".format(valTotal))
