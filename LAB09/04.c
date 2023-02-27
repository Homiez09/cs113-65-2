#include <stdio.h>
#include <string.h>

struct Word
{

    char word[50];
    int count;
};

int main()
{
    char input[21];
    int i, last_word = 0, find = 0;
    struct Word data[20] = {0};
    scanf("%20s", input);

    while (strcmp(input, "exit") != 0 && last_word < 20)
    {

        find = 0;
        for (i = 0; i < last_word; i++)
        {
            if (strcmp(data[i].word, input) == 0)
            {
                data[i].count++;
                find = 1;
                break;
            }
        }
        if (!find)
        {
            strcpy(data[last_word].word, input);
            data[last_word].count = 1;
            last_word++;
        }
        scanf("%20s", input);
    }

    printf("Output:\n");
    for (i = 0; i < last_word; i++)
    {
        printf("%s = %d\n", data[i].word, data[i].count);
    }
}