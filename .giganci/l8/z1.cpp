#include <iostream>
#include <ctime>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int a;
    int b;
    do
    {
        int reszta = a % b;
        if (reszta == 0)
        {
            cout << "NWD = " << b;
        }
        else
        {
            a = b;
            b = reszta;
        }
    } while ((a % b) != 0);
    return 0;
}