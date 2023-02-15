#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE 5

typedef struct  {
  char id[12];
  int midterm;
  int final;
  char grade;
}StudentRecord;


int findgrade(StudentRecord stu[], int size){
    for (int i = 0; i < size; i++){
        if (stu[i].midterm + stu[i].final >= 80){
            stu[i].grade = 'A';
        }else if (stu[i].midterm + stu[i].final >= 70){
            stu[i].grade = 'B';
        }else if (stu[i].midterm + stu[i].final >= 60){
            stu[i].grade = 'C';
        }else if (stu[i].midterm + stu[i].final >= 50){
            stu[i].grade = 'D';
        }else{
            stu[i].grade = 'F';
        }
    }
}

int main() {

  StudentRecord students[ARRAY_SIZE];
  int gradeCount[5] = {0};
  int i;

  for (i=0; i <  ARRAY_SIZE; i++) {
    printf("Enter Student ID: ");
    scanf("%s", students[i].id);
    printf("Enter Student Midterm: ");
    scanf("%d", &students[i].midterm);
    printf("Enter Student Final: ");
    scanf("%d", &students[i].final);

  }

  findgrade(students,ARRAY_SIZE);
  //print grade
  for(i = 0 ; i < ARRAY_SIZE; i++){
    printf("Student ID %s receives grade %c.\n",students[i].id,students[i].grade);
  }
  
  return 0;
}