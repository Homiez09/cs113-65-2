#include <stdio.h>

typedef enum
{
    SUN = 0,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
} DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month)
{
    int days = 0;
    int i;
    for (i = 1; i < month; i++)
    {
        switch (i)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days += 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days += 30;
            break;
        case 2:
            days += 28;
            break;
        }
    }
    days += day;
    return (days + 1) % 7;
}

int main()
{
    int day, month;
    DayOfWeek dow;

    printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
    printf("Enter Day and Month: ");
    scanf("%d %d", &day, &month);
    dow = findDayOfWeek(day, month);
    printf("Day:%d Month:%d of Year 2013 is ", day, month);
    switch (dow)
    {
    case 0:
        printf("Sunday.\n");
        break;
    case 1:
        printf("Monday.\n");
        break;
    case 2:
        printf("Tuesday.\n");
        break;
    case 3:
        printf("Wednesday.\n");
        break;
    case 4:
        printf("Thursday.\n");
        break;
    case 5:
        printf("Friday.\n");
        break;
    case 6:
        printf("Saturday.\n");
        break;
    }
}