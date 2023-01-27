#include <stdio.h>

int main(void) {
    int n;

    printf("Enter number of subject(s): ");
    scanf("%d", &n);

    int credit[100], grade[100];
    char grade_c[100];

    for (int i = 0; i < n; i++) {
        printf("Enter credit,grade for subject #%d: ", i + 1);
        scanf(" %d,%c", &credit[i], &grade_c[i]);
    }

    for (int i = 0; i < n; i++) {
        if      (grade_c[i] == 'A' || grade_c[i] == 'a') grade[i] = 4;
        else if (grade_c[i] == 'B' || grade_c[i] == 'b') grade[i] = 3;
        else if (grade_c[i] == 'C' || grade_c[i] == 'c') grade[i] = 2;
        else if (grade_c[i] == 'D' || grade_c[i] == 'd') grade[i] = 1;
        else                                             grade[i] = 0;
    }

    int sum_credit = 0, sum_grade = 0;
    for (int i = 0; i < n; i++) {
        sum_credit += credit[i];
        sum_grade += credit[i] * grade[i];
    }

    printf("GPA = %.2f", (float)sum_grade / sum_credit);
}