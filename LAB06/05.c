#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int board[][BOARD_SIZE], int x, int y) {
    board[x][y] = 'B';
    for (int i = 1; i < BOARD_SIZE; i++) {
        if (x - i >= 0 && y - i >= 0) board[x-i][y-i] = 'X';
        if (x + i <= 7 && y - i >= 0) board[x+i][y-i] = 'X';
        if (x - i >= 0 && y + i <= 7) board[x-i][y+i] = 'X';
        if (x + i <= 7 && x + i <= 7) board[x+i][y+i] = 'X';
    }
}

int main() {
    int board[BOARD_SIZE][BOARD_SIZE] = { 0 };
    int x, y;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x, &y);
    if ((x >= 0 && y >= 0) && (x <=7 && y <= 7)) bishopMoves(board, y, x);
    printf(" ");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf(" %d", i);
    }
    printf("\n------------------");
    printf("\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%d", i);
        for (int j = 0; j <= BOARD_SIZE; j++) {
            //board[x+i][y-i] = 'X'; 
            if (j == BOARD_SIZE) {
                printf("|");
            } else if (board[i][j] == 'B' || board[i][j] == 'X') {
                printf("|%c", board[i][j]);
            } else {
                printf("| ");
            }
        }
        printf("\n------------------\n");
    }
}