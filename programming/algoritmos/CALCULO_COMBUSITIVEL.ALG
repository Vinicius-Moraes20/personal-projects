Algoritmo "calculo_combusitivel"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Profª. Caroline Siervo
// Descrição   :
// Autor(a)    : Tec. E.E Vinicius Moraes
// Repositório : github.com/Vinicius-Moraes20
// Data atual  : 21/04/2021
Var
   tempViagem, velMedia, km: Real


Inicio
      EscrevaL("----------------------------------------------")
      EscrevaL("       CALCULADORA DE COMBUSTIVEL GASTO")
      EscrevaL("----------------------------------------------")
      Escreva("Digite o tempo de viagem: ")
      Leia(tempViagem)
      Escreva("Digite a velocidade média durante a viagem: ")
      Leia(velMedia)
      km <- tempViagem * velMedia
      LimpaTela
      EscrevaL("----------------------------------------------")
      EscrevaL("       CALCULADORA DE COMBUSTIVEL GASTO")
      EscrevaL("----------------------------------------------")
      EscrevaL("A velocidade média durante a viagem foi de", velMedia, "Km/h")
      EscrevaL("A duração da viagem foi de", tempViagem, " Horas")
      EscrevaL("A distancia percorrida durante a viagem foi de", km, "Km")
      Escreval("Foram gastos ", km / 12, " litros de combustivel")
Fimalgoritmo