#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

union Data {
    int i;
    long double f;
};

int main() {
    Data d;
    cout << sizeof(d) << '\n';
    cout << sizeof(d.f) << sizeof(d.i) << '\n';
    d.i = 42;
    cout << sizeof(d) << '\n';
    std::cout << d.f << '\n'; // 42
    d.f = 3.14f;
    std::cout << d.i << '\n'; // Undefined behavior (memory is reused)
}

