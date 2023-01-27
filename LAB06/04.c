#include <stdio.h>

#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    // set up player pieces
    int n;
    scanf("%d", &n);
    
    int board[BOARD_SIZE][BOARD_SIZE] = { 0 };

    for (int i = 0; i < n; i++) {
        char piece;
        int xPos, yPos;
        scanf(" %c(%d, %d)", &piece, &yPos, &xPos);
        //printf("%c(%d, %d)\n", piece, xPos, yPos);
        setPieceOnTable(board, piece, xPos, yPos);
    }
    printf("------------------\n");


    // Create board
    printf(" ");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf(" %d", i);
    }
    printf("\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%d", i);
        for (int j = 0; j <= BOARD_SIZE; j++) {
            (j == BOARD_SIZE) ? printf("|") : ((board[i][j] >= 'a' && board[i][j] <= 'z') || (board[i][j] >= 'A' && board[i][j] <= 'Z')) ? printf("|%c", board[i][j]): printf("| ");
        }
        printf("\n");
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos) {
    board[xPos][yPos] = piece;
}