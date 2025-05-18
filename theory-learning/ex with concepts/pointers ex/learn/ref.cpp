#include <iostream>
#include <string>
#include <vector>
using std::cout, std::cin, std::string;


int main() {
    int a = 5;
    int* ptr_a = &a;
    int& clone_a = a;
    cout << *ptr_a << '\n';
    cout << &a << '\n';
    cout << &clone_a << '\n';
    return 0;
}

