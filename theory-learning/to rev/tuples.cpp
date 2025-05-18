#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <tuple>
using std::cout, std::cin, std::endl, std::string;

int main() {

    std::tuple <string, int, double> sth("ligma", 4, 1.41);
    cout << std::get<1>(sth);   // tuple is mutable

    return 0;
}