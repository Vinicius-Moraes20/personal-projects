Algoritmo "calculo_combusitivel"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Prof�. Caroline Siervo
// Descri��o   :
// Autor(a)    : Tec. E.E Vinicius Moraes
// Reposit�rio : github.com/Vinicius-Moraes20
// Data atual  : 21/04/2021
Var
   tempViagem, velMedia, km: Real


Inicio
      EscrevaL("----------------------------------------------")
      EscrevaL("       CALCULADORA DE COMBUSTIVEL GASTO")
      EscrevaL("----------------------------------------------")
      Escreva("Digite o tempo de viagem: ")
      Leia(tempViagem)
      Escreva("Digite a velocidade m�dia durante a viagem: ")
      Leia(velMedia)
      km <- tempViagem * velMedia
      LimpaTela
      EscrevaL("----------------------------------------------")
      EscrevaL("       CALCULADORA DE COMBUSTIVEL GASTO")
      EscrevaL("----------------------------------------------")
      EscrevaL("A velocidade m�dia durante a viagem foi de", velMedia, "Km/h")
      EscrevaL("A dura��o da viagem foi de", tempViagem, " Horas")
      EscrevaL("A distancia percorrida durante a viagem foi de", km, "Km")
      Escreval("Foram gastos ", km / 12, " litros de combustivel")
Fimalgoritmo