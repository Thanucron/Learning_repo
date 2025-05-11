#include <iostream>
#include <windows.h>

void Compare(double l1, double l2)
{
    if (l1 > l2)
    {
        std::cout << l1 << " is greater than " << l2;
    }
    else if (l2 > l1)
    {
        std::cout << l1 << " is less than " << l2;
    }
    else
    {
        std::cout << l1 << " is the same as " << l2;
    }
}

int main()
{
    Compare(2, 3);
    return 0;
}