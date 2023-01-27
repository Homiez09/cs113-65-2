#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[100];
	fgets(str, sizeof(str)-2, stdin);

	int n = atoi(str);
	for (int i = n; i > -1; i--){
		printf("%d\n", i);
	}

	return 0;
}
