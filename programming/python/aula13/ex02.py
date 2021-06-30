inicio = int(input("Inicio: "))
fim = int(input("Fim: "))
passo = int(input("Passo: "))
for count in range(inicio, fim + 1, passo):
    print(count)
print("Fim")