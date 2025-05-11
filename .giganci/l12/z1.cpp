#include <iostream>
#include <math.h>

void exp(int &a, int &b)
{
    a = pow(a, 2);
    b = pow(b, 3);
}

int main()
{
    int a = 5;
    int b = 3;
    exp(a, b);
    std::cout << a << ", " << b;
    return 0;
}