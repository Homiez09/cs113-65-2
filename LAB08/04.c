#include <stdio.h>
#include <string.h>

typedef struct {
    char id[12];
    int score_mid;
    int score_final;
} studentRecord;

void enterScore(studentRecord student[], int size) {
    char id[12];
    int sc_mid, sc_final;
    for (int i = 0; i < size; i++) {
        printf("Enter Student ID: ");
        scanf("%s", id);
        printf("Enter Student Midterm: ");
        scanf("%d", &sc_mid);
        printf("Enter Student Final: ");
        scanf("%d", &sc_final);
        strcpy(student[i].id, id);
        student[i].score_mid = sc_mid;
        student[i].score_final = sc_final;
    }
}

char grade(int score) {
    if (score >= 80) return 'A';
    if (score >= 70) return 'B';
    if (score >= 60) return 'C';
    if (score >= 50) return 'D';
    return 'F';
}

void printRecords(studentRecord student[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Student ID %s receives grade %c.\n", student[i].id, grade(student[i].score_mid + student[i].score_final));
    }
}

int main(void) {
    studentRecord student[5];
    enterScore(student, 5);
	printRecords(student, 5);
    
    return 0;
}