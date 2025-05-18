#include <iostream>
#include <string>
#include <vector>
#include <list>
using std::cout, std::cin, std::string;

struct Node {       // basically an int pointer but we want to point to the next element
    int val;
    Node * next_ptr;
    Node(int value = 0, Node * next = nullptr) : val(value), next_ptr(next) {}
};

class LinkedList {
    Node * head;
    public:
        LinkedList() {
            head = new Node();
        }
        ~LinkedList() {
            delete head;
        }
        void push_front(int value) {
            Node * new_node = new Node(value);
            new_node->next_ptr = head->next_ptr;
            head->next_ptr = new_node;
        }
        void push_back(int value) {
            Node * new_node = new Node(value);
            
        }


};


int main() {
    LinkedList ll1;
    

    return 0;
}

