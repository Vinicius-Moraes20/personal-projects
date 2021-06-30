Algoritmo "areas-de-figuras"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Profª Caroline Siervo 
// Autor(a)    : Tec. E.E Vinicius Moraes Boeira Pereira
// Data atual  : 

Var
op: Inteiro
n1, n2, resultado: Real

Inicio
	EscrevaL(" ----- Calculo de Áreas -----")
	EscrevaL(" [ 1 ] Área do Quadrado")
	EscrevaL(" [ 2 ] Área do Retângulo")
	EscrevaL(" [ 3 ] Área do Triângulo")
	EscrevaL(" [ 4 ] Área do Losango")
	EscrevaL(" [ 5 ] Área do Circulo")
	Escreva(" > ")
	leia(op)
	LimpaTela
	escolha (op)
		caso 1
			EscrevaL(" ---------- Área do Quadrado ----------")
			Escreva("Digite o tamanho do lado do quadrado: ")
			Leia(n1)
			resultado <- n1 ^ 2
			EscrevaL("A área do quadrado é de ", resultado)
		caso 2
			EscrevaL(" ---------- Área do Retângulo ----------")
			Escreva("Digite o comprimento do retângulo: ")
			leia(n1)
			Escreva("Digite a largura do retângulo: ")
			leia(n2)
			resultado <- n1 * n2
			EscrevaL("A área do retângulo é de ", resultado)
			
		caso 3
			EscrevaL(" ---------- Área do Triangulo ----------")
			Escreva("Digite o tamanho da base o triangulo: ")
			leia(n1)
			Escreva("Digite tamanho da altura do triangulo: ")
			leia(n2)
			resultado <- (n1 * n2) / 2
			EscrevaL("A área do triangulo é de ", resultado)
				
		caso 4
			EscrevaL(" ---------- Área do Losango ----------")
			Escreva("Digite o tamanho da diagonal menor do losango: ")
			leia(n1)
			Escreva("Digite o tamanho da diagonal maior do losango: ")
			leia(n2)
			resultado <- (n1 * n2) / 2
			EscrevaL("A área do losango é de ", resultado)
				
		caso 5
			EscrevaL(" ---------- Área do Circulo ----------")
			Escreva("Digite o tamanho do raio do circulo: ")
			leia(n1)
			resultado <- 3.14 * (n1 ^2)
			EscrevaL("A área do circulo é de ", resultado)
		outroCaso
			EscrevaL("Opção Invalida")
				
		fimEscolha
Fimalgoritmo