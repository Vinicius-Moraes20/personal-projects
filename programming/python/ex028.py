from random import randint
pensado = randint(1, 5)
print(pensado)
advinhado = int(input("Advinhe que numero pensei> "))
print("ERRRROOOUUUU") if pensado != advinhado else print("Acertou miseravi")