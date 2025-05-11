#include <iostream>
#include <string>
#include <vector>
#include <tuple>
using std::cout, std::cin, std::string;


int main() {
    std::tuple <int,char> ex(2,'c');
    std::get<1>(ex) = 'b';
    cout << std::get<1>(ex) << '\n';
    return 0;
}

