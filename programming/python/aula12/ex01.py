nome = str(input("Digite seu nome: ")).strip().capitalize()
if (nome == 'Vinicius'):
    print("Que nome bonito!")
elif (nome == 'Pedro' or nome == 'Maria' or nome == 'Paulo'):
    print("Seu nome é bem popular no Brasil!")
elif (nome in 'Ana Claudia Jessica Juliana'):
   print("Belo nome feminino!")
print("Tenha um bom dia {}".format(nome))