#include <stdio.h>
#include <string.h>

typedef struct {
	char id[12];
	int score;
} studentRecord;

void init(studentRecord list[], int size) {
	for (int i = 0; i < size ; i++){
		list[i].score = 0;
		strcpy(list[i].id,"5510000");
		list[i].id[7] = '1'+i;
		list[i].id[8] = '\0';
	}
}

void enterScore(studentRecord list[], int size){
	studentRecord find;
	scanf("%s %d",find.id,&find.score);
	for (int i = 0 ; i < size ; i++){
		for(int j = 1; j < strlen(find.id); j++ ){
			if (strstr(list[i].id,find.id)){
				list[i].score = find.score;
			}
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