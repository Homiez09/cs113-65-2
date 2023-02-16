#include <stdio.h>
#include <string.h>

typedef struct {
    char id[12];
    int score;
} studentRecord;

void init(studentRecord list[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        strcpy(list[i].id, "5510000");
        list[i].id[7] = '1'+ i;
        list[i].id[8] = 0;
        list[i].score = 0;
    }
}

void enterScore(studentRecord list[], int size) {
    char id[12];
    int score;
    scanf("%s %d", id, &score);
    for (int i = 0; i < 3; i++) {
        if(strstr(list[i].id, id)) {
            list[i].score = score;
        } 
    }
}

void printRecords(studentRecord list[], int size) {
    int i;

    printf("   ID        Score\n");
	for (i = 0; i < size; i++) {
		printf("%s       %d\n", list[i].id, list[i].score);
	}
}

int main() {
	int enter;
	studentRecord list[3];

	init(list, 3);
    enterScore(list, 3);
	printRecords(list, 3);
	return 0;
}