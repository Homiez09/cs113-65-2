#include <stdio.h>

int main(void) {
    int n, round = 1, player[2];
    printf("Input number of stairs: ");
    scanf("%d", &n);
    player[0] = n-2; // head
    player[1] = n-1; // body

    char stairs[n][5];
    // Create the stairs
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 0 || j == 4) {
                stairs[i][j] = '|';
            } else {
                stairs[i][j] = '-';
            }
        }
    }
    // start

    int x = 999;
    while (1) {
        if (player[0] <= 0) player[0] = 0, player[1] = 1;
        if (player[0] >= n-2) player[0] = n-2, player[1] = n-1;
        stairs[player[0]][2] = 'O';
        stairs[player[1]][2] = '^';
        if (x==0) return 0;
        printf("---- round %d ----\n", round++);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                printf("%c", stairs[i][j]);
            }
            printf("\n");
        }
        stairs[player[0]][2] = '-';
        stairs[player[1]][2] = '-';
        
        printf("Input step command: ");
        scanf("%d", &x);
        player[0] -= x;
        player[1] -= x;
    }

    return 0;
}