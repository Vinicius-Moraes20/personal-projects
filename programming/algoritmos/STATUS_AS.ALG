Algoritmo "status_as"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Caroline Siervo
// Descri��o   :
// Autor(a)    : Tec. E.E Vinicius Moraes
// Data atual  : 06/05/2021
Var
   menu, menuSecundario: inteiro
   salAtual, aumento, credito: real

Inicio
    EscrevaL("                     Status AS")
    EscrevaL("")
    EscrevaL("        1 - Consultar aumento de sal�rios")
    EscrevaL("        2 - Calcular cr�dito disponiveis")
    Escreva("        >")
    Leia(menu)
    LimpaTela
    Escolha(menu)
        Caso 1
            EscrevaL("                       Status AS")
            EscrevaL("")
            EscrevaL("              Consulta de aumento sal�rial")
            EscrevaL("")
            EscrevaL("         C�digo          Cargo           Percentual")
            EscrevaL("          101    Gerente de projetos         10%")
            EscrevaL("          102    Engenheiro de Software      20%")
            EscrevaL("          103    T�cnico em Informatica      30%")
            EscrevaL("")
            Escreva("        >")
            Leia(menuSecundario)
            Escolha(MenuSecundario)
                caso 101
                    Escreva("        Digite o seu sal�rio atual: R$")
                    Leia(salAtual)
                    aumento <- salAtual + (salAtual * 0.10)
                    LimpaTela
                    EscrevaL("        Cargo: Gerente de projetos")

                caso 102
                    Escreva("        Digite o seu sal�rio atual: R$")
                    Leia(salAtual)
                    aumento <- salAtual + (salAtual * 0.20)
                    LimpaTela
                    EscrevaL("        Cargo: Engenheiro de Software")

                caso 103
                    Escreva("        Digite o seu sal�rio atual: R$")
                    Leia(salAtual)
                    aumento <- salAtual + (salAtual * 0.30)
                    LimpaTela
                    EscrevaL("        Cargo: T�cnico em Informatica")

                OutroCaso
                    EscrevaL("        Op��o inv�lida")
            FimEscolha

            EscrevaL("        Sal�rio antigo: R$", salAtual)
            EscrevaL("        Novo sal�rio: R$", aumento)

        Caso 2
            EscrevaL("                       Status AS")
            EscrevaL("")
            EscrevaL("                  Consulta de Cr�dito")
            EscrevaL("")
            EscrevaL("         C�digo          Cargo           Percentual")
            EscrevaL("          101    Gerente de projetos         10%")
            EscrevaL("          102    Engenheiro de Software      20%")
            EscrevaL("          103    T�cnico em Informatica      30%")
            EscrevaL("")
            Escreva("        >")
            Leia(menuSecundario)
            Escolha(MenuSecundario)
                caso 101
                    Escreva("        Digite o seu sal�rio atual: R$")
                    Leia(salAtual)
                    credito <- salAtual * 0.20
                    LimpaTela
                    EscrevaL("        Cargo: Gerente de projetos")

                caso 102
                    Escreva("        Digite o seu sal�rio atual: R$")
                    Leia(salAtual)
                    credito <- salAtual * 0.30
                    LimpaTela
                    EscrevaL("        Cargo: Engenheiro de Software")

                caso 103
                    Escreva("        Digite o seu sal�rio atual: R$")
                    Leia(salAtual)
                    credito <- salAtual * 0.40
                    LimpaTela
                    EscrevaL("        Cargo: T�cnico em Informatica")

                OutroCaso
                    EscrevaL("        Op��o inv�lida")
            FimEscolha
            EscrevaL("        Sal�rio: R$", salAtual)
            EscrevaL("        Cr�dito disponivel: R$", credito)
        OutroCaso
            EscrevaL("        Op��o invaliada")
      Fimescolha

Fimalgoritmo