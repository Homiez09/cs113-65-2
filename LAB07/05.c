#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *stoupper(const char s[]) {
    int malloc_size = 0;
    while (*s) {
        malloc_size++;
        s++;
    }
    s -= malloc_size;
    char *new_s = malloc(malloc_size + 1);
    if (new_s == NULL) return NULL;
    for (int i = 0; i < malloc_size; i++) {
        new_s[i] = toupper(s[i]);
    }
    return new_s;
}

int main(void) {
    char s[100];
    char *result;

    scanf("%s", s);
    result = stoupper(s);
    if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}