#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[25];

    fgets(str, sizeof(str)-2, stdin);
    long long a = atoll(str);

    fgets(str, sizeof(str)-2, stdin);
    long long b = atoll(str);

    long long gcd = a;
    long long lcm = 1;

    long long y = b;
    while(y != 0) {
        int temp = gcd % y;
        gcd = y;
        y = temp;
        printf("%lld %lld", gcd, y);
    }

    lcm = (a*b)/gcd;
    printf("%lld", gcd);

   printf("GCD: %lld\nLCM: %lld", gcd, lcm);  

   return 0;
}