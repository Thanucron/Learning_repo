#include <iostream>

void swap(int &a, int &b) //&a of and b are different, & -> save the referrence, every byte has its address             dynamic table
{
    std::swap(a, b);
}

int main()
{
    int a = 10;
    int b = 5;
    swap(a, b);
    std::cout << "a is " << a << ", b is " << b << std::endl;
    return 0;
}
