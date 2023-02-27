#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} node;

void printList(node *pList)
{
    if (pList == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    node *current = pList;
    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

void insertNode(node **pList, int value)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->value = value;
    newNode->next = NULL;

    if (*pList == NULL)
    {
        *pList = newNode;
        return;
    }

    if (value < (*pList)->value)
    {
        newNode->next = *pList;
        *pList = newNode;
        return;
    }

    node *current = *pList;
    while (current->next != NULL)
    {
        if (value >= current->value && value < current->next->value)
        {
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }
    current->next = newNode;
}

int main()
{
    int i, value;
    node *pList = NULL;

    for (i = 0; i < 10; i++)
    {
        scanf(" %d", &value);

        insertNode(&pList, value);
    }

    printList(pList);
}