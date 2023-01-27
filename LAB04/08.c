#include <stdio.h>
#include <stdlib.h>

unsigned long decimal_to_binary(unsigned long decimal) {
    if (decimal != 0) return (decimal % 2) + 10 * decimal_to_binary(decimal / 2);
    else return 0;
}

int main(){
    char input_str[10];
    fgets(input_str, 10, stdin);
    unsigned long x = atoi(input_str);
    printf("%lu", decimal_to_binary(x));
}
