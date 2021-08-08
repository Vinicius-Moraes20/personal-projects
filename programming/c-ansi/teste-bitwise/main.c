#include<stdio.h>
#include<stdlib.h>

void printBin(unsigned char reg);

main() {
	unsigned char numHex;
	printf("Digite um numero em hexadecimal: ");
	scanf("%x", &numHex);
	printBin(numHex);
	
}

void printBin(unsigned char reg) {
    register int i;
  
    for(i = 7; i >= 0; i--) (reg >> i) & 1 ? putchar('1') : putchar('0');
    
    printf("b\n");
     
}

// escrever sempre .2 para mostrar os 2 nibles do byte

/*
	AND: &      as duas entradas sendo nivel alto
	OR:  |      uma ou mais entradas sendo nivel alto
	XOR: ^      quando o numero de entradas em alto for impar
*/
