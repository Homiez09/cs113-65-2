#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void insert(int data) {
        Node* newNode = new Node{data, nullptr};

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    bool edit(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    bool deleteNode(int data) {
        if (head == nullptr) {
            return false;
        }

        if (head->data == data) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return true;
        }

        Node* current = head;
        while (current->next != nullptr) {
            if (current->next->data == data) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void print() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "null" << std::endl;
    }

private:
    Node* head;
};

int main() {
    LinkedList list;

    // Insert nodes
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);

    // Print the list
    list.print(); // Output: 1 -> 2 -> 3 -> 4 -> null

    // Edit a node
    list.edit(3, 30);

    // Print the list
    list.print(); // Output: 1 -> 2 -> 30 -> 4 -> null

    // Delete a node
    list.deleteNode(2);

    // Print the list
    list.print(); // Output: 1 -> 30 -> 4 -> null

    return 0;
}
