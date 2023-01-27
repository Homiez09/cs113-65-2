#include <stdio.h>
#include<stdlib.h>

int x = 10;
int addTen(int x){
    x += 10;
    return x;
}

int main() {
    int x = 20;
    printf("%d\n", x);
}