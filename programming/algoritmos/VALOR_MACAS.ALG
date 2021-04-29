Algoritmo "valor_macas"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Caroline Siervo
// Descrição   :
// Autor(a)    : Tec. E.E Vinicius Moraes
// Data atual  : 29/04/2021
Var
   valTotal: Real
   qntMacas: Inteiro


Inicio
      EscrevaL("-----------------------------------")
      Escreval("        CAIXA DA FRUTEIRA")
      EscrevaL("-----------------------------------")
      
      Escreva("Quantidade de maçãs compradas: ")
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
      Escreval("Quantidade de maçãs: ", qntMacas)
      EscrevaL("Valor a pagar: R$", valTotal)
Fimalgoritmo