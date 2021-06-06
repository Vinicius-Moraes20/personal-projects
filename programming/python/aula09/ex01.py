frase = '   Curso em Video Python   '

#print(frase[3:15:2])
print(frase.upper().count("O"))
print(len(frase.strip()))
frase[0].replace('C', 'J')
print(frase.replace('Python', 'Android'))

print('Curso' in frase)
print(frase.find('Curso'))

dividido = frase.split()
print(dividido)
print(dividido[0])
print(dividido[2][3])

#print("""Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.""")