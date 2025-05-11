#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

enum Color {
    RED, GREEN, BLUE
};

Color modify(Color* pixel) { // possible with reference & ?
    *pixel = RED;
    return *pixel;
}

void printColor(Color & pixel_color) {
    switch(pixel_color) {
        case RED:
            cout << "RED" << '\n';
            break;
        case GREEN:
            cout << "GREEN" << '\n';
            break;
        case BLUE:
            cout << "BLUE" << '\n';
            break;
        default:
            cout << "Unknown color";
    }
}

int main() {
    Color pixel1 = GREEN;
    printColor(pixel1);
    Color*pixel_p = &pixel1;
    pixel1 = modify(pixel_p);
    printColor(pixel1);
    return 0;
}

