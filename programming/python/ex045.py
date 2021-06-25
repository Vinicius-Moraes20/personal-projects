from random import randint
from time import sleep
lista = ('Pedra', 'Papel', 'Tesoura')
computador = randint(0, 2)

print("""Qual será a sua jogada??
[ 1 ] Pedra
[ 2 ] Papel
[ 3 ] Tesoura""")
jogador = int(input("> "))
print("   JO")
sleep(1)
print("   KEN")
sleep(1)
print("   PO!")
print("=-" * 20)
print("O computador jogou {}".format(lista[computador]))
print("O jogador jogou {}".format(lista[jogador]))
print("=-" * 20)
if computador == 0:
    if jogador == 0:
        print("Empate")
    if jogador == 1:
        print("Vitória do jogador!")
    if jogador == 2:
        print("Vitória do computador!")

if computador == 1:
    if jogador == 0:
        print("Vitória do comptuador!")
    if jogador == 1:
        print("Empate!")
    if jogador == 2:
        print("Vitória do jogador!")

if computador == 2:
    if jogador == 0:
        print("Vitória do jogador!")
    if jogador == 1:
        print("Vitória do computador!")
    if jogador == 2:
        print("Empate!")
