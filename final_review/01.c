#include <stdio.h>

int main(void){
    char text[100];
    int count = 0;
    printf("String (without a space): ");

    scanf("%s", text);
    for (int i = 0; text[i] != 0; i++) {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') {
            printf("%c ", text[i]);
            count++;
        }
    }
    (count > 1) ? printf("\nThis string contains %d vowels.", count) :  printf("\nThis string contains 1 vowel.");
}