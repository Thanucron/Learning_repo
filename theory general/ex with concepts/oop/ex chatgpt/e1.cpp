#include <iostream>
#include <string>
#include <vector>
using std::cout, std::cin, std::string;

class Car {
    public:
    static int count;
};

int Car::count = 5;

int main() {
    Car::count++;
    cout << Car::count << '\n';
    // Car car1;
    // cout << car1.count << '\n';
    // cout << sizeof(car1.count) << '\n';
    return 0;
}

