#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[20];

    fgets(str, sizeof(str)-2, stdin);
    long long a = atoi(str);

    fgets(str, sizeof(str)-2, stdin);
    long long b = atoi(str);

    if (a > 10000 || b > 10000) return 0;
    if (a == 1) {
        printf("= 1/%lld", b);
        return 0;
    }

    long long gcd = 1;
    long long x = a, y = b;
    while (x % y != 0) {
        gcd = x % y;
        x = y;
        y = gcd;
    }

    if (a/gcd == b/gcd){
        printf("= 1");
    } else if (gcd == 1) {
        if (a % b != 0){
            printf("= %lld/%lld", a, b);
        } else {
            printf("= %lld", a/b);
        }
    } else {
        printf("= %lld/%lld", a/gcd, b/gcd);
    }

    return 0;
}