frase = str(input("Digite uma frase: ")).strip().upper()
palavras = frase.split()
junto = ''.join(palavras)
inverso = ''

for letra in range(len(junto) - 1, -1, -1):
    inverso += junto[letra]
print(inverso)

print("O inverso da frase {} é {}".format(junto, inverso))
if (inverso == junto):
    print("Esta frase é um palindromo!")
else:
    print("Esta frase não é um palindromo")