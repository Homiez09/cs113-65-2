#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
    // return (n == 0 || n == 1) ? 1 : fibo(n - 1) + fibo(n - 2);
}

int main()
{
    char input_n[5];
    int n, i;

    fgets(input_n, 5, stdin);
    n = atoi(input_n);

    for (i = 0; i <= n; i++)
    {
        printf("F(%d) = %d\n", i, fibo(i));
    }

    return 0;
}
