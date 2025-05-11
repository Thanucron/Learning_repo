#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

int main() {
    int x = 4;
    int* px = &x;
    *px = 5;
    cout << &x << px << '\n';
    cout << x << *px << '\n';
    

    return 0;
}