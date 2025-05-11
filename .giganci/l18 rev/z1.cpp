#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

string check(int age, int amount) {
    return ((age > 16 && amount >= 18) ? "true" : "false");
}

int main() {
    cout << check(18,16);
    return 0;
}