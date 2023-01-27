#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "hello", s2[] = " world";
    char *s3 = strcat(s1, s2);
    char *split = strtok(s3, " ");
    printf("%s", s3);
}