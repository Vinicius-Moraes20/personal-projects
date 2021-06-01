dias = int(input("Quantos dias você ficou com o carro? "))
km = float(input("Quantos KM você rodou com o carro? "))
valPagar = (dias*60) + (km*0.15)
print("O valor que você terá que pagar é de R${}".format(valPagar))