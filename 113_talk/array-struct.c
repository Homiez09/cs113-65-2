#include <stdio.h>

typedef struct{
    int x, y;
} Coordinate;

int main() {
    Coordinate cd[4];
    Coordinate point = {5, 5};

    cd[0].x = 1;
    cd[0].y = 1;
    cd[1].x = 8;
    cd[1].y = 16;
    cd[2].x = 100;
    cd[2].y = 100;

    for (int i = 0; i < 3; i++) {
        printf("input(x, y): ");
        scanf("%d %d",&cd[i].x, &cd[i].y);
    }

    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", cd[i].x, cd[i].y);
    }
}