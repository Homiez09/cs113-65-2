#include <stdio.h>

int main(void) {
    int hh, mm;
    char mer;
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%2d %c", &hh, &mm, &mer);
    ((hh >= 0 && (hh <= 11 && mm <= 59) && (mer == 'a' || mer == 'A')) || (hh >= 12 && (mer == 'p' || mer == 'P'))) ? printf("Equivalent 24-hour time: %02d:%02d", hh, mm) : printf("Equivalent 24-hour time: %02d:%02d", (hh+12)%24, mm);
}