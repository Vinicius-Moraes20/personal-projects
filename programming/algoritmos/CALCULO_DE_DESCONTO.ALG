Algoritmo "calculo_de_desconto"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Caroline Siervo
// Descri��o   : Algoritmo para calcular o desconto de 15% do valor digitado pelo usu�rio
// Autor(a)    : Tec. E.E Vincius Moraes
// Data atual  : 06/04/2021
Var
   valTot, desc: real


Inicio
      Escreva("Digite o valor total da compra: ")
      Leia (valTot)
      desc <- valTot * 0.15
      EscrevaL("===================================")
      EscrevaL("VALOR DA COMPRA: R$", valTot)
      EscrevaL("VALOR DO DESCONTO: R$", desc)
      EscrevaL("VALOR A PAGAR: R$", valTot - desc)

Fimalgoritmo