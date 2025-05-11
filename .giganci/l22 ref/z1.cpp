#include <iostream>
using std::cout, std::cin;

void swap_vars(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    // std::string s = "barek";
    // strlwr(s);
    char[20] some_str = {};
    constexpr int x{5};
    constexpr int y{10};
    swap_vars(x, y);
    cout << "x: " << x << ", y = " << y << '\n';

}
