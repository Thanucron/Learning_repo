#include <iostream>
#include <windows.h>

int Multiplier(int a, bool option = true)
{
    if (option)
    {
        return a * 2;
    }
    else
    {
        return a * 3;
    }
}

int main()
{
    std::cout << Multiplier(5, false) << std::endl;
    return 0;
}