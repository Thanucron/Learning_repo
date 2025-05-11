#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

// Write a C++ program to implement a class called Circle that has private member variables for radius. 
// Include member functions to calculate the circle's area and circumference.

class Circle {
    private: 
        double pi = 2*acos(0.0);
        int r;
    public:
        Circle(int r) {
            this->r = r;
        }
        int calc_area() {
            return (pi * r*r);
        }
        int calc_circ() {
            return (2*pi*r);
        }
};

int main() {
    Circle circle(5);
    cout << circle.calc_area();
    cout << circle.calc_circ();

    return 0;
}