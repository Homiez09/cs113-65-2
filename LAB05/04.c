#include <stdio.h>

int main(void) {
    long n, divide = 1;
    double result = 0;
    printf("Enter n: ");
    scanf("%ld", &n);

    for (long i = 1; i <= n; i++) {
        (i % 2 == 0) ? (result -= 4.0 / divide) : (result += 4.0 / divide);
        divide += 2;
    }
    printf("%.10lf", result);

    return 0;
}