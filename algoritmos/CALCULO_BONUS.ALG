Algoritmo "calculo_bonus"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Caroline Siervo
// Descrição   : Calculo de bônus recebido ao mês
// Autor(a)    : Tec. E.E Vinicius Moraes
// Data atual  : 13/04/2021
Var
   sal_var: Real
   vendas: Inteiro

Inicio
      EscrevaL("--------------------------------------")
      EscrevaL("     CALCULO DE BONUS DO VENDEDOR")
      EscrevaL("--------------------------------------")
      Escreva("Digite o numero softwares vendidos: ")
      leia (vendas)
      sal_var <- 1250.0 + (vendas * 75.0)
      LimpaTela
      EscrevaL("--------------------------------------")
      EscrevaL("     CALCULO DE BONUS DO VENDEDOR")
      EscrevaL("--------------------------------------")
      EscrevaL("O vendedor obteve R$", (sal_var - 1250.0), " de bonus salarial")
      EscrevaL("O salario total do vendedor é R$", sal_var)

Fimalgoritmo