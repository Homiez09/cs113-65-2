#include <stdio.h>

int main () {
    int amount = 98;
    int fifty, twenty, five, one;
    fifty = amount / 50;
    twenty = (amount % 50) / 20;
    five = ((amount % 50) % 20) / 5;
    one =  (((amount % 50) % 20) % 5) / 1;
    printf("1: %d\n5: %d\n20: %d\n50: %d", one, five, twenty, fifty);
    return 0;
}