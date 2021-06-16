n1 = float(input("Digite a primeira nota do aluno: "))
n2 = float(input("Digite a segunda nota do aluno: "))

media = (n1 + n2) / 2

if media < 5.0:
    print("Media não atingida: {:.1f} \033[1;31mREPROVADO\033[m".format(media))
elif media > 5.0 and media < 7.0:
    print("Média não atingida: {:.1f} \033[1;33mRECUPERAÇÃO\033[m".format(media))
elif media >= 7.0:
    print("Média atingida: {:.1f} \033[1;32mAPROVADO!\033[m".format(media))
