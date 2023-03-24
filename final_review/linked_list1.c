#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ {
    int value;
    struct Node_ *next;
} Node;

typedef Node *NodePtr;

void insert(NodePtr *valueList, int value) {
    NodePtr newNode = (NodePtr)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;

    if (*valueList == NULL) {
        *valueList = newNode;
        return;
    }

    if (value < (*valueList)->value) {
        newNode->next = *valueList; // newNode link to valueList.
        *valueList = newNode;
        return;
    }

    NodePtr current = *valueList;
    for (; current->next != 0; current = current->next) {
        if (value >= current->value && value < (current->next)->value) {
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
    }

    current->next = newNode;
}

void delete(NodePtr *valueList, int value) {
    if (*valueList == NULL) return;
    NodePtr previous = NULL;
    NodePtr current = *valueList;

    for (; current != NULL; 0) {
        if (current->value == value) {
            if (previous == NULL) {
                *valueList = current->next;
                free(current);
                current = *valueList;
            }
        } else {
            previous = current, current = current->next;
        }
    }
}

void printValueList(NodePtr valueList) {
    NodePtr current = valueList;
    for (; current != NULL; current = current->next) {
        printf("%d -> ", current->value);
    }
    printf("\n");
}

int main(void) {
    NodePtr init = NULL;
    int n, value;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %d", &value);
        insert(&init, value);
    }
    delete(&init, 10);
    printValueList(init);
    return 0;
}