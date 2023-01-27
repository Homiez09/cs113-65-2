#include <stdio.h>
#include <stdlib.h>

void multiply_str1(int str, int x) {
    for (int i = 0; i < x; i++) putchar(str);
    printf("\n");
}

void multiply_str2(int str, int x, int space) {
    for (int i = 0; i < space; i++) putchar(' ');
    for (int i = 1; i <= x; i++) (i == 1 || i == x) ? putchar(str) : putchar(' ');
    printf("\n");
}

int main () {
    char input[20];
    
    fgets(input, sizeof(input)-2, stdin);
    unsigned long x = atoi(input);
    fgets(input, sizeof(input)-2, stdin);
    unsigned long y = atoi(input);

    multiply_str1('*', x);
    for (int i = 1; i <= y-2; i++) {
        multiply_str2('*', x, i);
    }
    for (int i = 0; i < y-1; i++) putchar(' ');
    multiply_str1('*', x);
}