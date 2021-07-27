#include<stdlib.h>
#include<stdio.h>

/* ----- Macros -----*/
#define maior(a, b) a > b ? a : b 

void main() {
    int n1, n2;
    printf("Digite dois numero: ");
    scanf("%d %d", &n1, &n2);
    printf("o maior numero digitado foi %d \n", maior(n1, n2));

    system("pause");
}
