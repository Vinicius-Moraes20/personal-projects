#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define qntLine    8
#define qntColumn 10

void print_board(char b[qntLine][qntColumn]);
void new_seed();
void convert_column(char col);


void main() {
    char board_boats[qntLine][qntColumn] = {0},
         opt = 'S', sort = 1, col = 0;
    unsigned rand_num, row, hits, miss;
    register int i, j;

    do {
        if(sort) {
            system("cls");
            new_seed();

            for (i = 0; i < qntLine; i++) {
                for (j = 0; j < qntColumn; j++) {
                    rand_num = rand() % 100 + 1;

                    if(rand_num % 2) board_boats[i][j] = '@';
                    else             board_boats[i][j] = 0x20;
                } // end for column
            }     //end for line
            print_board(board_boats);
        } else {
            printf("Opcao invalida!\n");
            sort = 1;
        }

        printf("(S) Sorteador novamente\n");
        printf("(J) jogar \n >>>");
        scanf(" %c", &opt);
        if(opt != 's' && opt != 'S') sort = 0;

        
    } while (opt != 'j' && opt != 'J');
    system("cls");
    print_board(board_boats);
    printf("ALVOS ATINGIDOS: %3d | ERROS %3D\n", hits, miss);
    while(1) {
        printf("Digite a posicao para o disparo: ");
        scanf(" %c %d", &col, &row);
        system("cls");
        if (board_boats)
    }
    
    system("pause");
    return 0;
}


void print_board(char b[qntLine][qntColumn]) {
    printf("----------------- BATALHA NAVAL -----------------\n\n");
    printf("       A   B   C   D   E   F   G   H   I   J  \n");
    printf("     -----------------------------------------\n");   
    printf("  1  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[0][0], b[0][1], b[0][2], b[0][3], b[0][4], b[0][5], b[0][6], b[0][7], b[0][8], b[0][9]);
    printf("     -----------------------------------------\n");
    printf("  2  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[1][0], b[1][1], b[1][2], b[1][3], b[1][4], b[1][5], b[1][6], b[1][7], b[1][8], b[1][9]);
    printf("     -----------------------------------------\n");
    printf("  3  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[2][0], b[2][1], b[2][2], b[2][3], b[2][4], b[2][5], b[2][6], b[2][7], b[2][8], b[2][9]);
    printf("     -----------------------------------------\n");
    printf("  4  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[3][0], b[3][1], b[3][2], b[3][3], b[3][4], b[3][5], b[3][6], b[3][7], b[3][8], b[3][9]);
    printf("     -----------------------------------------\n");
    printf("  5  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[4][0], b[4][1], b[4][2], b[4][3], b[4][4], b[4][5], b[4][6], b[4][7], b[4][8], b[4][9]);
    printf("     -----------------------------------------\n");
    printf("  6  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[5][0], b[5][1], b[5][2], b[5][3], b[5][4], b[5][5], b[5][6], b[5][7], b[5][8], b[5][9]);
    printf("     -----------------------------------------\n");
    printf("  7  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[6][0], b[6][1], b[6][2], b[6][3], b[6][4], b[6][5], b[6][6], b[6][7], b[6][8], b[6][9]);
    printf("     -----------------------------------------\n");
    printf("  8  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[7][0], b[7][1], b[7][2], b[7][3], b[7][4], b[7][5], b[7][6], b[7][7], b[7][8], b[7][9]);
    printf("     -----------------------------------------\n");
    putchar('\n');
}

void new_seed() {
    unsigned long capture; 
    time(&capture);
    srand((unsigned)capture);
}

void convert_column(char col) {
    switch(col) {

    }
}