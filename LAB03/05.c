#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[10];

    fgets(str, sizeof(str), stdin); // 1 <= n <= 26
    int n = atoi(str);
    if (n <= 0 || n > 26) {
        printf("-");
        return 0;
    }

    for (int i = n-1; i > 0; i--) {
        printf("%c", 'a' + i);
        printf("-");
    }

    printf("a");

    for (int i = 1; i < n; i++) {
        printf("-");
        printf("%c", 'a' + i);
    }

    return 0;
}