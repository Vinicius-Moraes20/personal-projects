valor = input("Digite algo: ")
print("É do tipo", type(valor))
print("Valor numérico:", valor.isnumeric())
print("Valor Alfa:", valor.isalpha())
print("Valor Alfanumérico:", valor.isalnum())
print("Valor ASCII:", valor.isascii())
print("Valor Decimal", valor.isdecimal())
print("Valor Printavel", valor.isprintable())