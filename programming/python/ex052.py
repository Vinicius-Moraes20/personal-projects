n = int(input("Digite um numero inteiro: "))
totDiv = 0
print("O numero {} é divisivel por: ".format(n))
for count in range (1, n+1):
    if (n % count == 0):
        print("\033[32m", end=" ")
        totDiv+=1
    else:
        print("\033[31m", end=" ")
    print("{}".format(count), end=" ")
print("\033[m")
if (totDiv > 1):
    print("O numero {} é primo".format(n))
else:
    print("o numero {} não é primo".format(n))
    