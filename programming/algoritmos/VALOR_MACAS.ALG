Algoritmo "valor_macas"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Caroline Siervo
// Descri��o   :
// Autor(a)    : Tec. E.E Vinicius Moraes
// Data atual  : 29/04/2021
Var
   valTotal: Real
   qntMacas: Inteiro


Inicio
      EscrevaL("-----------------------------------")
      Escreval("        CAIXA DA FRUTEIRA")
      EscrevaL("-----------------------------------")
      
      Escreva("Quantidade de ma��s compradas: ")
      Leia(qntMacas)
      
      se (qntMacas < 12) entao
           valTotal <- qntMacas * 0.30
      senao
           valTotal <- qntMacas * 0.25
      fimse
      Limpatela
      EscrevaL("-----------------------------------")
      Escreval("        CAIXA DA FRUTEIRA")
      EscrevaL("-----------------------------------")
      Escreval("Quantidade de ma��s: ", qntMacas)
      EscrevaL("Valor a pagar: R$", valTotal)
Fimalgoritmo