#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int c = 1; c < n; c++) {
        for (int a = 1; a < c; a++) {
            int b = sqrt(c*c - a*a);
            if ((a*a + b*b == c*c) && (a + b + c == n)) {
                printf("(%d, %d, %d)", a, b, c);
                return 0;
            }
        }
    }
    printf("No triple found.");
    return 0;
}