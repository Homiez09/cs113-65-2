#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ {
    int value;
    struct Node_ *next;
} Node;

typedef Node *NodePtr;

void printValueList(NodePtr vList) {
    if (vList == NULL) return;
    Node *current = vList;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }

    printf("\n");
}

void insert(NodePtr *vList, int value) {
    NodePtr temp = (NodePtr)malloc(sizeof(Node));
    temp->next = NULL;
    temp->value = value;

    if (*vList == NULL) {
        *vList = temp;
        return;
    }
    
    if (value < (*vList)->value) {
        temp->next = *vList;
        *vList = temp;
        return;
    }

    Node *current = *vList;
    while (current->next != NULL) {
        if (value >= current->value && value < current->next->value) {
            temp->next = current->next;
            current->next = temp;
            return;
        }
        current = current->next;
    }

    current->next = temp;
}

void delete(NodePtr *vList, int value) {
    if (*vList == NULL) return;
    NodePtr previous = NULL;
    NodePtr current = *vList;

    while (current != NULL) {
        if (current->value = value) {
            if (previous == NULL) {
                *vList = current->next;
                free(current);
                current = *vList;
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
    NodePtr init = NULL;
    int n, value;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %d", &value);
        insert(&init, value);
    }
    //delete(&init, 10);
    printValueList(init);
    return 0;

    return 0;
}