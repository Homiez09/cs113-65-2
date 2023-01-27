#include <stdio.h>
int main () {
    int computer_time = 1440; // in minutes
    int d = computer_time / 1440;
    int h = (computer_time % 1440) / 60;
    int m = (computer_time % 1440) % 60;

    printf("It is %d days %d hours and %d minutes.", d, h, m);
    return 0;
}