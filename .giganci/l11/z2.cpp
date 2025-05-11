#include <iostream>

int dodawanie(double l1, double l2)
{
    std::cout << "wynik dodawania: " << l1 + l2 << std::endl;
}

int main()
{
    double a = 3.5f;
    double b = 7.4f;
    std::cout << dodawanie(a, b);
    return 0;
}