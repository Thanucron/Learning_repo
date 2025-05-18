#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using std::cout, std::cin, std::endl, std::string;

typedef struct Point {
    int a, b;
    constexpr Point(int x, int y) : a(x),b(y) {};
    constexpr int distance() const {
        return (a*a + b*b);
    }
};

int main(int argc, char **argv) {
    for (int i = 0; i < argc; i++) {
        cout << i << ' ' << argc << ' ' << argv[i] << '\n';
    }
    constexpr Point p(4,5);
    constexpr static int total{p.distance()};
    cout << total << '\n';
    static int num{5};
    cout << num << '\n';
    const char * some_str = "Broth";    // char * str <=> char str[]
    char *some_str = malloc(4 * sizeof(char)); 
    //delete[] pBuffer; // with []
    cout << some_str << '\n';
    std::cin.get();
    return 0;
}

