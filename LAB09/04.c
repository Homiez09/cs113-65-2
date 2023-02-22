#include <stdio.h>
#include <string.h>

struct Word{
    char *word;
    int count;
};

int main()
{
    char input[21];
    int i, last_word = 0, find = 0;
    struct Word data[20] = {0};
    scanf("%20s", input);
    i = 0;
    while (strcmp(input, "exit")){
        for (int j = 0; j < i; j++) {
            if ((strcmp(input, data[i].word)) == 0) {
                printf("123");
            }
        }
        scanf(" %20s", input);
        i++;
    }

    printf("Output:\n");
    for (i = 0; i < last_word; i++){
        printf("%s = %d\n", data[i].word, data[i].count);
    }
}
