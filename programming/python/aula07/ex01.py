n1 = int(input("Digite um valor: "))
n2 = int(input("Digite outro valor: "))

s = n1 + n2
m = n1 * n2
d = n1 / n2
p = n1 ** n2
di = n1 // n2

print("A soma entre os dois numero é {}, o produto é {} e a divisão é {:.3f}".format(s, m, d), end = ' ')
print("A divisão inteira é {} e a potência é {}".format(di, p))