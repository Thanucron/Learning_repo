#include <iostream>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

int main()
{
    int suma;
    cout << suma;
    for (int i = 10; i >= 1; i--)
    {
        i += suma;
        suma += i;
        cout << i << endl;
    }
    cout << suma;
}