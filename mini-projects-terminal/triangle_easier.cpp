#include <iostream>
#include <string>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

void getTheValues() {           //std::tuple<long double, long double, long double>
    long double a,b,c;
    cout << "Put the length of the first side: ";
    cin >> a;
    cout << "Put the length of the second side: ";
    cin >> b;
    cout << "Put the length of the third side: ";
    cin >> c; 
    if (a >= b && a >= c) {
        cout << "a";
        if (b+c<a) {
            cout << "The hypotenuse cannot be larger than the sum of the other sides for them to make a triangle";
        }
        else {
            if (pow(a,2) == pow(b,2) + pow(c,2))
        }
    }
    //return std::make_tuple(a,b,c);
}

void ifATriangle() {

}

void welcome() {
    cout << "I will tell the properites of your triangle:"
}

int main() {
    getTheValues();
    welcome();
    ifATriangle(getTheValues());

    return 0;
}

