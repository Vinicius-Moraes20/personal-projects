Algoritmo "calculadora"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Profª Caroline Siervo
// Autor(a)    : Tec. E.E Vinicius Moraes Boeira Pereira
// Data atual  :  13/05/2021

Var
	n1, n2, resultado: Real
	op: Inteiro

Inicio
	EscrevaL("     ----- Calculadora -----")
	EscrevaL("     Escolha a operação:")
	EscrevaL("   [ 1 ] Adição")
	EscrevaL("   [ 2 ] Subtração")
	EscrevaL("   [ 3 ] Multiplicação")
	EscrevaL("   [ 4 ] Divisão")
	Escreva("     >")
	Leia(op)

	Se (op = 1) entao
		LimpaTela
		EscrevaL(" ---------- Adição ----------")
		Escreva("Digite o primeiro numero: ")
		leia(n1)
		Escreva("Digite o segundo numero: ")
		leia(n2)
		EscrevaL("A soma de ", n1," +", n2," é", n1 + n2)
	senao
		Se (op = 2) entao
			LimpaTela
			EscrevaL(" ---------- Subtração ----------")
			Escreva("Digite o primeiro numero: ")
			leia(n1)
			Escreva("Digite o segundo numero: ")
			leia(n2)
			EscrevaL("A subtração de ", n1," -", n2," é", n1 - n2)

		senao
			se (op = 3) entao
				LimpaTela
				EscrevaL(" ---------- Multiplicação ----------")
				Escreva("Digite o primeiro numero: ")
				leia(n1)
				Escreva("Digite o segundo numero: ")
				leia(n2)
				EscrevaL("A multiplicação de ", n1," *", n2," é", n1 * n2)

			senao
				LimpaTela
				se (op = 4) entao
					EscrevaL(" ---------- Divisão ----------")
					Escreva("Digite o primeiro numero :")
					leia(n1)
					Escreva("Digite o segundo numero: ")
					leia(n2)
					EscrevaL("A divisão de ", n1," /", n2," é", n1 / n2)
				senao
					escrevaL("     Opção Invalida!")
				fimSe
			fimSe
		fimSe
	Fimse
Fimalgoritmo

