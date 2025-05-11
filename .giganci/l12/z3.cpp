#include <iostream>
using namespace std;
int fibonacci(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a < 3)
    {
        return 1;
    }
    else
    {
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}
int main()
{
    cout << fibonacci(10);
}