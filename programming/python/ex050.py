s = 0
for c in range(1, 7):
    num = int(input("Digite o {}º numero: ".format(c)))
    if(num % 2 == 0):
        s += num
print("FIM\nO somatório de todos os numeros pares foi de {}".format(s))