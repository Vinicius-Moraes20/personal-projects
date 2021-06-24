r1 = float(input("Digite o tamanho da primeiro segmento: "))
r2 = float(input("Digite o tamanho da segunda  segmento: "))
r3 = float(input("Digite o tamanho da terceira segmento: "))

if r1 < r2 + r3 and r2 < r1 + r3 and r3 < r1 + r2:
    print("Os seguementos acima podem formar um triangulo!")
    if r1 == r2 == r3:
        print("Triangulo Equilátero")
    elif r1 == r2 or r1 == r3 or r3 == r2:
        print("Triangulo Isóceles")
    else:
        print("Triangulo Escaleno")
else:
    print("Os segmento acima não pode formar um triangulo!")
