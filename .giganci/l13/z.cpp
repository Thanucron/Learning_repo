#include <iostream>
#include <math.h>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void swap_two_var(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
    // swap(a, b)
}

int main()
{
    int a = 2;
    int b = 5;
    swap_two_var(a, b);
    cout << a << ", " << b << endl;
    return 0;
}