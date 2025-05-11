// Napisz pętlę liczącą od 20 do 1, wypisującą tylko liczby parzyste.

#include <iostream>
#include <math.h>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    for (int i = 20; i > 1; i -= 2)
    {
        cout << i << " ";
    }
    return 0;
}