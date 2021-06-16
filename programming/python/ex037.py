num = int(input("Digite um numero inteiro qualquer: "))
print("Para qual base você deseja converter? ")
print("[1] Binário")
print("[2] Octal")
print("[3] Hexadecimal")
menu = int(input("   > "))

if menu == 1:
    print("Decimal {} = Binário {}".format(num, bin(num) [2:]))
elif menu == 2:
    print("Decimal {} = Octal {}".format(num, oct(num) [2:]))
elif menu == 3:
    print("Decimal {} = Hexadecima {}".format(num, hex(num) [2:]))
else:
    print("Opção inválida!")
