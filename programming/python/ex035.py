r1 = float(input("Digite o tamanho da primeira reta: "))
r2 = float(input("Digite o tamanho da segunda  reta: "))
r3 = float(input("Digite o tamanho da terceira reta: "))

print("Os segmentos acima, podem format um triangulo") if r1 < r2 + r3 and r2 < r1 + r3 and r3 < r1 + r2 else print("Os seguementos acima, não podem formar uma reta")
