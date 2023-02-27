#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ {
    int value;
    struct Node_ *next;
} Node;

typedef Node *NodePtr;

void printList(Node *pList) {
    if (pList == NULL) {
        printf("[ ]\n");
        return;
    }

    Node *current = pList;
    printf("[ ");
    while(current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("]\n");
    return;
}

void insert(NodePtr *pList, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;

    if (*pList == NULL) {
        *pList = newNode;
        return;
    }

    if (value < (*pList)->value) {
        newNode->next = *pList;
        *pList = newNode;
        return;
    }

    Node *current = *pList;
    while (current->next != NULL) {
        if (value >= current->value && value < current->next->value) {
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }
    current->next = newNode;
}

void delete(NodePtr *pList, int value) {
    if (*pList != NULL) {
        NodePtr current = *pList;
        NodePtr previous = NULL;
        while (current != NULL) {
            if (current->value == value) {
                if (previous == NULL) {
                    *pList = current->next;
                    free(current);
                    current = *pList;
                } else {
                    previous->next = current->next;
                    free(current);
                    current = previous->next;
                }
            } else {
                previous = current;
                current = current->next;
            }
        }
    }
}

int main(void) {
    char mode;
    int num = 0;
    Node *pList = NULL;

    while(mode != 'q') {
        printf("input> ");
        scanf(" %c", &mode);
        if (mode == 'i') {
            scanf(" %d", &num);
            insert(&pList, num);
        } else if (mode == 'p') {
            printList(pList);
        } else if (mode == 'd') {
            scanf(" %d", &num);
            delete(&pList, num);
        }
    }
}