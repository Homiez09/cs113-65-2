#include <stdio.h>

int main(void) {
    int length = 0, n = 0;
    scanf("%d %d", &length, &n);

    char words[n][length];
    for (int i = 0; i < n; i++) {
        scanf(" %s", words[i]);  
    }
    int i;
    for (i = 0; i < n-1; i++) {
        int count = 0;
        for (int j = 0; j < length; j++) {
            if (words[i][j] != words[i+1][j]) {
                count++;
            }
        }
        if (count >= 3){
            break;
        }
    }
    for (int index = 0; index < length; index++) {
        printf("%c", words[i][index]);
    }
    
    return 0;
}   