#include <stdio.h>
#include <stdlib.h>

char *multiply_str(char *str, int x) {
    for (int i = 0; i <= x; i++) {
        printf("%s", str);
    }
    return "\n";
}

int main() {
    char input[10];
    
    fgets(input, sizeof(input)-2, stdin);
    int x = atoi(input);

    for (int i = 0; i < x; i++) printf("%s", multiply_str("*", i));
    for (int i = x-2; i >= 0; i--) printf("%s", multiply_str("*", i));
    
    return 0;
}