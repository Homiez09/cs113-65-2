#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    c = getchar();

    if (c >= 'a' && c <= 'z') {
        printf("Output: lower case");
    } else if (c >= 'A' && c <= 'Z') {
        printf("Output: upper case");
    } else if (c >= '0' && c <= '9') {
        printf("Output: digit");
    } else {
        printf("Output: others");
    }

    return 0;
}