num = int(input("Digite o valor que você deseja ver a tabuada: "))
for c in range(1, 11):
    print("{} x {} = {}".format(num, c, c * num))