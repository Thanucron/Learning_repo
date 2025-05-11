#include <iostream>
#include <cstdint>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    char biegun;
    cout << "Wpisz litere bieguna, a ja go wyswietle: ";
    cin >> biegun;
    biegun = toupper(biegun);

    switch (biegun)
    {
    case 'N':
        cout << "Wpisales biegun polnocny" << endl;
        break;
    case 'S':
        cout << "Wpisales biegun poludniowy" << endl;
        break;
    case 'W':
        cout << "Wpisales biegun zachodni" << endl;
        break;
    case 'E':
        cout << "Wpisales biegun wschodni" << endl;
        break;
    default:
        cout << "Naucz sie biegunow";
        return 0;
    }
}