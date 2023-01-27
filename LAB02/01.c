#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hour_str[20], min_str[20];
    int hour, min;

    printf("Enter hour: ");
    fgets(hour_str, 5, stdin);

    printf("Enter minute: ");
    fgets(min_str, 5, stdin);

    hour = atoi(hour_str);
    min = atoi(min_str);

    printf("Time is %02d:%02d", hour, min);
    return 0;
}