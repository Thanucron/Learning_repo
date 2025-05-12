#include <iostream>

class LinkedList {
private:
    struct Node {
        int data;
        Node* next;

        Node(int data = 0, Node* next = nullptr) : data(data), next(next) {}
    };

    Node* head; // dummy head node

public:
    LinkedList() {
        head = new Node(); // dummy node with no meaningful value
    }

    ~LinkedList() {
        clear();
        delete head;
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head->next;
        head->next = newNode;
    }

    void remove(int value) {
        Node* prev = head;
        Node* curr = head->next;

        while (curr != nullptr) {
            if (curr->data == value) {
                prev->next = curr->next;
                delete curr;
                return;
            }
            prev = curr;
            curr = curr->next;
        }
    }

    void display() const {
        Node* curr = head->next;
        while (curr != nullptr) {
            std::cout << curr->data << " -> ";
            curr = curr->next;
        }
        std::cout << "NULL" << std::endl;
    }

    void clear() {
        Node* curr = head->next;
        while (curr != nullptr) {
            Node* nextNode = curr->next;
            delete curr;
            curr = nextNode;
        }
        head->next = nullptr;
    }
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    std::cout << "List contents: ";
    list.display();

    list.remove(20);
    std::cout << "After removing 20: ";
    list.display();

    return 0;
}
