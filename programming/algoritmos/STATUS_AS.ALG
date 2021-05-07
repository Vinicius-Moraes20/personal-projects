Algoritmo "status_as"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Caroline Siervo
// Descrição   :
// Autor(a)    : Tec. E.E Vinicius Moraes
// Data atual  : 06/05/2021
Var
   menu, menuSecundario: inteiro
   salAtual, aumento, credito: real

Inicio
    EscrevaL("                     Status AS")
    EscrevaL("")
    EscrevaL("        1 - Consultar aumento de salários")
    EscrevaL("        2 - Calcular crédito disponiveis")
    Escreva("        >")
    Leia(menu)
    LimpaTela
    Escolha(menu)
        Caso 1
            EscrevaL("                       Status AS")
            EscrevaL("")
            EscrevaL("              Consulta de aumento salárial")
            EscrevaL("")
            EscrevaL("         Código          Cargo           Percentual")
            EscrevaL("          101    Gerente de projetos         10%")
            EscrevaL("          102    Engenheiro de Software      20%")
            EscrevaL("          103    Técnico em Informatica      30%")
            EscrevaL("")
            Escreva("        >")
            Leia(menuSecundario)
            Escolha(MenuSecundario)
                caso 101
                    Escreva("        Digite o seu salário atual: R$")
                    Leia(salAtual)
                    aumento <- salAtual + (salAtual * 0.10)
                    LimpaTela
                    EscrevaL("        Cargo: Gerente de projetos")

                caso 102
                    Escreva("        Digite o seu salário atual: R$")
                    Leia(salAtual)
                    aumento <- salAtual + (salAtual * 0.20)
                    LimpaTela
                    EscrevaL("        Cargo: Engenheiro de Software")

                caso 103
                    Escreva("        Digite o seu salário atual: R$")
                    Leia(salAtual)
                    aumento <- salAtual + (salAtual * 0.30)
                    LimpaTela
                    EscrevaL("        Cargo: Técnico em Informatica")

                OutroCaso
                    EscrevaL("        Opção inválida")
            FimEscolha

            EscrevaL("        Salário antigo: R$", salAtual)
            EscrevaL("        Novo salário: R$", aumento)

        Caso 2
            EscrevaL("                       Status AS")
            EscrevaL("")
            EscrevaL("                  Consulta de Crédito")
            EscrevaL("")
            EscrevaL("         Código          Cargo           Percentual")
            EscrevaL("          101    Gerente de projetos         10%")
            EscrevaL("          102    Engenheiro de Software      20%")
            EscrevaL("          103    Técnico em Informatica      30%")
            EscrevaL("")
            Escreva("        >")
            Leia(menuSecundario)
            Escolha(MenuSecundario)
                caso 101
                    Escreva("        Digite o seu salário atual: R$")
                    Leia(salAtual)
                    credito <- salAtual * 0.20
                    LimpaTela
                    EscrevaL("        Cargo: Gerente de projetos")

                caso 102
                    Escreva("        Digite o seu salário atual: R$")
                    Leia(salAtual)
                    credito <- salAtual * 0.30
                    LimpaTela
                    EscrevaL("        Cargo: Engenheiro de Software")

                caso 103
                    Escreva("        Digite o seu salário atual: R$")
                    Leia(salAtual)
                    credito <- salAtual * 0.40
                    LimpaTela
                    EscrevaL("        Cargo: Técnico em Informatica")

                OutroCaso
                    EscrevaL("        Opção inválida")
            FimEscolha
            EscrevaL("        Salário: R$", salAtual)
            EscrevaL("        Crédito disponivel: R$", credito)
        OutroCaso
            EscrevaL("        Opção invaliada")
      Fimescolha

Fimalgoritmo