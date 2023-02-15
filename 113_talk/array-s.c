#include <stdio.h>

typedef struct {
    float x;
    char y[5];
} record;

int main(void) {
    record rec;
    rec.x = 9.9;
    rec.y[0] = 'a';
    rec.y[1] = 'b';

    printf("%f %c %c", rec.x, rec.y[0], rec.y[1]);
}