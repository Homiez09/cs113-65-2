#include <stdio.h>
#include <math.h>

unsigned long long len(unsigned long long x) {
    if (x >= 1000000000) return 10;
    if (x >= 100000000)  return 9;
    if (x >= 10000000)   return 8;
    if (x >= 1000000)    return 7;
    if (x >= 100000)     return 6;
    if (x >= 10000)      return 5;
    if (x >= 1000)       return 4;
    if (x >= 100)        return 3;
    if (x >= 10)         return 2;
    return 1;
}

int main(void) {
    unsigned long long n, pow_n;
    int last_n, last_pow_n;
    printf("Input n = ");
    scanf("%lld", &n);
    
    pow_n = (unsigned long long)pow(n, 2);
    last_pow_n = pow_n % (unsigned long long)pow(10, len(n));
    printf("n^2 = %lld\n", pow_n);
    (n == last_pow_n) ? printf("Yes. %lld is automorphic number.", n) : printf("No. %lld is not automorphic number.", n);
}