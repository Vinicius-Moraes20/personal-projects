frase = input("Digite uma frase: ").strip().lower()
print("Quantas vezes apareceram a letra A no programa: {}x".format(frase.count('a')))
print("A letra A aparece pela primeira vez na {}ª posição".format(frase.find('a') + 1))
print("A letra A aparece pela ultima vez na {}ª posição".format(frase.rfind('a') + 1))