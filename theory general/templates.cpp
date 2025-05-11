#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

template <typename T, typename U>

//auto -> complier deduces the data type

auto max(T x,U y) {
    return (x>y) ? x : y;
}

int main() {

    cout << (int)'9' << endl;
    cout << (int)('4') << endl;
    cout << max(2.1,4) << endl;

    return 0;
}