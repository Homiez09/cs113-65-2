#include <stdio.h>

int charcount(char *s) {
    int count = 0;
    while (*s) {
        count++;
        s++;
    } return count;
}

void charweave(char *s, char *result) {
    int i = 0, j = 0;
    for(; i < charcount(s)*2; i++) {
        if (i % 2 == 0) {
            result[i] = s[j];
            j++;
        } else {
            result[i] = s[charcount(s) - j];
        }
    } result[i] = 0;
}

int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}