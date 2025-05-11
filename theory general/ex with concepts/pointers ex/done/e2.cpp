#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

void swap(int* a, int* b);


int main() {
    int n1 = 1234;
    int n2 = 568;
    swap(&n1,&n2);
    cout << n2 << ' ' << n1;

    return 0;
}

void swap(int* a, int* b) {
    std::swap(*a,*b);
}