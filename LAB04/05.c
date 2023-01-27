#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];

    fgets(str, sizeof(str), stdin); // 1 <= n <= 26
    int N = atoi(str);

    if (N <= 0 || N > 26)
    {
        printf("-");
        return 0;
    }
    else if (N == 1)
    {
        printf("a");
        return 0;
    }

    int x = ((N + (N - 2)) * 2) + 1; // 9
    int y = (N * 2) - 1;

    for (int i = 0; i <= (y / 2); i++)
    {
        for (int j = 1; j <= (x / 2) - (1 + (i - 1) * 2) - 1; j++)
        {
            printf("-");
        }

        for (int j = N - 1; j > N-1-i; j--)
        {
            printf("%c", 'a' + j);
            printf("-");
        }

        printf("%c", 'a' + N - 1 - i);

        for (int j = N-i; j <= N-1; j++)
        {
            printf("-");
            printf("%c", 'a' + j);
        }

        for (int j = (x / 2) - (1 + (i - 1) * 2) - 1; j >= 1; j--)
        {
            printf("-");
        }

        printf("\n");
    }

    for (int i = (y / 2) - 1; i >- 1; i--)
    {
        for (int j = 1; j <= (x / 2) - (1 + (i - 1) * 2) - 1; j++)
        {
            printf("-");
        }

        for (int j = N - 1; j > N-1-i; j--)
        {
            printf("%c", 'a' + j);
            printf("-");
        }

        printf("%c", 'a' + N - 1 - i);

        for (int j = N-i; j <= N-1; j++)
        {
            printf("-");
            printf("%c", 'a' + j);
        }

        for (int j = (x / 2) - (1 + (i - 1) * 2) - 1; j >= 1; j--)
        {
            printf("-");
        }

        printf("\n");
    }

    return 0;
}