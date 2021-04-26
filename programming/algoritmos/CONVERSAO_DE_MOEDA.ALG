Algoritmo "conversao_de_moeda"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Profª Caroline Siervo
// Descrição   : Programa para fazer a conversão de Dolar para Reais
// Autor(a)    : Tec. E.E Vinicius Moraes
// Data atual  : 06/04/2021
Var
   cotacao, valEnt: Real

Inicio
      EscrevaL("        Conversão de Dolar para Reais")
      EscrevaL("----------------------------------------------")
      Escreva("Digite o valor do produto: $")
      Leia(valEnt)
      Escreva("Digite a cotação do Dolar: R$")
      Leia(cotacao)
      limpatela
      EscrevaL("        Conversão de Dolar para Reais")
      EscrevaL("----------------------------------------------")
      EscrevaL("VALOR EM DOLAR: $", valEnt)
      EscrevaL("VALOR CONVERTIDO: R$", valEnt * cotacao)


Fimalgoritmo