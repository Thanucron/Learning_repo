#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

int recursive(int factorial_num);

int main() {
    cout << recursive(6);
    return 0;
}

int recursive(int factorial_num) {
    if (factorial_num > 1) {
        return factorial_num * recursive(factorial_num-1);
    }
    else {
        return 1;
    }
}
