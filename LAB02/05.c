#include <stdio.h>
#include <stdlib.h>

void main() {
    int A, B, C;
    char str[10];

    printf("Enter length of side A: ");
    fgets(str, 10, stdin);
    A = atoi(str);
    printf("Enter length of side B: ");
    fgets(str, 10, stdin);
    B = atoi(str);
    printf("Enter length of side C: ");
    fgets(str, 10, stdin);
    C = atoi(str);

    if (A + B <= C || A + C <= B || B + C <= A || A <= 0 || B <= 0 || C <= 0) {
        printf("Triangle type is invalid.");
    } else if (A == B && B == C && A == B) {
        printf("Triangle type is equilateral.");
    } else if (A == B || B == C || A == C) {
        printf("Triangle type is isosceles.");
    } else {
        printf("Triangle type is scalene.");
    }
}