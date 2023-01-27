#include <stdio.h>
#include <stdlib.h>

void main() {
    float salary, tax; // double is 8 bytes, float is 4 bytes
    char salary_str[20];

    fgets(salary_str, 20, stdin);
    salary = atof(salary_str);

    if (salary >= 0) {
        if (salary >= 300000.0) { // > 300k
            salary -= 300000.0;
            tax = 15000.0 + (salary * 0.1);
        } else { // < 100k
            tax = salary * 0.05;
        }
        printf("%.2f", tax);
    } else {
        printf("Error: Salary must be greater or equal to 0");
    }
}