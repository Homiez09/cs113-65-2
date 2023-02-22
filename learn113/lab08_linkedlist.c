#include <stdio.h>
#include <stdlib.h>

typedef struct Node__ {
    int value;
    struct Node__ *next;
} Node;

typedef Node *NodePtr; // NodePtr is a pointer to a Node.

void printList(NodePtr start) {
    NodePtr current = start;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("\n");
}

void addFirst(NodePtr *initPtr, int value) {
    NodePtr temp = (NodePtr)malloc(sizeof(Node));
    temp->value = value;
    if (*initPtr == NULL) {
        temp->next = NULL; // temp will be the last Node.
    } else {
        temp->next = *initPtr;
    }
    *initPtr = temp;
}

void addLast(NodePtr *initPtr, int value) {
    NodePtr temp = (NodePtr)malloc(sizeof(Node));
    temp->value = value;
    temp->next = NULL; // temp will be the first Node.
    if (*initPtr == NULL) {
        *initPtr = temp;
    } else {
        NodePtr current = *initPtr;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
    }
}

void delete(NodePtr *initPtr, int value) {
    if (*initPtr != NULL) {
        NodePtr current = *initPtr;
        NodePtr previous = NULL;
        while (current->next != NULL && current->value != value) {
            previous = current;
            current = current->next;
        }
        if (current->value == value) {
            printf("Found: %d\n", current->value);
            if (previous == NULL) {
                *initPtr = current->next;
                free(current);
            } else {
                previous->next = current->next;
                free(current);
            }
        }
    }
}

int main(void) {
    NodePtr initPtr; // always point to the start of linked list
    initPtr = NULL; //initial linked list

    addFirst(&initPtr, 30);
    addFirst(&initPtr, 20);
    addFirst(&initPtr, 10);
    addLast(&initPtr, 40);
    addLast(&initPtr, 50);
    delete(&initPtr, 30);
    printList(initPtr);
}