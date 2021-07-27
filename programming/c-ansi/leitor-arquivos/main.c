#include<stdlib.h>
#include<stdio.h>

main() {
    FILE *archive;
    int ch;

    archive = fopen("yourText.txt", "r");

    if (archive == NULL) {
        printf("Erro na leitura do arquivo :(\n");
    }
    while ((ch = fgetc(archive)) != EOF) printf("%c", ch);
    
    fclose(archive);
    printf("\n");
    system("pause");
}