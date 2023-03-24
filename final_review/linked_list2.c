#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_ {
    char word[100];
    struct Node_ *next;
} Node;

void append(Node **wList, char word[]) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->next = 0;
    for (int i = 0; *word; i++) {
        newNode->word[i] = *word;
        word++;
    }

    if (*wList == NULL) {
        *wList = newNode;
        return;
    } else {
        Node *current = *wList;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printWordList(Node *wList) {
    if (wList == NULL) return;
    Node *current = wList;
    while (current != NULL) {
        printf("%s -> ", current->word);
        current = current->next;
    }
    printf("\n");
}

void removeWord(Node **wList, char word[]) {
    if (*wList == NULL) return;
    Node *previous = NULL;
    Node *current = *wList;

    while (current != NULL) {
        if (strcmp(current->word, word) == 0) {
            if (previous == NULL) {
                *wList = current->next;
                free(current);
            } else {
                previous->next = current->next;
                free(current);
                current = previous->next;
            }
        } else {
            previous = current, current = current->next;
        }
    }
}

int main(void) {
    Node *init = NULL;
    int n;
    char word[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %s", word);
        append(&init, word);
    }
    removeWord(&init, "fuck");
    printWordList(init);
    return 0;
}