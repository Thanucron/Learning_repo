#include <iostream>
#include <string>
#include <vector>
using std::cout, std::cin, std::string;

struct Node {
    int val;
    Node * next_ptr;
};

class LinkedList {
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next_ptr) {
                temp = temp->next_ptr;
            }
            temp->next_ptr = newNode;
        }
    }

    void display() const {
        Node* temp = head;
        while (temp) {
            cout << temp->val << " -> ";
            temp = temp->next_ptr;
        }
        cout << "nullptr\n";
    }

    ~LinkedList() {
        Node* temp;
        while (head) {
            temp = head;
            head = head->next_ptr;
            delete temp;
        }
    }
};

int main() {
    LinkedList ll1;
    ll1.insert(10);
    ll1.insert(20);
    ll1.insert(30);
    ll1.display();
    return 0;
}