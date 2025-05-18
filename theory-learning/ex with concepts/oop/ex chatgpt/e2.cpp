#include <iostream>

class MyClass {
    static int count;  // Declaration
    int num = 8;
public:
    MyClass() { count++; }
    static void showCount() { std::cout << "Count: " << count << std::endl; }
    void printNum() {
        std::cout << num << '\n';
    }
};

// Definition and Initialization
int MyClass::count = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    obj1.showCount();
    obj2.showCount();
    obj2.printNum();
    return 0;
}
