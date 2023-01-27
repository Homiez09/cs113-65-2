#include <stdio.h>
#include <stdlib.h>

int main() {
    double discount = 1;

    char stk[10], cst[10];
    fgets(stk, 10, stdin);
    fgets(cst, 10, stdin);
    
    int sticker = atoi(stk);
    double cost = atof(cst);

    if (sticker >= 9) {
        discount -= 0.4;
        sticker -= 9;
    } else if (sticker >= 6) {
        discount -= 0.3;
        sticker -= 6;
    } else if (sticker >= 3) {
        discount -= 0.20;
        sticker -= 3;
    } else if (sticker >= 2) {
        discount -= 0.15;
        sticker -= 2;
    } else if (sticker >= 1) {
        discount -= 0.1;
        sticker -= 1;
    } else {
        discount = 1;
    }

    double percents = (1-discount) * 100;
    double total = cost * discount;

    printf("You get %.0f percents discount.\nTotal amount due is %.2f Baht.\nAnd you have %d stickers left.", percents, total, sticker);
    return 0;
}