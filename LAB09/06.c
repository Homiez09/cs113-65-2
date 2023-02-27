#include <stdio.h>

int main()
{
    unsigned char x;
    int n;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;
    int numbits =
        x & 1;
    numbits += (x >> 1) & 1;
    numbits += (x >> 2) & 1;
    numbits += (x >> 3) & 1;
    numbits += (x >> 4) & 1;
    numbits += (x >> 5) & 1;
    numbits += (x >> 6) & 1;
    numbits += (x >> 7) & 1;

    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}