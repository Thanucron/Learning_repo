#include <iostream>

namespace first
{
    int x = 2;
}

namespace second
{
    int x = 1;
}

int checkx();

int main()
{
    using namespace second;
    using std::cout, std::cin, std::endl;
    // int x = 0;
    // int x = 1;      // error
    // :: -> scope resolution operator
    cout << x;
    int x = 0;
    int &y = x;

    std::cout << x;
    // std::cout << checkx();
}

int checkx()
{
    // global x;
    int x = 3;
    std::cout << x;
    return x;
}