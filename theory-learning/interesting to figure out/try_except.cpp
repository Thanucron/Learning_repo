#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

int main() {

    int num;
    cout << "Pass a num: ";
    try {
        cin >> num;
    } catch(...) {      // how to fix
        num = 43;
        cout << "no num";
    }
    cout << num;

    return 0;
}