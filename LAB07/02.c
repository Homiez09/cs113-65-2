#include <stdio.h>

int remove_vowel(char str[]) {
    while(*str){
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            char *p = str;
            while(*p) {
                *p = *(p + 1);
                p++;
            }
            continue;
        }
        str++;
    }
}

int main(void) {
    char str[80];

    printf(" Input: ");
    gets(str);

    remove_vowel(str);
    printf("Output: %s\n", str);

    return 0;
}