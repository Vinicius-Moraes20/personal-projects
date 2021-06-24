altura = float(input("Digite sua altura: (m) "))
peso = float(input("Digite seu peso: (Kg) "))

imc = peso / (altura ** 2)
print("Seu IMC é de {:.2f}".format(imc))

if imc < 18.5:
    print("Abaixo do peso normal")
elif imc >= 18.5 and imc < 25:
    print("Peso normal")
elif imc <= 25 and imc < 30:
    print("Sobrepeso")
elif imc <= 30 and imc < 40:
    print("Obesidade")
else:
    print("Obesidade mórbida")