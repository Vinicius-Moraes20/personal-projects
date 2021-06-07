n1 = float(input("Digite a primeira nota: "))
n2 = float(input("Digite a segunda nota: "))
media = (n1 + n2) / 2
print("Sua média foi {:.1f}".format(media))
if (media <= 5) :
    print("Reprovado!")
else:
    print("Aprovado!")

#rint("Reprovado") if media <= 5 else print("Aprovado!")