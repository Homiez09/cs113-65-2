#include <stdio.h>
#include <stdlib.h>

// โครงสร้างข้อมูลของโหนด
typedef struct Node {
    int value;
    struct Node *next;
} node;

// ฟังก์ชันเพิ่มโหนดเข้าไปในลิสต์
void insertNode(node **pList, int value) {
    // สร้างโหนดใหม่
    node *newNode = (node*)malloc(sizeof(node));
    newNode->value = value;
    newNode->next = NULL;
    
    // ถ้าลิสต์ว่างให้โหนดใหม่เป็นโหนดแรกของลิสต์
    if (*pList == NULL) {
        *pList = newNode;
        return;
    }
    
    // ถ้าค่าในโหนดใหม่น้อยกว่าค่าในโหนดแรก ให้เปลี่ยนโหนดแรกเป็นโหนดใหม่
    if (value < (*pList)->value) {
        newNode->next = *pList;
        *pList = newNode;
        return;
    }
    
    // ถ้าค่าในโหนดใหม่มากกว่าหรือเท่ากับค่าในโหนดสุดท้าย ให้เพิ่มโหนดใหม่ที่สุด
    node *current = *pList;
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

// ฟังก์ชันแสดงค่าในลิสต์
void printList(node *pList) {
    if (pList == NULL) {
        printf("List is empty.\n");
        return;
    }
    node *current = pList;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int i, value;
    node *pList=NULL;
    
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf(" %d", &value);
        insertNode(&pList, value);
    }
    
    printf("List: ");
    printList(pList);
}
