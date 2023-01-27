#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char str[20];
    int size, pepperoni, cheese, mushroom;
    double area, cost, price, fixedcost, basecost, extracost;

    fixedcost = 5;
    basecost = 2;
    extracost = 0;

    printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Enter pizza size (1=s, 2=m, or 3=l): "); // int
    fgets(str, sizeof(str)-2, stdin);
    
    size = atoi(str);
    if (size == 1) {
        area = M_PI * (10 * 10) / 4;
    } else if (size == 2) {
        area = M_PI * (16 * 16) / 4;
    } else if (size == 3) {
        area = M_PI * (20 * 20) / 4;
    }

    printf("Extra pepperoni? (1=yes, 0=no): "); // boolean
    fgets(str, sizeof(str)-2, stdin);

    pepperoni = atoi(str);
    if (pepperoni) {
        extracost += 0.5;
    }

    printf("Extra cheese? (1=yes, 0=no): "); // boolean
    fgets(str, sizeof(str)-2, stdin);

    cheese = atoi(str);
    if (cheese) {
        extracost += 0.25;
    }
    
    printf("Extra mushroom? (1=yes, 0=no): "); // boolean
    fgets(str, sizeof(str)-2, stdin);

    mushroom = atoi(str);
    if (mushroom) {
        extracost += 0.30;
    }

    // calculate cost
    cost = fixedcost + (basecost * area) + (extracost * area);
    price = cost * 1.5;

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Your order costs %.2f baht.\nThank you.", price);
    return 0;
}

/* Welcome to My Pizza Shop!!
~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter pizza size (1=s, 2=m, or 3=l): 1
Extra pepperoni? (1=yes, 0=no): 0
Extra cheese? (1=yes, 0=no): 1
Extra mushroom? (1=yes, 0=no): 0
~~~~~~~~~~~~~~~~~~~~~~~~~~
Your order costs 272.57 baht.
Thank you. */