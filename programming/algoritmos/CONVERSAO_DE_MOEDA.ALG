Algoritmo "conversao_de_moeda"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Prof� Caroline Siervo
// Descri��o   : Programa para fazer a convers�o de Dolar para Reais
// Autor(a)    : Tec. E.E Vinicius Moraes
// Data atual  : 06/04/2021
Var
   cotacao, valEnt: Real

Inicio
      EscrevaL("        Convers�o de Dolar para Reais")
      EscrevaL("----------------------------------------------")
      Escreva("Digite o valor do produto: $")
      Leia(valEnt)
      Escreva("Digite a cota��o do Dolar: R$")
      Leia(cotacao)
      limpatela
      EscrevaL("        Convers�o de Dolar para Reais")
      EscrevaL("----------------------------------------------")
      EscrevaL("VALOR EM DOLAR: $", valEnt)
      EscrevaL("VALOR CONVERTIDO: R$", valEnt * cotacao)


Fimalgoritmo