#include <stdio.h>
#include <stdlib.h>

int main () {
    char input[100];
    
    printf("Enter your goal amount: ");
    fgets(input, sizeof(input)-2, stdin);
    float goal = atof(input);
    float collect = 0;

    int count = 0;
    while (1) {
        count++;
        char input_collect[100];
        printf("Enter money collected today: ");
        fgets(input_collect, sizeof(input)-2, stdin);
        collect += atof(input_collect);
        if (collect >= goal) {
            (count > 1) ? printf("Congratulations! You take %d days to reach your goal.", count) : printf("Congratulations! You take %d day to reach your goal.", count);
            return 0;
        } else {
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", count, collect, goal-collect);
        }
    }   

    return 0;
}