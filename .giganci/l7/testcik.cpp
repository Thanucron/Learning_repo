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
    int num;
    while (true)
    {
        cout << "Wprowadz liczbe: ";
        cin >> num;
        if (!(num >= 10))
        {
            cout << "nie ma takiej";
            break;
        }
    }
}