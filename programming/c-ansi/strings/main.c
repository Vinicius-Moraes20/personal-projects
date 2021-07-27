#include<stdlib.h>
#include<stdio.h>

main() {
    char nome[40];
    int a = 10;
    printf("Digite seu nome completo: ");
    gets(nome);
    puts(nome);
    printf("\nNome completo: %s\n", nome);
    system("pause");
    return 0;
}
