#include <iostream>

int factorial(int a)
{
    if (a == 0)
        return 1;
    int sum = 1;
    for (int i = 0; i > a; i--)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    int a = 5;
    std::cout << factorial(a);
    return 0;
}
