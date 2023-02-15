#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(char s1[], char s2[]) {
    int i, j;
    //static char s3[100];
    char *s3 = (char *)malloc(strlen(s1) + strlen(s2) + 1);

    for (i = 0; s1[i] != '\0'; i++) {
        s3[i] = s1[i];
    }
    for (j = 0; s2[j] != '\0'; j++) {
        s3[i+j] = s2[j];
    }

    s3[i+j] = 0;
    return s3;
}

int main() {
    char s1[] = "Hello", s2[] = "World";
    char *tmp1, *tmp2;

    tmp1 = concat(s1, s2);
    printf("tmp1 = %s\n", tmp1);
    tmp2 = concat(s2, s1);
    printf("tmp2 = %s\n", tmp2);
    free(tmp2);
    printf("tmp1 = %s\n", tmp1);
}