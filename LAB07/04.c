#include <stdio.h>

int main()
{
    int l, n;
    scanf("%d", &l);
    scanf("%d", &n);
    char word[n][l];
    for (int i = 0; i < n; i++)
        scanf("%s", word[i]);
    int result_index = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int count = 0;
        for (int j = 0; j < l; j++)
            if (word[i][j] != word[i + 1][j])
                count++;
        if (count > 2)
        {
            result_index = i;
            break;
        }
        result_index = i + 1;
    }
    for (int j = 0; j < l; j++)
        printf("%c", word[result_index][j]);
    return 0;
}