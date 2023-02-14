#include <stdio.h>

int main() {
    char c[100];
    int count = 0;
    
    printf("String (without a space): ");
    scanf("%s", c);

    //find vowels
    for (int i = 0; c[i] != 0; i++) {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U') {
            count++;
            printf("%c ", c[i]);
        }
    }

    (count > 1) ? printf("\nThis string contains %d vowels.", count) : printf("\nThis string contains %d vowel.", count);
}