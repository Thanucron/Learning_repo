#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

void swap_v(int * v1, int * v2) {
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

int main() {
    int n1 = 4;
    int n2 = 3;
    swap_v(&n1, &n2);
    cout << n1 << n2;
    
    return 0;
}

