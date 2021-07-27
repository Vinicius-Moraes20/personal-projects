#include<stdlib.h>
#include<stdio.h>

main() {
    int *ptr = NULL;      //é uma boa pratica inicializar os ponteiros, nem que seja com valor NULL
    int n;

    n = 5;      
    ptr = &n;  // definindo o endereço para onode o ponteiro ira apontar (definido atraves do caracter &)
    printf("Conteudo de N: %d\n", n);
    *ptr = 9;
    printf("Conteudo de N atualizado: %d\n", n);

    printf("Conteudo do ponteiro (hex): %x\n", ptr);
    printf("Enreco da varial apontada (hex): %x\n", &n);

    /* O conteudo do ponteiro, será igual ao endereço da variavel que lhe é atribuida*/

    system("pause");
    return 0;
}