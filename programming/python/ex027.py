nome = str(input("Digite seu nome completo: ")).lower().strip()
nSeparado = nome.split()
print("Primeiro nome: {}".format(nSeparado[0].capitalize()))
print("Ultimo nome: {}".format(nSeparado[len(nSeparado) - 1].capitalize()))
