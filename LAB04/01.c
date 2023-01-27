#include <stdio.h>
#include <stdlib.h>

int decimal_to_binary(int decimal) {
    while (decimal != 0) {
        return (decimal % 2) + 10 * decimal_to_binary(decimal / 2);
    }
}

int main(){
    char input_str[10];
    fgets(input_str, 10, stdin);
    int x = atoi(input_str);
    printf("Binary number of %d is %04d.", x, decimal_to_binary(x));
}
