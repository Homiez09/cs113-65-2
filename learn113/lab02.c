#include <stdio.h>
#include <stdlib.h>

char str[10];

int q;
int main()
{
    // gets(str);
    // fgets(str, 10, stdin);
    // char c = getchar();
    // printf("input -%s\n", str);
    // printf("%c", c);

    char str[10];
    fgets(str, 10, stdin);
    printf("out - %s", str);

    // int i = atoi(str);
    // long l = atol(str);
    // double d = atof(str);

    // printf("%d %ld %f\n", i, l, d);
    // double d = 1233.646;
    // int w;
    // printf("%d %d", q, w);

    /* int found = 0;
    float isExist = 0.0;
    char isBool = '\0'; // terminate charactor, null char

    if (found) {
        printf("if\n");
    } else {
        printf("else\n");
    } */

    /* char str[10];
    printf("Enter your score: ");
    fgets(str, 10, stdin);

    double score = atof(str);

    // relational operator > < >= <= == !=
    if (score >= 80) {
        printf("A");
    } else if (score >= 70) {
        printf("B");
    } else if (score >= 60) {
        printf("C");
    } else if (score >= 50) {
        printf("D");
    } else {
        printf("F");
    } */

    /* int i = 0;
    while (1) {
        printf("%d\n", i);
        i++;
    } */

    /* for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    } */

    /* float f = 9.99;
    int x = 5;
    int y = 10;
    printf("%f\n", 1 / 2.0);
    printf("%d\n", (int) f);
    printf("%f\n", (double) x / y); */

    char c;
    while (c != EOF) {
        c = getchar();
        putchar(c);
    }
}
