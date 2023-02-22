#include <stdio.h>
#include <string.h>

enum DaysOfWeek {SUN=3, MON, TUE, WED, THU, FRI, SAT};

int main()
{  char day_names[][10]={"", "", "",
                        "Sunday", "Monday", "Tuesday",
                        "Wednesday", "Thursday", "Friday",
                        "Saturday"};
   enum DaysOfWeek today;
   today = MON;
   printf("The day after %s is %s\n", day_names[today], day_names[today+1]);
   printf("Two days after %s is %s\n", day_names[today], day_names[today+2]);
}