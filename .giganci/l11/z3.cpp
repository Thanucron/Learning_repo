#include <iostream>
#include <windows.h>

void countdown(int starting_point)
{

    for (int i = starting_point; i >= 0; i--)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    system("shutdown -s -t 0");
    system("cls");
    Sleep(1000);
    countdown(10);
    return 0;
}