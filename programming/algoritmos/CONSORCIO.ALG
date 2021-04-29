Algoritmo "consorcio"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Caroline Siervo
// Descrição   :
// Autor(a)    : Vinicius Moraes
// Data atual  : 15/04/2021
Var
   qntPrestacoes, qntPagas: Inteiro
   valPrestacoes: Real

Inicio
      EscrevaL("----------------------------------------")
      EscrevaL("              CONSÓRCIO")
      EscrevaL("----------------------------------------")
      
      Escreva("Digite o valor da prestação: R$")
      leia(valPrestacoes)
      Escreva("Em quantas vezes o consórcio foi feito? ")
      leia(qntPrestacoes)
      Escreva("Quantas prestações ja foram pagas? ")
      leia(qntPagas)
      
      Limpatela
      EscrevaL("----------------------------------------")
      EscrevaL("              CONSÓRCIO")
      EscrevaL("----------------------------------------")
      EscrevaL("Valor total pago: R$", qntPagas * valPrestacoes)
      EscrevaL("valor pendente: R$", (qntPrestacoes * valPrestacoes) - (qntPagas * valPrestacoes))

Fimalgoritmo