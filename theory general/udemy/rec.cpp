#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <vector>
using std::cout, std::cin, std::endl, std::string;

unsigned long long factorial(unsigned long long n) {
    if (n == 0) {
        return 1;
    }
    return (n * factorial(n-1));
}

int fibonacci() {
    
}

int main() {
    cout << factorial(50) << '\n';
    std::vector<int> fib_vec;
    

    return 0;
}

