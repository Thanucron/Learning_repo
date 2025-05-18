#include <iostream>
#include <string>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

void welcome() {
    cout << "I will calculate the hypotenuse of your triangle" << endl;
}

void getTheValues(double & a, double & b) {
    cout << "Put the length of the first side: ";
    cin >> a;
    cout << "Put the length of the second side: ";
    cin >> b;
}


void calculateAndRespond(double & a, double & b) {
    double c = sqrt(pow(a,2) + pow(b,2));
    cout << "Length of the hypotenuse: " << c << endl;
}

int main() {
    welcome();
    double a,b;
    getTheValues(a,b);   // put variables in main or make them global, they don't have to be locally in the func
    calculateAndRespond(a,b);
    return 0;
}
