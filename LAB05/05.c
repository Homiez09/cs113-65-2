#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            (j % 2 == 0) ? printf("x") : printf("-");
        }
        printf("\n");
    }

    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            (j % 2 == 0) ? printf("x") : printf("-");
        }
        printf("\n");
    }

    return 0;
}