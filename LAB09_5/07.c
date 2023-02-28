#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
  int item;
  struct nodeType* next;
} Node;

typedef Node  *NodePtr;

void printList(NodePtr *key) {
    for (int i = 0; i < SIZE; i++) {
        printf("KEY %2d:", i);
        NodePtr current = key[i];
        if (current != NULL){
            while (current != NULL) {
                printf(" %d", current->item);
                current = current->next;
            }
            printf("\n");
        } else {
            printf("\n");
        }
    }
}

void add(NodePtr *key, int item) {
    NodePtr temp = (NodePtr)malloc(sizeof(Node));
    temp->item = item;
    int index = item % SIZE;
    if(key[index] == NULL) {
        temp->next = NULL;
    } else {
        temp->next = key[index];
    }
    key[index] = temp;
}

int main(void) {
    char mode;
    int item;
    Node *key[SIZE] = {NULL};

    while (mode != 'q') {
        printf("input> ");
        scanf(" %c", &mode);
        if (mode == 'a') {
            scanf(" %d", &item);
            add(key, item);
        } else if (mode == 'p') {
            printList(key);
        }
    }
}