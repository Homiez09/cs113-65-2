#include <stdio.h>

int i = 5;

unsigned int k = 15;

// long long long

double a = 2.0;

char c = 'a';

char name[] = "xxxx"; 

int main () 
{
    printf("Hello World!");
    printf("%d %d %f %c %s\n", i, k, a, c, name);

    int q = c + 50;
    printf("%d", q);
}