#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define qntLine    8    // Quantidade de linhas do tabuleiro
#define qntColumn 10    // Quantidade de colunas do tabuleiro

void print_board();     // Função para printar na tela o tabuleiro
void new_board();       // Função para gerar um novo tabuleiro
void play_game();

char board[qntLine][qntColumn] = {0};

main() {
    char option;
    int sort = 1;
    
    do {
        if (sort) {
            new_board();
            print_board(); 
        } else {
            printf("Opção invalida!");
            sort = 1;
        }

        printf("(S) Sorteador outro tabuleiro\n");
        printf("(J) jogar!\n >>>");
        scanf(" %c", &option);
        if(option != 's' && option != 'S') sort = 0;

    } while (option != 'j' && option != 'J');

    play_game();
}

void print_board() {
    system("cls");
    printf("----------------- BATALHA NAVAL -----------------\n\n");
    printf("       A   B   C   D   E   F   G   H   I   J  \n");
    printf("     -----------------------------------------\n");   
    printf("  1  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", board[0][0], board[0][1], board[0][2], board[0][3], board[0][4], board[0][5], board[0][6], board[0][7], board[0][8], board[0][9]);
    printf("     -----------------------------------------\n");
    printf("  2  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", board[1][0], board[1][1], board[1][2], board[1][3], board[1][4], board[1][5], board[1][6], board[1][7], board[1][8], board[1][9]);
    printf("     -----------------------------------------\n");
    printf("  3  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", board[2][0], board[2][1], board[2][2], board[2][3], board[2][4], board[2][5], board[2][6], board[2][7], board[2][8], board[2][9]);
    printf("     -----------------------------------------\n");
    printf("  4  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", board[3][0], board[3][1], board[3][2], board[3][3], board[3][4], board[3][5], board[3][6], board[3][7], board[3][8], board[3][9]);
    printf("     -----------------------------------------\n");
    printf("  5  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", board[4][0], board[4][1], board[4][2], board[4][3], board[4][4], board[4][5], board[4][6], board[4][7], board[4][8], board[4][9]);
    printf("     -----------------------------------------\n");
    printf("  6  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", board[5][0], board[5][1], board[5][2], board[5][3], board[5][4], board[5][5], board[5][6], board[5][7], board[5][8], board[5][9]);
    printf("     -----------------------------------------\n");
    printf("  7  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", board[6][0], board[6][1], board[6][2], board[6][3], board[6][4], board[6][5], board[6][6], board[6][7], board[6][8], board[6][9]);
    printf("     -----------------------------------------\n");
    printf("  8  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", board[7][0], board[7][1], board[7][2], board[7][3], board[7][4], board[7][5], board[7][6], board[7][7], board[7][8], board[7][9]);
    printf("     -----------------------------------------\n");
    putchar('\n');
}

void new_board() {
    unsigned rand_num;
    register int x, y;

    unsigned long capture;      //|
    time(&capture);             //| Gerador de seed do tabuleiro
    srand((unsigned)capture);   //|

    for (x = 0; x < qntLine; x++) {
        for(y = 0; y < qntColumn; y++) {
            rand_num = rand() % 100 + 1;
            if(rand_num % 2) board[x][y] = '@';
            else             board[x][y] = 0x20;
        }
    }
}

void play_game() {
    
}