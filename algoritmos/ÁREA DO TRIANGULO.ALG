Algoritmo "área_do_triangulo"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Profª Caroline Siervo
// Descrição   : Algoritmo de cálculo da área de um triângulo
// Autor(a)    : Tec. Vinicius Moraes
// Data atual  : 30/03/2021
Var
   base, altura: REAL


Inicio
      EscrevaL("===========================")
      EscrevaL("     Área do Triângulo")
      EscrevaL("===========================")
      
      EscrevaL("DIGITE A BASE DO TRIANGULO:")
      Leia(base)
      
      EscrevaL("DIGITE A ALTURA DO TRIANGULO:")
      Leia(altura)
      
      EscrevaL("===========================")
      EscrevaL("A area do triangulo é de:", (base * altura) / 2)
Fimalgoritmo