Algoritmo "contagem_de_gols"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Caroline Siervo
// Descri��o   :
// Autor(a)    : Tec. E.E Vinicius Moraes
// Data atual  : 29/04/2021
Var
   golsG, golsI: inteiro

Inicio
      EscrevaL("----------------------------------------------------")
      EscrevaL("                 Placar da Partida")
      EscrevaL("----------------------------------------------------")
      
      Escreva("Digite o numero de gols marcados pelo Gr�mio: ")
      Leia (golsG)
      Escreva("Digite o numero de gols marcados pelo Internacional: ")
      Leia (golsI)
      Limpatela
      
      EscrevaL("----------------------------------------------------")
      EscrevaL("                 Placar da Partida")
      EscrevaL("----------------------------------------------------")
      EscrevaL("     Gremio ", golsG," X" ,golsI," Internacional")
      Se (golsG > golsI) ent�o
         EscrevaL("        Vit�ria do Gremio!")
      senao
         Se (golsI > golsG) entao
            EscrevaL("     Vit�ria do Internacional!")
         Senao
            EscrevaL("           Empate!")
         Fimse
      Fimse
Fimalgoritmo