Algoritmo "consorcio"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Caroline Siervo
// Descri��o   :
// Autor(a)    : Vinicius Moraes
// Data atual  : 15/04/2021
Var
   qntPrestacoes, qntPagas: Inteiro
   valPrestacoes: Real

Inicio
      EscrevaL("----------------------------------------")
      EscrevaL("              CONS�RCIO")
      EscrevaL("----------------------------------------")
      
      Escreva("Digite o valor da presta��o: R$")
      leia(valPrestacoes)
      Escreva("Em quantas vezes o cons�rcio foi feito? ")
      leia(qntPrestacoes)
      Escreva("Quantas presta��es ja foram pagas? ")
      leia(qntPagas)
      
      Limpatela
      EscrevaL("----------------------------------------")
      EscrevaL("              CONS�RCIO")
      EscrevaL("----------------------------------------")
      EscrevaL("Valor total pago: R$", qntPagas * valPrestacoes)
      EscrevaL("valor pendente: R$", (qntPrestacoes * valPrestacoes) - (qntPagas * valPrestacoes))

Fimalgoritmo